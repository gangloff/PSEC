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
static int ng6[] = {120, 0};



static void Initial_98_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(98, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_99_1(char *t0)
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

LAB0:    t1 = (t0 + 3612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3512);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
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

static void Initial_103_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(103, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_104_3(char *t0)
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

LAB0:    t1 = (t0 + 3900U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3800);
    xsi_process_wait(t2, 83000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);
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

static void Initial_107_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_109_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 4188U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);

LAB4:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, 37000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB2;

}

static void Initial_114_6(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(114, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_116_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(116, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 17);

LAB1:    return;
}

static void Initial_117_8(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(117, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_118_9(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(118, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Initial_119_10(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(119, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_120_11(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(120, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_122_12(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(122, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2300);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_123_13(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(123, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2392);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_125_14(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(125, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2484);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_126_15(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(126, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2576);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_128_16(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(128, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2668);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_129_17(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(129, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2760);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_131_18(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(131, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2852);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_132_19(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(132, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2944);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}


extern void work_m_00000000003915852349_0032538431_init()
{
	static char *pe[] = {(void *)Initial_98_0,(void *)Always_99_1,(void *)Initial_103_2,(void *)Always_104_3,(void *)Initial_107_4,(void *)Always_109_5,(void *)Initial_114_6,(void *)Initial_116_7,(void *)Initial_117_8,(void *)Initial_118_9,(void *)Initial_119_10,(void *)Initial_120_11,(void *)Initial_122_12,(void *)Initial_123_13,(void *)Initial_125_14,(void *)Initial_126_15,(void *)Initial_128_16,(void *)Initial_129_17,(void *)Initial_131_18,(void *)Initial_132_19};
	xsi_register_didat("work_m_00000000003915852349_0032538431", "isim/InternalTest1_isim_beh.exe.sim/work/m_00000000003915852349_0032538431.didat");
	xsi_register_executes(pe);
}
