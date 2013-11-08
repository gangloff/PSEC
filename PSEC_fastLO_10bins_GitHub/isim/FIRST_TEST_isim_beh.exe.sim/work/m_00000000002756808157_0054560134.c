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



static void Always_581_0(char *t0)
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

LAB2:    xsi_set_current_line(581, ng0);
    t2 = (t0 + 2992);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(581, ng0);

LAB5:    xsi_set_current_line(582, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(583, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(584, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_587_1(char *t0)
{
    char t7[8];
    char t42[8];
    char t61[8];
    char t103[8];
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
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(587, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(588, ng0);
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

LAB9:    xsi_set_current_line(589, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t6 = (t5 + 36U);
    t11 = *((char **)t6);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t11);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t12 = (t4 + 4);
    t20 = (t11 + 4);
    t21 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = *((unsigned int *)t20);
    t15 = (t13 | t14);
    *((unsigned int *)t21) = t15;
    t16 = *((unsigned int *)t21);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB11;

LAB12:
LAB13:    t41 = (t0 + 1472);
    t43 = (t41 + 36U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t45 = (t44 + 4);
    t39 = *((unsigned int *)t45);
    t46 = (~(t39));
    t47 = *((unsigned int *)t44);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t45) == 0)
        goto LAB14;

LAB16:    t50 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t50) = 1;

LAB17:    t51 = (t42 + 4);
    t52 = (t44 + 4);
    t53 = *((unsigned int *)t44);
    t54 = (~(t53));
    *((unsigned int *)t42) = t54;
    *((unsigned int *)t51) = 0;
    if (*((unsigned int *)t52) != 0)
        goto LAB19;

LAB18:    t59 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t59 & 1U);
    t60 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t60 & 1U);
    t62 = *((unsigned int *)t7);
    t63 = *((unsigned int *)t42);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t7 + 4);
    t66 = (t42 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB20;

LAB21:
LAB22:    t93 = (t61 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t61);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB23;

LAB24:
LAB25:
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

LAB8:    xsi_set_current_line(588, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 16, 0LL);
    goto LAB10;

LAB11:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t7) = (t18 | t19);
    t34 = (t4 + 4);
    t40 = (t11 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t34);
    t26 = (~(t24));
    t27 = *((unsigned int *)t11);
    t28 = (~(t27));
    t30 = *((unsigned int *)t40);
    t31 = (~(t30));
    t25 = (t23 & t26);
    t29 = (t28 & t31);
    t32 = (~(t25));
    t33 = (~(t29));
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & t32);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & t33);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t32);
    t38 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t38 & t33);
    goto LAB13;

LAB14:    *((unsigned int *)t42) = 1;
    goto LAB17;

LAB19:    t55 = *((unsigned int *)t42);
    t56 = *((unsigned int *)t52);
    *((unsigned int *)t42) = (t55 | t56);
    t57 = *((unsigned int *)t51);
    t58 = *((unsigned int *)t52);
    *((unsigned int *)t51) = (t57 | t58);
    goto LAB18;

LAB20:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t7 + 4);
    t76 = (t42 + 4);
    t77 = *((unsigned int *)t7);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t42);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB22;

LAB23:    xsi_set_current_line(589, ng0);
    t99 = (t0 + 1564);
    t100 = (t99 + 36U);
    t101 = *((char **)t100);
    t102 = ((char*)((ng2)));
    memset(t103, 0, 8);
    xsi_vlog_unsigned_add(t103, 16, t101, 16, t102, 16);
    t104 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t104, t103, 0, 0, 16, 0LL);
    goto LAB25;

}

static void Always_591_2(char *t0)
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

LAB2:    xsi_set_current_line(591, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(592, ng0);
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

LAB9:    xsi_set_current_line(593, ng0);
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

LAB8:    xsi_set_current_line(592, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 1, 0LL);
    goto LAB10;

LAB13:    *((unsigned int *)t7) = 1;
    goto LAB12;

LAB15:    xsi_set_current_line(593, ng0);
    t12 = ((char*)((ng2)));
    t20 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t20, t12, 0, 0, 1, 0LL);
    goto LAB17;

}

static void Always_596_3(char *t0)
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

LAB2:    xsi_set_current_line(596, ng0);
    t2 = (t0 + 3016);
    *((int *)t2) = 1;
    t3 = (t0 + 2824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(597, ng0);
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

LAB6:    xsi_set_current_line(599, ng0);
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

LAB9:    xsi_set_current_line(600, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(597, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(599, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    goto LAB10;

}


extern void work_m_00000000002756808157_0054560134_init()
{
	static char *pe[] = {(void *)Always_581_0,(void *)Always_587_1,(void *)Always_591_2,(void *)Always_596_3};
	xsi_register_didat("work_m_00000000002756808157_0054560134", "isim/FIRST_TEST_isim_beh.exe.sim/work/m_00000000002756808157_0054560134.didat");
	xsi_register_executes(pe);
}
