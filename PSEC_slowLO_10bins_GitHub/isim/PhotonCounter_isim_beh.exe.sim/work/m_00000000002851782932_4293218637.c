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
static const char *ng0 = "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013/PhotonCounter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {10, 0};
static unsigned int ng7[] = {65261U, 0U};
static unsigned int ng8[] = {4077U, 0U};



static int sp_next_state(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t0 = 1;
    xsi_set_current_line(636, ng0);
    t3 = (t1 + 2232);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);

LAB2:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB3;

LAB4:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB5;

LAB6:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB7;

LAB8:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(648, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 2140);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);

LAB13:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(638, ng0);
    t8 = (t1 + 2324);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(639, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 2140);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);

LAB16:    goto LAB13;

LAB5:    xsi_set_current_line(641, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 2140);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 2);
    goto LAB13;

LAB7:    xsi_set_current_line(643, ng0);
    t4 = (t1 + 2416);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t8 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(644, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t1 + 2140);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);

LAB19:    goto LAB13;

LAB9:    xsi_set_current_line(646, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t1 + 2140);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 2);
    goto LAB13;

LAB14:    xsi_set_current_line(638, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t1 + 2140);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 2);
    goto LAB16;

LAB17:    xsi_set_current_line(643, ng0);
    t10 = ((char*)((ng4)));
    t11 = (t1 + 2140);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 2);
    goto LAB19;

}

static void Always_653_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 2940U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(653, ng0);
    t2 = (t0 + 3136);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(654, ng0);
    t4 = (t0 + 1268U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(659, ng0);

LAB9:    xsi_set_current_line(660, ng0);
    t2 = (t0 + 1956);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1360U);
    t11 = *((char **)t5);
    t5 = (t0 + 2048);
    t12 = (t5 + 36U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    t16 = (t14 + 4);
    t17 = (t15 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 0);
    t18 = (t10 & 1);
    *((unsigned int *)t16) = t18;
    memset(t13, 0, 8);
    t19 = (t14 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t19) == 0)
        goto LAB10;

LAB12:    t25 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t25) = 1;

LAB13:    t26 = (t13 + 4);
    t27 = (t14 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    *((unsigned int *)t13) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB15;

LAB14:    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    t36 = (t0 + 2840);
    t37 = (t0 + 804);
    t38 = xsi_create_subprogram_invocation(t36, 0, t0, t37, 0, 0);
    t39 = (t0 + 2232);
    xsi_vlogvar_assign_value(t39, t4, 0, 0, 2);
    t40 = (t0 + 2324);
    xsi_vlogvar_assign_value(t40, t11, 0, 0, 1);
    t41 = (t0 + 2416);
    xsi_vlogvar_assign_value(t41, t13, 0, 0, 1);

LAB16:    t42 = (t0 + 2892);
    t43 = *((char **)t42);
    t44 = (t43 + 44U);
    t45 = *((char **)t44);
    t46 = (t45 + 148U);
    t47 = *((char **)t46);
    t48 = (t47 + 0U);
    t49 = *((char **)t48);
    t50 = ((int  (*)(char *, char *))t49)(t0, t43);
    if (t50 != 0)
        goto LAB18;

LAB17:    t43 = (t0 + 2892);
    t51 = *((char **)t43);
    t43 = (t0 + 2140);
    t52 = (t43 + 36U);
    t53 = *((char **)t52);
    memcpy(t54, t53, 8);
    t55 = (t0 + 804);
    t56 = (t0 + 2840);
    t57 = 0;
    xsi_delete_subprogram_invocation(t55, t51, t0, t56, t57);
    t58 = (t0 + 1956);
    xsi_vlogvar_wait_assign_value(t58, t54, 0, 0, 2, 0LL);
    xsi_set_current_line(661, ng0);
    t2 = (t0 + 1956);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB19:    t5 = ((char*)((ng2)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t50 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t50 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t50 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t50 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(675, ng0);

LAB32:    xsi_set_current_line(676, ng0);
    t2 = (t0 + 1360U);
    t3 = *((char **)t2);
    t2 = (t0 + 1864);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(677, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1772);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(678, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_signed_lshift(t13, 32, t2, 32, t3, 32);
    t5 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t13, 32, t5, 32);
    t11 = (t0 + 2048);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 10, 0LL);
    xsi_set_current_line(679, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB28:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(654, ng0);

LAB8:    xsi_set_current_line(655, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1956);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(656, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1772);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(657, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(658, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_signed_lshift(t13, 32, t2, 32, t3, 32);
    t4 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t13, 32, t4, 32);
    t5 = (t0 + 2048);
    xsi_vlogvar_wait_assign_value(t5, t14, 0, 0, 10, 0LL);
    goto LAB7;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t13) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB14;

LAB18:    t42 = (t0 + 2940U);
    *((char **)t42) = &&LAB16;
    goto LAB1;

LAB20:    xsi_set_current_line(662, ng0);

LAB29:    xsi_set_current_line(663, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1864);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(664, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1772);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(665, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(666, ng0);
    t2 = (t0 + 2048);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 10, t5, 10, t11, 32);
    t12 = (t0 + 2048);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 10, 0LL);
    goto LAB28;

LAB22:    xsi_set_current_line(668, ng0);

LAB30:    xsi_set_current_line(669, ng0);
    t3 = (t0 + 2048);
    t5 = (t3 + 36U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 10, t11, 10, t12, 32);
    t15 = (t0 + 2048);
    xsi_vlogvar_wait_assign_value(t15, t13, 0, 0, 10, 0LL);
    xsi_set_current_line(670, ng0);
    t2 = (t0 + 1452U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 255U);
    t11 = (t0 + 1452U);
    t12 = *((char **)t11);
    memset(t54, 0, 8);
    t11 = (t54 + 4);
    t15 = (t12 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (t20 >> 0);
    *((unsigned int *)t54) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 0);
    *((unsigned int *)t11) = t23;
    t24 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t24 & 255U);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 255U);
    xsi_vlogtype_concat(t13, 16, 16, 2U, t54, 8, t14, 8);
    t16 = (t0 + 1680);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 16, 0LL);
    goto LAB28;

LAB24:    xsi_set_current_line(672, ng0);

LAB31:    xsi_set_current_line(673, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1680);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 16, 0LL);
    goto LAB28;

}


extern void work_m_00000000002851782932_4293218637_init()
{
	static char *pe[] = {(void *)Always_653_0};
	static char *se[] = {(void *)sp_next_state};
	xsi_register_didat("work_m_00000000002851782932_4293218637", "isim/PhotonCounter_isim_beh.exe.sim/work/m_00000000002851782932_4293218637.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
