`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// PhotonCounter
//
// Count pulses and measure the distribution with respect to some sync signal. The top
// level structure is as follows:
// - photon pulses move through a series of 64 latches clocked at clk2x
// - on sync signal, the data on the latches is saved
//	- there are 64 counters which increment whenever there is a photon in corresponding latch
// - the data is shifted out of the counters when logger starts
// - logger sends the data out to a pipe, to be picked up by the PC
//
//  In many ways, this is a ridiculous design, but it's very fast.
////////////////////////////////////////////////////////////////////////////////

// Modified by Alexei on 20/10/2013

//////////////// CONSTANTS: //////////////////////////////////
`define nbins 10 // number of time bins in the shift register
`define binsize 16  // size of counters associated with each time bin (for signals slower than photon count rate)

`define nchOut 2  // number of output channels associated with the fast pulse sequencer
`define nchIn 2   // number of input channels associated with the fast pulse sequencer
`define nchOutSlow 2  // number of output channels associated with the slow pulse sequencer
`define nchInSlow 2   // number of input channels associated with the slow pulse sequencer

/////////////////////////////////////////////////////////////////////////////////////
//////////////// PHOTON COUNTER MODULE //////////////////////////////////////////////
module PhotonCounter(
   // Opal Kelly Host Interface pins:
   input  wire [7:0]  hi_in,
   output wire [1:0]  hi_out,
   inout  wire [15:0] hi_inout,
   input  wire 		 clk_in,   // input clock from external PLL is assigned to this pin
   output wire [7:0]  led,      // outputs to LEDs for testing
	// incoming and outgoing signals:
   input  wire		  pmt_in1,     // PMT1 pulses
	input  wire		  pmt_in2,     // PMT2 pulses
   input  wire		  sync_in,    // external sync signal
	output wire [`nchOut-1:0]	pulse_out,  // "probe" pulses to AOMs
	output wire [`nchOutSlow-1:0]	slow_pulse_out,  // "probe" pulses to AOMs
	output wire phcountbool,  // when high, photons are collected
   output wire      pmt_out,
   output wire		  reset_out
	
	      /*
			/////////////////////////////////////////////////////////////////////////////////
			// Inputs for simulation only (unassigned to physical ports): COMMENT OUT when impementing design
			input wire [16:0] max_count_f,
			input wire sync_src,
			input wire [7:0] sync_div,
			input wire [31:0] clk_divide,
			
			input wire [31:0] pulsePeriod_div,
			input wire [31:0] pw_div_out0,
			input wire [31:0] pw_div_out1,
			input wire [31:0] pw_div_in0,
			input wire [31:0] pw_div_in1,
			input wire [31:0] delay_div_out0,
			input wire [31:0] delay_div_out1,
			input wire [31:0] delay_div_in0,
			input wire [31:0] delay_div_in1,
			
			input wire [31:0] slow_pulsePeriod_div,
			input wire [31:0] slow_pw_div_out0,
			input wire [31:0] slow_pw_div_out1,
			input wire [31:0] slow_pw_div_in0,
			input wire [31:0] slow_pw_div_in1,
			input wire [31:0] slow_delay_div_out0,
			input wire [31:0] slow_delay_div_out1,
			input wire [31:0] slow_delay_div_in0,
			input wire [31:0] slow_delay_div_in1
			/////////////////////////////////////////////////////////////////////////////////////
	      */
	
	);
// end of input and output wire declarations

// LED OUTPUT: led's light up when LOW (=0)
//assign led = ~{sync_diode, ~sync_diode, pmt_diode, ~pmt_diode, PipeFull, PipeEmpty, ld_diode, 1'b0};
assign led = ~sync_counter_long[7:0];  // light up D9:D1
wire [31:0] testwire = slow_delay_div_in[0];

//////////////////////// DESIGN CLOCK SIGNALS ///////////////////////////////////////////////////////
// PLL loop. Takes input on clk_in, generates clk at that frequency and clk2x at twice the frequency
// This creates a lot of issues later due to clock boundary crossing and such
// but is unfortunatelly necessary in order to allow response faster than what certain parts of the design can be clocked at
wire clk, clk2x, locked;
pll pllloop (.CLKIN_IN(clk_in), .RST_IN(1'b0), .CLKIN_IBUFG_OUT(), .CLK0_OUT(clk), .CLK2X_OUT(clk2x),.LOCKED_OUT(locked));

///////////////////////////////////////////////////////////////////////////////
// Reset signal
wire ok_reset, power_on_reset;	  
reg reset, reset_buf;
assign ok_reset = TrigIn40[0];  // This trigger signal from computer will result in reset of the FPGA
SRL16 #(.INIT(16'hFFFF)) reset_sr (.D(1'b0), .CLK(clk), .Q(power_on_reset), .A0(1'b1), .A1(1'b1), .A2(1'b1), .A3(1'b1));
always @(posedge clk) begin
	reset_buf <= ok_reset | ~locked | power_on_reset;
	reset <= reset_buf;
end
assign reset_out = 1'b0;

///////////////////////////////////////////////////////////////////////////////
// OK wires and pipes
///////////////////////////////////////////////////////////////////////////////
//  TrigIn40[0] : reset FPGA
//  TrigIn40[1] : update integration time
//  TrigIn40[2] : update clk_divide for setting the shift register clock
//  TrigIn40[3] : update sync_div
//  TrigIn40[4] : update sync_src
//  TrigIn40[5] : spare
//  TrigIn40[6] : update params of output ch0
//  TrigIn40[7] : update params of output ch1
//  TrigIn40[8] : update params of input ch0
//  TrigIn40[9] : update params of input ch1
//  TrigIn40[10] : update params of slow output ch0
//  TrigIn40[11] : update params of slow output ch1
//  TrigIn40[12] : update params of slow input ch0
//  TrigIn40[13] : update params of slow input ch1
//
//  WireIn00 : 16 MSBits from computer for number 1 (int time, clk div, etc...)
//  WireIn01 : 16 LSBits for above number
//  WireIn02 : 16 MSBits from computer for number 2 (pulse widths)
//  WireIn03 : 16 LSBits for above number
//  WireIn04 : 16 MSBits from computer for number 3 (delays)
//  WireIn05 : 16 LSBits for above number
//
// Triggers and wires communicating with computer live
wire [15:0] TrigIn40;
wire [15:0] WireIn00, WireIn01, WireIn02, WireIn03, WireIn04, WireIn05;
// There are two output pipes feeding data to the computer for each of the 2 PMTs. These are wires necessary fop pipe signalling:
wire [15:0] PipeData1;
wire		PipeWrite1, PipeEmpty1, PipeFull1;
wire [15:0] PipeData2;
wire		PipeWrite2, PipeEmpty2, PipeFull2;
// OK buses necessary for Opal Kelly on-board communication:
wire        ti_clk;
wire [30:0] ok1;
wire [16:0] ok2, ok2_1, ok2_2, ok2_pipe, ok2_ep00;

/////////////////////////////////////////////////////////////////////////////////
//////// Check for updates to okHost interface inputs :
/////////////////////////////////////////////////////////////////////////////////
         /*
			/////////////////////////////////////////////////////////////////////
			// For simulation only to bypass OK Host communication: COMMENT OUT when implementing design
			wire [31:0] pw_div_out[0:`nchOut-1];
			wire [31:0] pw_div_in[0:`nchIn-1];
			wire [31:0] delay_div_out[0:`nchOut-1];
			wire [31:0] delay_div_in[0:`nchIn-1];
			wire [31:0] slow_pw_div_out[0:`nchOut-1];
			wire [31:0] slow_pw_div_in[0:`nchIn-1];
			wire [31:0] slow_delay_div_out[0:`nchOut-1];
			wire [31:0] slow_delay_div_in[0:`nchIn-1];
			assign pw_div_out[0] = pw_div_out0;
			assign pw_div_out[1] = pw_div_out1;
			assign pw_div_in[0] = pw_div_in0;
			assign pw_div_in[1] = pw_div_in1;
			assign delay_div_out[0] = delay_div_out0;
			assign delay_div_out[1] = delay_div_out1;
			assign delay_div_in[0] = delay_div_in0;
			assign delay_div_in[1] = delay_div_in1;
			assign slow_pw_div_out[0] = slow_pw_div_out0;
			assign slow_pw_div_out[1] = slow_pw_div_out1;
			assign slow_pw_div_in[0] = slow_pw_div_in0;
			assign slow_pw_div_in[1] = slow_pw_div_in1;
			assign slow_delay_div_out[0] = slow_delay_div_out0;
			assign slow_delay_div_out[1] = slow_delay_div_out1;
			assign slow_delay_div_in[0] = slow_delay_div_in0;
			assign slow_delay_div_in[1] = slow_delay_div_in1;
			//////////////////////////////////////////////////////////////////////////
			*/

// (When simulating design, comment out everything starting here and until the sync signal detection section) 
// Registers that will be updated by OK wires upon OK Trigger signalling
reg [15:0] max_count_f; // how long to integrate the photon counts for in units of 2^16 clk_2x cycles
reg sync_src;  // choses between internal or external sync signal
reg [7:0] sync_div; // number of sync cycles to skip in the LO
reg [31:0] clk_divide; // sets the counter threshold for triggering the shift register clock (number of clk2x edges to skip)
reg [31:0] pulsePeriod_div;       // sets the counter threshold for triggering the pulse programmer clock
reg [31:0] pw_div_out[0:`nchOut-1]; // width of output channel pulses in terms of number of clk2x cycles
reg [31:0] pw_div_in[0:`nchIn-1];  //width of input channel pulses in terms of number of clk2x cycles
reg [31:0] delay_div_out[0:`nchOut-1];  //delaty of output channel pulses in terms of clk2x cycles
reg [31:0] delay_div_in[0:`nchIn-1];  //delaty of output channel pulses in terms of clk2x cycles
reg [31:0] slow_pulsePeriod_div;       // sets the counter threshold for triggering the pulse programmer clock
reg [31:0] slow_pw_div_out[0:`nchOutSlow-1]; // width of output channel pulses in terms of number of clk2x cycles
reg [31:0] slow_pw_div_in[0:`nchInSlow-1];  //width of input channel pulses in terms of number of clk2x cycles
reg [31:0] slow_delay_div_out[0:`nchOutSlow-1];  //delaty of output channel pulses in terms of clk2x cycles
reg [31:0] slow_delay_div_in[0:`nchInSlow-1];  //delaty of output channel pulses in terms of clk2x cycles
//	Integration time counter threshold updated:
always @(posedge clk)
	if (reset) max_count_f <= 16'hE5;  //229
	else if (TrigIn40[1]) max_count_f <= WireIn00;

////// Update source of sync (LO) signal: can be external or internal
always @(posedge clk) begin
   if (reset) sync_src <= 1'h0;
	else if (TrigIn40[4]) sync_src <= WireIn00[0];  // only one bit of this wire is used to communicate this binary info
end

////// Update sync_div variable which sets how many sync edges to skip (allows to see a longer coherent trace)
always @(posedge clk) 
	if (reset) sync_div <= 8'b0;
	else if (TrigIn40[3]) sync_div <= WireIn00[7:0];
	
// update the number of clk2x pulses to skip for generating the shift register clock:
always @(posedge clk) begin
	if (reset) clk_divide <= 32'h0;
	else if (TrigIn40[2]) clk_divide <= {WireIn01[15:0],WireIn00[15:0]};
end

// Update period and duty cycle of pulse output signal via Opal Kelly wires if the trigger #6 is activated
always @(posedge clk) begin
   if (reset) begin
		  pulsePeriod_div<= 32'h0;
		  pw_div_out[0] <= 32'h0;
		  delay_div_out[0] <= 32'h0;
		  pw_div_out[1] <= 32'h0;
		  delay_div_out[1] <= 32'h0;
		  pw_div_in[0] <= 32'h0;
		  delay_div_in[0] <= 32'h0;
		  pw_div_in[1] <= 32'h0;
		  delay_div_in[1] <= 32'h0;
		  slow_pulsePeriod_div<= 32'h0;
		  slow_pw_div_out[0] <= 32'h0;
		  slow_delay_div_out[0] <= 32'h0;
		  slow_pw_div_out[1] <= 32'h0;
		  slow_delay_div_out[1] <= 32'h0;
		  slow_pw_div_in[0] <= 32'h0;
		  slow_delay_div_in[0] <= 32'h0;
		  slow_pw_div_in[1] <= 32'h0;
		  slow_delay_div_in[1] <= 32'h0;

   end
	else begin
	   // outputs:
	     if (TrigIn40[6]) begin
			  pulsePeriod_div <= {WireIn01[15:0],WireIn00[15:0]};
			  pw_div_out[0] <= {WireIn03[15:0],WireIn02[15:0]};
			  delay_div_out[0] <= {WireIn05[15:0],WireIn04[15:0]};
		     end
		  if (TrigIn40[7]) begin
			  pulsePeriod_div <= {WireIn01[15:0],WireIn00[15:0]};
			  pw_div_out[1] <= {WireIn03[15:0],WireIn02[15:0]};
			  delay_div_out[1] <= {WireIn05[15:0],WireIn04[15:0]};
		     end
		//  inputs:	  
		  if (TrigIn40[8]) begin
			  pulsePeriod_div <= {WireIn01[15:0],WireIn00[15:0]};
			  pw_div_in[0] <= {WireIn03[15:0],WireIn02[15:0]};
			  delay_div_in[0] <= {WireIn05[15:0],WireIn04[15:0]};
		     end
		  if (TrigIn40[9]) begin
			  pulsePeriod_div <= {WireIn01[15:0],WireIn00[15:0]};
			  pw_div_in[1] <= {WireIn03[15:0],WireIn02[15:0]};
			  delay_div_in[1] <= {WireIn05[15:0],WireIn04[15:0]};
		     end
		  // slow outputs:
	     if (TrigIn40[10]) begin
			  slow_pulsePeriod_div <= {WireIn01[15:0],WireIn00[15:0]};
			  slow_pw_div_out[0] <= {WireIn03[15:0],WireIn02[15:0]};
			  slow_delay_div_out[0] <= {WireIn05[15:0],WireIn04[15:0]};
		     end
		  if (TrigIn40[11]) begin
			  slow_pulsePeriod_div <= {WireIn01[15:0],WireIn00[15:0]};
			  slow_pw_div_out[1] <= {WireIn03[15:0],WireIn02[15:0]};
			  slow_delay_div_out[1] <= {WireIn05[15:0],WireIn04[15:0]};
		     end
		//  slow inputs:	  
		  if (TrigIn40[12]) begin
			  slow_pulsePeriod_div <= {WireIn01[15:0],WireIn00[15:0]};
			  slow_pw_div_in[0] <= {WireIn03[15:0],WireIn02[15:0]};
			  slow_delay_div_in[0] <= {WireIn05[15:0],WireIn04[15:0]};
		     end
		  if (TrigIn40[13]) begin
			  slow_pulsePeriod_div <= {WireIn01[15:0],WireIn00[15:0]};
			  slow_pw_div_in[1] <= {WireIn03[15:0],WireIn02[15:0]};
			  slow_delay_div_in[1] <= {WireIn05[15:0],WireIn04[15:0]};
		     end
   end
end
// (end commenting here for simulation of desing)


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////   Detect sync signal (LO) (which can be generated internally or externally) ////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
reg [3:0] sync_buf;    // short register for buffering external sync signal in order to detect its edge
reg sync2x, sync2x_exp, sync2x_free, sync2x_det, sync2x_det_1st, sync2x_det_free; // processed sync signals 1 clk2x period long except sync2x_exp, which lasts until shift register clock goes high
reg sync1x; // processed sync signal 1 clk period long
reg [7:0] sync_counter; // sync_counter counts clk2x cycles until it reaches sync_div, which determines how many clk2x edges to skip
reg sync_en, sync_en_det; // turns high and low depending on whether current sync edge should be detected

// Buffer the input sync signal for edge detection
always @(posedge clk2x)
	sync_buf <= {sync_buf[2:0], (sync_in & sync_src) | ( (nintcyc_counter == `nbins) & ~sync_src) };  // take external sync signal if sync_src = 1 and use an internal trigger otherwise

