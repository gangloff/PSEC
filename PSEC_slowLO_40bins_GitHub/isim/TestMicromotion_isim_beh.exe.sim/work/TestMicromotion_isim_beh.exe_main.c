/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *VL_P_2533777724;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004134447467_2073120511_init();
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    unisims_ver_m_00000000002399568039_3574923728_init();
    unisims_ver_m_00000000002557334010_3100994011_init();
    unisims_ver_m_00000000002557334010_0635491122_init();
    unisims_ver_m_00000000002393387159_0973828799_init();
    unisims_ver_m_00000000001639448493_3281651278_init();
    work_m_00000000003586849572_3690717137_init();
    unisims_ver_m_00000000000234138215_0359112625_init();
    work_m_00000000002756808157_0054560134_init();
    work_m_00000000002851782932_4293218637_init();
    unisims_ver_m_00000000002399568039_2282143210_init();
    unisims_ver_m_00000000000740258969_3897995058_init();
    unisims_ver_m_00000000000740258969_1625843133_init();
    unisims_ver_m_00000000003131622635_0225263307_init();
    unisims_ver_m_00000000002922998384_2845851632_init();
    unisims_ver_m_00000000000950279619_0270976356_init();
    unisims_ver_m_00000000001508379050_3852734344_init();
    unisims_ver_m_00000000000339918974_1964632377_init();
    unisims_ver_m_00000000000888323161_3453916357_init();
    unisims_ver_m_00000000002601448656_3367321443_init();
    unisims_ver_m_00000000003061766309_1735969574_init();
    work_m_00000000002203705001_0736292259_init();
    work_m_00000000001779748640_2403891985_init();
    xilinxcorelib_ver_m_00000000003295685545_4070665713_init();
    xilinxcorelib_ver_m_00000000001495423832_2566684497_init();
    work_m_00000000000673882697_4224513942_init();
    work_m_00000000002777574465_0622519923_init();
    work_m_00000000000181295262_4163895871_init();
    work_m_00000000003537971112_3534570753_init();
    work_m_00000000000281809430_4148713723_init();
    work_m_00000000001514536339_0185352758_init();
    ieee_p_2592010699_init();
    vl_p_2533777724_init();
    work_a_4098872473_2372691052_init();


    xsi_register_tops("work_a_4098872473_2372691052");
    xsi_register_tops("work_m_00000000004134447467_2073120511");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    VL_P_2533777724 = xsi_get_engine_memory("vl_p_2533777724");

    return xsi_run_simulation(argc, argv);

}
