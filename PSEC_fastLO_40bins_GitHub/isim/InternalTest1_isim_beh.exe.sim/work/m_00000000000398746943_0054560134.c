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
static const char *ng0 = "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013_TEMPforSIM/PhotonCounter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_712_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(712, ng0);
    t2 = (t0 + 2992);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(712, ng0);

LAB5:    xsi_set_current_line(713, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(714, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(715, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_718_1(char *t0)
{
    char t7[8];
    char t42[8];
    char t67[8];
    char t72[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(718, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(719, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB5;

LAB6:
LAB7:    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(721, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1472);
    t6 = (t5 + 36U);
    t11 = *((char **)t6);
    memset(t7, 0, 8);
    t12 = (t11 + 4);
    t8 = *((unsigned int *)t12);
    t9 = (~(t8));
    t10 = *((unsigned int *)t11);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t12) == 0)
        goto LAB11;

LAB13:    t20 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t20) = 1;

LAB14:    t21 = (t7 + 4);
    t34 = (t11 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    *((unsigned int *)t7) = t16;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t34) != 0)
        goto LAB16;

LAB15:    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t24 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t24 & 1U);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t7);
    t28 = (t26 & t27);
    *((unsigned int *)t42) = t28;
    t40 = (t4 + 4);
    t41 = (t7 + 4);
    t43 = (t42 + 4);
    t30 = *((unsigned int *)t40);
    t31 = *((unsigned int *)t41);
    t32 = (t30 | t31);
    *((unsigned int *)t43) = t32;
    t33 = *((unsigned int *)t43);
    t35 = (t33 != 0);
    if (t35 == 1)
        goto LAB17;

LAB18:
LAB19:    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB10:    goto LAB2;

LAB5:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB7;

LAB8:    xsi_set_current_line(719, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 16, 0LL);
    goto LAB10;

LAB11:    *((unsigned int *)t7) = 1;
    goto LAB14;

LAB16:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t34);
    *((unsigned int *)t7) = (t17 | t18);
    t19 = *((unsigned int *)t21);
    t22 = *((unsigned int *)t34);
    *((unsigned int *)t21) = (t19 | t22);
    goto LAB15;

LAB17:    t36 = *((unsigned int *)t42);
    t37 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t36 | t37);
    t44 = (t4 + 4);
    t45 = (t7 + 4);
    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t7);
    t49 = (~(t48));
    t50 = *((unsigned int *)t45);
    t51 = (~(t50));
    t25 = (t39 & t47);
    t29 = (t49 & t51);
    t52 = (~(t25));
    t53 = (~(t29));
    t54 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t54 & t52);
    t55 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t55 & t53);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t56 & t52);
    t57 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t57 & t53);
    goto LAB19;

LAB20:    xsi_set_current_line(721, ng0);
    t64 = (t0 + 1564);
    t65 = (t64 + 36U);
    t66 = *((char **)t65);
    t68 = (t0 + 1656);
    t69 = (t68 + 36U);
    t70 = *((char **)t69);
    t71 = ((char*)((ng1)));
    xsi_vlogtype_concat(t67, 16, 16, 2U, t71, 8, t70, 8);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_add(t72, 16, t66, 16, t67, 16);
    t73 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 16, 0LL);
    goto LAB22;

}

static void Always_723_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(723, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(724, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB5;

LAB6:
LAB7:    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(725, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 | t9);
    if (t10 != 65535U)
        goto LAB12;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB13;

LAB14:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;

LAB12:    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t7);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB10:    goto LAB2;

LAB5:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB7;

LAB8:    xsi_set_current_line(724, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 1, 0LL);
    goto LAB10;

LAB13:    *((unsigned int *)t7) = 1;
    goto LAB12;

LAB15:    xsi_set_current_line(725, ng0);
    t12 = ((char*)((ng2)));
    t20 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t20, t12, 0, 0, 1, 0LL);
    goto LAB17;

}

static void Always_728_3(char *t0)
{
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

LAB0:    t1 = (t0 + 2796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(728, ng0);
    t2 = (t0 + 3016);
    *((int *)t2) = 1;
    t3 = (t0 + 2824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(729, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(731, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(732, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(729, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(731, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    goto LAB10;

}


extern void work_m_00000000000398746943_0054560134_init()
{
	static char *pe[] = {(void *)Always_712_0,(void *)Always_718_1,(void *)Always_723_2,(void *)Always_728_3};
	xsi_register_didat("work_m_00000000000398746943_0054560134", "isim/InternalTest1_isim_beh.exe.sim/work/m_00000000000398746943_0054560134.didat");
	xsi_register_executes(pe);
}
