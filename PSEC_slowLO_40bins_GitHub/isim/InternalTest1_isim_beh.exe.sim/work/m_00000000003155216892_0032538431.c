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

/* This file is designed for use with ISim build 0x1048c146 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013_TEMPforSIM/InternalTest1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {4883, 0};
static int ng4[] = {0, 0};
static int ng5[] = {3, 0};
static int ng6[] = {40, 0};
static int ng7[] = {20, 0};
static int ng8[] = {8, 0};
static int ng9[] = {2, 0};
static int ng10[] = {4, 0};
static int ng11[] = {6, 0};



static void Initial_132_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(132, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_133_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4340);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 1472);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1472);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_137_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(137, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_138_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4628);
    xsi_process_wait(t2, 80000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 1748);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1748);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_141_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_143_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);

LAB4:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4916);
    xsi_process_wait(t2, 37000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4916);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB2;

}

static void Initial_148_6(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(148, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_150_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(150, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 17);

LAB1:    return;
}

static void Initial_151_8(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(151, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_152_9(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(152, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Initial_153_10(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(153, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_156_11(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(156, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_158_12(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(158, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2300);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_159_13(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(159, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2392);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_161_14(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(161, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2484);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_162_15(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(162, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2576);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_164_16(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(164, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2668);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_165_17(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(165, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2760);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_167_18(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(167, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2852);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_168_19(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(168, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2944);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_171_20(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(171, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 3036);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_173_21(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(173, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 3128);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_174_22(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(174, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 3220);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_176_23(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(176, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 3312);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_177_24(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(177, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 3404);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_179_25(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(179, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3496);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_180_26(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(180, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 3588);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_182_27(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(182, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 3680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_183_28(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(183, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 3772);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}


extern void work_m_00000000003155216892_0032538431_init()
{
	static char *pe[] = {(void *)Initial_132_0,(void *)Always_133_1,(void *)Initial_137_2,(void *)Always_138_3,(void *)Initial_141_4,(void *)Always_143_5,(void *)Initial_148_6,(void *)Initial_150_7,(void *)Initial_151_8,(void *)Initial_152_9,(void *)Initial_153_10,(void *)Initial_156_11,(void *)Initial_158_12,(void *)Initial_159_13,(void *)Initial_161_14,(void *)Initial_162_15,(void *)Initial_164_16,(void *)Initial_165_17,(void *)Initial_167_18,(void *)Initial_168_19,(void *)Initial_171_20,(void *)Initial_173_21,(void *)Initial_174_22,(void *)Initial_176_23,(void *)Initial_177_24,(void *)Initial_179_25,(void *)Initial_180_26,(void *)Initial_182_27,(void *)Initial_183_28};
	xsi_register_didat("work_m_00000000003155216892_0032538431", "isim/InternalTest1_isim_beh.exe.sim/work/m_00000000003155216892_0032538431.didat");
	xsi_register_executes(pe);
}
