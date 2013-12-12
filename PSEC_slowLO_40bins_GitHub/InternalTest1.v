//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:24 10/16/2013 
// Design Name: 
// Module Name:    InternalTest1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps
`default_nettype none
`define nchIn 2
`define nchOut 2

module InternalTest1;

reg   [7:0]   hi_in;
wire  [1:0]   hi_out;
wire  [15:0]  hi_inout;

reg clk_in;
wire [7:0]  led;
reg pmt_in1;
reg pmt_in2;
reg sync_in;
wire [`nchOut-1:0] pulse_out;
wire [`nchOut-1:0] slow_pulse_out;
wire phcountbool;
wire pmt_out;
wire reset_out;

// inputs simulating OK wire inputs
	reg [16:0] max_count_f;
	reg sync_src;
	reg [7:0] sync_div;
	reg [31:0] clk_divide;
	
	reg [31:0] pulsePeriod_div;
	reg [31:0] pw_div_out0;
	reg [31:0] pw_div_out1;
	reg [31:0] pw_div_in0;
	reg [31:0] pw_div_in1;
   reg [31:0] delay_div_out0;
	reg [31:0] delay_div_out1;
   reg [31:0] delay_div_in0;
	reg [31:0] delay_div_in1;

	reg [31:0] slow_pulsePeriod_div;
	reg [31:0] slow_pw_div_out0;
	reg [31:0] slow_pw_div_out1;
	reg [31:0] slow_pw_div_in0;
	reg [31:0] slow_pw_div_in1;
   reg [31:0] slow_delay_div_out0;
	reg [31:0] slow_delay_div_out1;
   reg [31:0] slow_delay_div_in0;
	reg [31:0] slow_delay_div_in1;
	
	
PhotonCounter dut (
	.hi_in(hi_in),
	.hi_out(hi_out),
	.hi_inout(hi_inout),
	
   .clk_in(clk_in),
   .led(led),
   .pmt_in1(pmt_in1),
   .pmt_in2(pmt_in2),
   .sync_in(sync_in),
   .pulse_out(pulse_out),
	.slow_pulse_out(slow_pulse_out),
   .phcountbool(phcountbool),
   .pmt_out(pmt_out),
   .reset_out(reset_out),
	
	 //inputs simulating OK wire inputs
	 .max_count_f(max_count_f),
	 .sync_src(sync_src),
	 .sync_div(sync_div),
	 .clk_divide(clk_divide),
	 
	 .pulsePeriod_div(pulsePeriod_div),
	 
	 .pw_div_out0(pw_div_out0),
	 	 .pw_div_out1(pw_div_out1),
	 
	 .pw_div_in0(pw_div_in0),
	 	 .pw_div_in1(pw_div_in1),
	 
    .delay_div_out0(delay_div_out0),
	     .delay_div_out1(delay_div_out1),
	 
    .delay_div_in0(delay_div_in0),
	     .delay_div_in1(delay_div_in1),
		  
		  
	 .slow_pulsePeriod_div(slow_pulsePeriod_div),
	 
	 .slow_pw_div_out0(slow_pw_div_out0),
	 	 .slow_pw_div_out1(slow_pw_div_out1),
	 
	 .slow_pw_div_in0(slow_pw_div_in0),
	 	 .slow_pw_div_in1(slow_pw_div_in1),
	 
    .slow_delay_div_out0(slow_delay_div_out0),
	     .slow_delay_div_out1(slow_delay_div_out1),
	 
    .slow_delay_div_in0(slow_delay_div_in0),
	     .slow_delay_div_in1(slow_delay_div_in1)
	 
	);

//////////// CLOCK INPUT: //////////////
initial clk_in = 1'b0;
always
   #4 clk_in = ~clk_in; //flip input clock every 4ns -> clk2x = 250 MHz
	
//////////// SYNC INPUT: //////////////
initial sync_in = 1'b0;
always
   #800 sync_in = ~sync_in; //flip SYNC every 31ns -> sync = 16 MHz
//   #80 sync_in = ~sync_in; //flip SYNC every 31ns -> sync = 16 MHz

initial pmt_in1 = 1'b0;

always begin
   #37 pmt_in1 = 1'b1;
	#5 pmt_in1 = 1'b0;
end

initial pmt_in2 = 1'b0;

initial max_count_f = 4883;
initial sync_src = 1'b0;
initial sync_div = 0;
//initial clk_divide = 3;
initial clk_divide = 39;

////////////////
//initial pulsePeriod_div = 40;
initial pulsePeriod_div = 400;

initial pw_div_out0 = 200;
initial pw_div_out1 = 200;

initial pw_div_in0 =200;
initial pw_div_in1 =200;

initial delay_div_out0 = 0;
initial delay_div_out1 = 0;

initial delay_div_in0 = 0;
initial delay_div_in1 = 0;

////////////////
initial slow_pulsePeriod_div = 8;

initial slow_pw_div_out0 = 2;
initial slow_pw_div_out1 = 2;

initial slow_pw_div_in0 = 2;
initial slow_pw_div_in1 = 2;

initial slow_delay_div_out0 = 0;
initial slow_delay_div_out1 = 2;

initial slow_delay_div_in0 = 4;
initial slow_delay_div_in1 = 6;

endmodule