// Generate 1clk long sync1x and sync2x signal
always @(posedge clk2x)	begin
	sync2x_det_1st <= sync_en & sync_buf[2] & (~sync_buf[3]);  //detects only sync edges selected by sync_en
	sync2x_det <= sync2x_det_1st;
	sync2x <= sync2x_det;
	sync2x_exp <= sync2x_det | ((~set_clk) & sync2x_exp); // this signal goes high once a sync edge above is detected and persists until the shift register clock goes high
	//generate unimpeded sync signal for counting (detect every sync edge)
	sync2x_det_free <= sync_buf[2] & (~sync_buf[3]);
	sync2x_free <= sync2x_det_free;
end

// Generate sync signal that lasts a whole clk cycle as opposed to clk2x only: this one triggers logging of photon counts
always @(posedge clk) begin
	sync1x <= (sync2x | sync2x_det);
end	

// Set sync_en to detect every sync_div edge of sync signal only to see a longer coherent trace
always @(posedge clk2x) begin
	if(reset) sync_counter <= 8'b0;
	else if(sync2x_free) sync_counter <= (sync_counter == sync_div) ? 8'h0 : sync_counter + 8'h1;
	sync_en_det <= (sync_counter == sync_div);
	sync_en <= sync_en_det;
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////// generate internal sync signal:            ///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
reg [31:0] clk2x_counter_intsync;  // counter of clk2x pulses to skip to generate a int_sync_clock
reg [31:0] nintcyc_counter; // counter of int_sync_clock clock cycles
reg int_sync_clock, int_sync_clock_det;  // internal sync clock
// int_sync_clock, identical to shift register clock set_clk, but independent:
always @(posedge clk2x) begin
   if(reset | (clk2x_counter_intsync == clk_divide))
		clk2x_counter_intsync <= 32'h0;
	else 
		clk2x_counter_intsync <= clk2x_counter_intsync + 32'h1;
	int_sync_clock_det <= (clk2x_counter_intsync == clk_divide);
	int_sync_clock <= int_sync_clock_det;	
end
// Count number of int_sync_clock cycles until all the bins are filled up, then sync:
always @(posedge clk2x) begin
	if(reset | (nintcyc_counter == `nbins)) nintcyc_counter <= 8'h0;
	else if(int_sync_clock) nintcyc_counter <= nintcyc_counter + 8'h1;
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////// generate slower clock for shift register ///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
reg [31:0] clk2x_counter;  // counter of fast clock pulses within one slow clock pulse for shift register clock and internal sync clock
reg set_clk, set_clk_det;  // shift register clock
reg [7:0] shifts_counter;  // counter variable of shift register clock cycles
wire sr_active; // wire that determines whether the next set_clk edge should generate a shift or whether we should be waiting for a sync
assign sr_active = (shifts_counter < `nbins-1);

always @(posedge clk2x) begin
   if(reset)
		clk2x_counter <= 32'h0;
	else if(sync2x_det_1st)   // the "first" detection of the sync signal resets this counter
		clk2x_counter <= 32'h1;
   else if (clk2x_counter == clk_divide) // otherwise it is naturally reset when it reches the designated set_clk period
		clk2x_counter <= 32'h0;
	else 
		clk2x_counter <= clk2x_counter + 32'h1;   // otherwise simply increment the counter
	set_clk_det <= (clk2x_counter == clk_divide) & ~sync2x_det_1st;  // this clock is automatically set to zero upon sync detection
	set_clk <= set_clk_det & ~sync2x_det_1st;	    // this clock is automatically set to zero upon sync detection
end
// counts set_clk cycles since last sync
always @(posedge clk2x) begin
	if(reset | sync2x_det) shifts_counter <= 8'h0;
	else if(set_clk) shifts_counter <= shifts_counter + 8'h1;
end


////////////////////////////////////////////////////////////////////////////////////////////////////
/////             SLOW PULSE SEQUENCER:                         ////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
// slow input and output pulse signals:
reg [`nchOutSlow-1:0] slow_pulsed_sig, slow_pulsed_sig_det;
reg [`nchOutSlow-1:0] slow_read_pulse, slow_read_pulse_det;

reg [31:0] sync_counter_long;  // counter of sync cycles to keep track of slow sequence
// variables for indicating the number of sync cycles until the end of the pulse:
wire [31:0] slow_pulse_end_out[0:`nchInSlow-1];
wire [31:0] slow_pulse_end_in[0:`nchInSlow-1];
assign slow_pulse_end_out[0] = slow_pw_div_out[0] + slow_delay_div_out[0];
assign slow_pulse_end_out[1] = slow_pw_div_out[1] + slow_delay_div_out[1];
assign slow_pulse_end_in[0] = slow_pw_div_in[0] + slow_delay_div_in[0];
assign slow_pulse_end_in[1] = slow_pw_div_in[1] + slow_delay_div_in[1];

always @(posedge clk2x) begin
   if(reset | (sync2x_det_free & ((sync_counter_long + 32'h1) >= slow_pulsePeriod_div)))  // reset at the next sync event if counter reaches period
		sync_counter_long <= 32'h0;
	else if(sync2x_det_free)
		sync_counter_long <= (sync_counter_long + 32'h1);
		
	slow_pulsed_sig_det[0]  <= ( (sync_counter_long < slow_pulse_end_out[0]) & (sync_counter_long >= slow_delay_div_out[0]) );
	slow_pulsed_sig[0] <= slow_pulsed_sig_det[0];
	
	slow_pulsed_sig_det[1]  <= ( (sync_counter_long < slow_pulse_end_out[1]) & (sync_counter_long >= slow_delay_div_out[1]) );
	slow_pulsed_sig[1] <= slow_pulsed_sig_det[1];
	
	slow_read_pulse_det[0]  <= ( (sync_counter_long < slow_pulse_end_in[0]) & (sync_counter_long >= slow_delay_div_in[0]) );
	slow_read_pulse[0] <= slow_read_pulse_det[0];
	
	slow_read_pulse_det[1]  <= ( (sync_counter_long < slow_pulse_end_in[1]) & (sync_counter_long >= slow_delay_div_in[1]) );
	slow_read_pulse[1] <= slow_read_pulse_det[1];
	
end

// Assign pulse signals to outputs: 
assign slow_pulse_out[0] = slow_pulsed_sig[0];
assign slow_pulse_out[1] = slow_pulsed_sig[1];


//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////          FAST PULSE SEQUENCER:               ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
reg [`nchOut-1:0] pulsed_sig, pulsed_sig_det;
reg [`nchOut-1:0] read_pulse, read_pulse_det;

reg [31:0] clk2x_periodCounter;   // counter of clk2x cycles to keep track of fast sequence
// variables for indicating the number of sync2x cycles until the end of the pulse:
wire [31:0] pulse_end_out[0:`nchIn-1];
wire [31:0] pulse_end_in[0:`nchIn-1];
assign pulse_end_out[0] = pw_div_out[0] + delay_div_out[0];
assign pulse_end_out[1] = pw_div_out[1] + delay_div_out[1];
assign pulse_end_in[0] = pw_div_in[0] + delay_div_in[0];
assign pulse_end_in[1] = pw_div_in[1] + delay_div_in[1];

//generate pulsed programmer clock and pulsed signals
always @(posedge clk2x) begin
   if(reset | (clk2x_periodCounter == pulsePeriod_div) | sync2x_det_1st )   // reset if reached period or if sync occured
		clk2x_periodCounter <= 32'h0;
	else 
		clk2x_periodCounter <= clk2x_periodCounter + 32'h1;
		
	pulsed_sig_det[0]  <= ( (clk2x_periodCounter < pulse_end_out[0]) & (clk2x_periodCounter >= delay_div_out[0]) );
	pulsed_sig[0] <= pulsed_sig_det[0];
	
	pulsed_sig_det[1]  <= ( (clk2x_periodCounter < pulse_end_out[1]) & (clk2x_periodCounter >= delay_div_out[1]) );
	pulsed_sig[1] <= pulsed_sig_det[1];
	
	read_pulse_det[0]  <= ( (clk2x_periodCounter < pulse_end_in[0]) & (clk2x_periodCounter >= delay_div_in[0]) );
	read_pulse[0] <= read_pulse_det[0];
	
end

// Assign pulse signals to outputs:
assign pulse_out[0] = pulsed_sig[0] | slow_pulsed_sig[0];
assign pulse_out[1] = pulsed_sig[1] | slow_pulsed_sig[1];

///////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////   DETECT PMT PULSES         /////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
reg [3:0] pmt_buf1;
reg pmt1, pmt_det1, pmt_free1;
reg [3:0] pmt_buf2;
reg pmt2, pmt_det2, pmt_free2;

// Photons will only be detected if phcountbool is high
assign phcountbool = read_pulse[0] & slow_read_pulse[0];

// Buffer PMT pulses for edge detection:
always @(posedge clk2x) begin
	pmt_buf1 <= {pmt_buf1[2:0], pmt_in1 && phcountbool};
	pmt_buf2 <= {pmt_buf2[2:0], pmt_in2 && phcountbool};
end

//watch for pmt edge within set_clk period	
always @(posedge clk2x) begin
   // PMT1:
	pmt_det1 <= pmt_buf1[2] & (~pmt_buf1[3]);
	pmt_free1 <= pmt_det1;
	pmt1 <= pmt_det1 | ( ( ~(set_clk & sr_active) & ~sync2x_det) & pmt1); // keep pmt1 high until shift is performed (either due to shift or sync event)
	//PMT2:
	pmt_det2 <= pmt_buf2[2] & (~pmt_buf2[3]);
	pmt_free2 <= pmt_det2;
	pmt2 <= pmt_det2 | ( ( ~(set_clk & sr_active) & ~sync2x_det) & pmt2);  // keep pmt2 high until shift is performed (either due to shift or sync event)
end

// Upon detection of photon on PMT1, send an output pulse that is 16 clk cycles long
// (leftover from old versions of the code)
reg [3:0] pmt_strecher;
reg pmt1x;
always @(posedge clk)
	pmt1x <= pmt_free1 | pmt_det1;
always @(posedge clk)
   if (pmt1x & ~|pmt_strecher) pmt_strecher <= 4'hF;
	else if (|pmt_strecher) pmt_strecher <= pmt_strecher - 4'b1;
assign pmt_out = |pmt_strecher;


////////////////////////////////////////////////////////////////////////////////////////////////////////
///////// Send detected photons down a shift register (at most 1 PMT pulse per bin)  ////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
reg [`nbins-1:0] photons1, photons_sync1;
reg [`nbins-1:0] photons2, photons_sync2;

always @(posedge clk2x) begin
	// on shift register clock edge set_clk (if active) or upon detection of sync (just before sync2x goes high), perform the shift on the shift register, recording a new photon:
	if( (set_clk & sr_active) | sync2x_det) begin   
	   photons1 <= {photons1[`nbins-2:0], pmt1};
		photons2 <= {photons2[`nbins-2:0], pmt2};
	end
	// upon sync2x, move shift register to a temporary register and clear the shift register
	else if(sync2x) begin          
      photons1 <= `nbins'b0;
		photons2 <= `nbins'b0;
		photons_sync1 <= photons1;
	   photons_sync2 <= photons2;
	end

end


// old version of shift register, triggered by set_clk and reset upon sync2x:
/*	
   always @(posedge clk2x) begin
        if(set_clk) begin
	        photons1 <= {photons1[`nbins-2:0] & {(`nbins-1){~sync2x}}, pmt1};
		     photons2 <= {photons2[`nbins-2:0] & {(`nbins-1){~sync2x}}, pmt2};
	     end
	end
*/

/*
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////// Send detected photon counts per bin down a shift register (counter at each bin)  ////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// admit at most 256 photons in one shift register clock cycle
reg [`nbins*8-1:0] photons1, photons_sync1;
reg [`nbins*8-1:0] photons2, photons_sync2;
reg [7:0] timebin_counter1;  // counter variable for PMT1 pulses per shift register bin
reg [7:0] timebin_counter2;  // counter variable for PMT1 pulses per shift register bin

always @(posedge clk2x) begin
	// on shift register clock edge set_clk (if active) or upon detection of sync (just before sync2x goes high), perform the shift on the shift register, recording a new photon bin count:
	if( (set_clk & sr_active) | sync2x_det) begin   
	   photons1 <= {photons1[(`nbins-1)*8-1:0], timebin_counter1};
		photons2 <= {photons2[(`nbins-1)*8-1:0], timebin_counter2};
	   timebin_counter1 <= 8'h0;
		timebin_counter2 <= 8'h0;
	end
	// upon sync2x, move shift register to a temporary register and clear the shift register
	else begin
	   if(sync2x) begin          
         photons1 <= `nbins'b0;
		   photons2 <= `nbins'b0;
		   photons_sync1 <= photons1;
	      photons_sync2 <= photons2;
	   end

	   if(pmt_free1) timebin_counter1 <= timebin_counter1 + 8'h1;
		if(pmt_free2) timebin_counter2 <= timebin_counter2 + 8'h1;
	end
	   
end
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////					  
//             Log photons on sync from the temp register          //////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
wire [15:0] phcount1;
wire [15:0] phcount2;
wire count_ld1;
wire count_ld2;
wire [((`nbins-1)*(`binsize)-1):0] databus1;
wire [((`nbins-1)*(`binsize)-1):0] databus2;
reg clear_photons, clear_det;

phcounter counter1[(`nbins-1):0] (.count_o({databus1, phcount1[`binsize-1:0]}), .clk_i(clk), .reset_i(reset), .photon_i(photons_sync1), .sync_i(sync1x), .ld_i(count_ld1), .count_i({`binsize'h0, databus1}), .clear_i(clear_photons | TrigIn40[1] | TrigIn40[3])); //MUX
phcounter counter2[(`nbins-1):0] (.count_o({databus2, phcount2[`binsize-1:0]}), .clk_i(clk), .reset_i(reset), .photon_i(photons_sync2), .sync_i(sync1x), .ld_i(count_ld2), .count_i({`binsize'h0, databus2}), .clear_i(clear_photons | TrigIn40[1] | TrigIn40[3])); //MUX

// Uncomment the following line for binsize < 16
//assign phcount[15:`binsize] = {(16-`binsize){1'b0}};


////////////////////////////////////////////////////////////////////////////////////////////////////////
// Generate an data output trigger activated when counter reaches value set by desired integration time
/////////////////////////////////////////////////////////////////////////////////////////////////////////
reg trigger_f, log_f1, log_f2;
reg [31:0] counter_f;
wire trigger;

// trigger activated by counter reaching the integration time number number (in units of 2^16 clk2x cycles)
assign trigger = (counter_f[31:16] > max_count_f) & ~trigger_f;

always @(posedge clk)
	if (reset | TrigIn40[1] | TrigIn40[3]) counter_f <=  32'h0; //reset counter when int time or sync div updated
	else 
		if (trigger_f) counter_f <= 32'h0;
		else counter_f <= counter_f + 32'h1;

//always @(posedge clk) trigger_f <= TrigIn40[1];
always @(posedge clk) begin
	trigger_f <= trigger;
	log_f1 <= trigger_f & PipeEmpty1;
	log_f2 <= trigger_f & PipeEmpty2;
	clear_det <= trigger_f;
	clear_photons <= clear_det;
end

///////////////////////////////////////////////////////////////////////////////
// Send data out to the PC via the logger module taht uses OK pipes  //////////
///////////////////////////////////////////////////////////////////////////////
logger log1(.data_o(PipeData1), .ld_o(count_ld1), .wr_o(PipeWrite1), .clk_i(clk), .reset_i(reset), .start_i(log_f1), .data_i(phcount1));
logger log2(.data_o(PipeData2), .ld_o(count_ld2), .wr_o(PipeWrite2), .clk_i(clk), .reset_i(reset), .start_i(log_f2), .data_i(phcount2));
////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//  Okie, now the Opal Kelly interface                /////////////////////////
///////////////////////////////////////////////////////////////////////////////
parameter nOK = 2; //number of OK pipes
wire [17*nOK-1:0]  ok2x;

okHost okHI(.hi_in(hi_in), .hi_out(hi_out), .hi_inout(hi_inout),
                     .ti_clk(ti_clk), .ok1(ok1), .ok2(ok2));

wire        _piperead1;
wire [15:0] _pipedata1;
wire        _piperead2;
wire [15:0] _pipedata2;
							 
pipefifo_v6 pipeoutfifo1 (.din(PipeData1), .rd_clk(ti_clk), .rd_en(_piperead1),
								.wr_clk(clk), .wr_en(PipeWrite1), .dout(_pipedata1),
								.empty(PipeEmpty1), .full(PipeFull1));

pipefifo_v6 pipeoutfifo2 (.din(PipeData2), .rd_clk(ti_clk), .rd_en(_piperead2),
								.wr_clk(clk), .wr_en(PipeWrite2), .dout(_pipedata2),
								.empty(PipeEmpty2), .full(PipeFull2));								
							 
okPipeOut pipeOuta0 (.ok1(ok1), .ok2(ok2x[0*17 +: 17]), .ep_addr(8'ha0),
                     .ep_datain(_pipedata1), .ep_read(_piperead1));
							
okPipeOut pipeOutaf (.ok1(ok1), .ok2(ok2x[1*17 +: 17]), .ep_addr(8'haf),
                    .ep_datain(_pipedata2), .ep_read(_piperead2));							

okTriggerIn ep40 (.ok1(ok1), .ep_addr(8'h40), .ep_clk(clk), .ep_trigger(TrigIn40));
okWireIn ep00 (.ok1(ok1), .ep_addr(8'h00), .ep_dataout(WireIn00));
okWireIn ep01 (.ok1(ok1), .ep_addr(8'h01), .ep_dataout(WireIn01));
okWireIn ep02 (.ok1(ok1), .ep_addr(8'h02), .ep_dataout(WireIn02));
okWireIn ep03 (.ok1(ok1), .ep_addr(8'h03), .ep_dataout(WireIn03));
okWireIn ep04 (.ok1(ok1), .ep_addr(8'h04), .ep_dataout(WireIn04));
okWireIn ep05 (.ok1(ok1), .ep_addr(8'h05), .ep_dataout(WireIn05));
//okWireOut ep20 (.ok1(ok1), .ok2(ok2_ep20), .ep_addr(8'h14), .ep_datain(WireOut20));

okWireOR #(.N(nOK)) okor (.ok2(ok2), .ok2s(ok2x));

endmodule   // end of PhotonCounter module


//////////////////////////////////////////////////////////////////////////////////////////////////////
// phcounter MODULE - single photon per bin at most
//
// Internals of a single photon counter. A counter, and a output register. The output is constantly shifted
// out, but loaded only on ld signal.
//////////////////////////////////////////////////////////////////////////////////////////////////////
module phcounter(count_o, clk_i, reset_i, photon_i, sync_i, ld_i, count_i, clear_i);
	output reg	 	[`binsize-1:0]	count_o;
	input wire 							clk_i;
	input wire 							reset_i;
	input wire							photon_i;
	input wire 							sync_i;
	input wire 							ld_i;
	input wire							clear_i;
	input wire		[`binsize-1:0]	count_i;
	
	reg		full_flag;
	reg [`binsize-1:0] 	count_f;
	reg 		photon_f, sync_f, syncdly_f;

	// Latch	 for speed (if you do not latch sync, it will fail - photon signal sometimes misses by a clock at 333MHz)
	always @(posedge clk_i) begin
		photon_f <= photon_i;
		syncdly_f <= sync_i;
      sync_f <= syncdly_f;
	end

	always @(posedge clk_i)
		if (reset_i | clear_i) count_f <= `binsize'h0;
		else if (sync_f & photon_f &(~full_flag)) count_f <= count_f + `binsize'b1;
		
	always @(posedge clk_i)
		if (reset_i | clear_i) full_flag <= 1'b0;
		else if (&count_f) full_flag <= 1'b1;
				
		
	always @(posedge clk_i)
		if (reset_i) count_o <= `binsize'h0;
		else 
			if (ld_i) count_o <= count_f;
			else count_o <= count_i;
 
endmodule  

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////
// phcounter - 256 photons per bin at most
//
// Internals of a single photon counter. A counter, and a output register. The output is constantly shifted
// out, but loaded only on ld signal.
//////////////////////////////////////////////////////////////////////////////////////////////////////
 module phcounter(count_o, clk_i, reset_i, photon_i, sync_i, ld_i, count_i, clear_i);
	output reg	 	[`binsize-1:0]	count_o;
	input wire 							clk_i;
	input wire 							reset_i;
	input wire					[7:0]	photon_i;
	input wire 							sync_i;
	input wire 							ld_i;
	input wire							clear_i;
	input wire		[`binsize-1:0]	count_i;
	
	reg		full_flag;
	reg [`binsize-1:0] 	count_f;
	reg [7:0] photon_f;
	reg sync_f, syncdly_f;

	// Latch	 for speed (if you do not latch sync, it will fail - photon signal sometimes misses by a clock at 333MHz)
	always @(posedge clk_i) begin
		photon_f <= photon_i;
		syncdly_f <= sync_i;
      sync_f <= syncdly_f;
	end

	always @(posedge clk_i)
		if (reset_i | clear_i) count_f <= `binsize'h0;
//		else if (sync_f & photon_f &(~full_flag)) count_f <= count_f + `binsize'b1;
      else if (sync_f & (~full_flag)) count_f <= count_f + {{(`binsize-8){1'b0}}, photon_f};
		
	always @(posedge clk_i)
		if (reset_i | clear_i) full_flag <= 1'b0;
		else if (&count_f) full_flag <= 1'b1;
				
		
	always @(posedge clk_i)
		if (reset_i) count_o <= `binsize'h0;
		else 
			if (ld_i) count_o <= count_f;
			else count_o <= count_i;
 
endmodule
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////
// logger circuit
//
// Logger module. It is started by start signal, and proceeds to load data and send it to the pipe.
//////////////////////////////////////////////////////////////////////////////////////////////////////
module logger(data_o, ld_o, wr_o, clk_i, reset_i, start_i, data_i);
	output reg [15:0] data_o;
	output reg wr_o;
	output reg ld_o;
	input wire clk_i;
	input wire reset_i;
	input wire start_i;
	input wire [15:0] data_i; 


	// State machine definitions
	localparam IDLE 		= 2'h0;
	localparam HEADER 	= 2'h1;
	localparam STREAM 	= 2'h2;
	localparam TERMIN 	= 2'h3;
	
	// This line makes synthesis happy
	// synthesis attribute INIT of state_f is "R"		
	reg 	[1:0] 	state_f;
	reg		[`nbins-1:0]	samplecount_f;

	// The combinatorial part, defines motion through states
	function [1:0] next_state;
		input [1:0] 	state;		 	
		input 			start;
		input 			done;
		
		case (state)
			IDLE: 
				if (start) next_state = HEADER;
				else next_state = IDLE;
			HEADER:
				next_state = STREAM;
			STREAM:
				if (done) next_state = TERMIN;
				else next_state = STREAM;
			TERMIN:
				next_state = IDLE;
			default:
				next_state = IDLE;
		endcase
	endfunction

	// The sequential part - defines actions at a given state
	always @(posedge clk_i)
		if (reset_i) begin
			state_f <= 2'h0;
			wr_o <= 1'b0;
			data_o <= 16'h0;
			samplecount_f <= (1<<`nbins) - 1;        // 01111111...11     number of ones = nbins
		end else begin 
			state_f <= next_state(state_f, start_i, ~samplecount_f[0]);
			case (state_f)
				HEADER: begin
					ld_o <= 1'b0;
					wr_o <= 1'b1;
					data_o <= 16'hFEED;
					samplecount_f <= samplecount_f >> 1;
				end
				STREAM: begin
					samplecount_f <= samplecount_f >> 1;
					data_o <= {data_i[7:0], data_i[15:8]};
				end
				TERMIN: begin
					data_o <= 16'h0FED;
				end
				default: begin
					ld_o <= start_i;
					wr_o <= 1'b0;
					samplecount_f <= (1<<`nbins) - 1;
					data_o <= 16'h00;
				end
					
			endcase
		end

endmodule
