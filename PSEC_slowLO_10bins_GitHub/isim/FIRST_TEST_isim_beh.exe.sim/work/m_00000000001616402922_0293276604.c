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
static const char *ng0 = "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013/oksim/okHostCalls.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {7, 0};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {32U, 0U};
static unsigned int ng9[] = {96U, 0U};
static const char *ng10 = "***FRONTPANEL ERROR: IsTriggered mask 0x%04h covers unused Triggers";
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {7U, 0U};
static int ng15[] = {2, 0};
static int ng16[] = {1024, 0};
static const char *ng17 = "Error. Pipes commands may only send and receive an even # of bytes.";
static unsigned int ng18[] = {9U, 0U};
static int ng19[] = {16, 0};
static int ng20[] = {15, 0};
static int ng21[] = {8, 0};
static unsigned int ng22[] = {10U, 0U};
static const char *ng23 = "Error. Block Length may only be an even # of bytes.";
static const char *ng24 = "Error. Pipe length MUST be a multiple of block length!";
static unsigned int ng25[] = {11U, 0U};
static unsigned int ng26[] = {12U, 0U};
static const char *ng27 = "F:/VIs/VV_Photonpy/MultiChannelBalancedCorrelatorGitHub_10_03_2013/First_tf.v";
static int ng28[] = {4883, 0};
static int ng29[] = {20, 0};
static int ng30[] = {10, 0};
static unsigned int ng31[] = {65535U, 0U};
static unsigned int ng32[] = {64U, 0U};
static unsigned int ng33[] = {0U, 65535U};



static int sp_FrontPanelReset(char *t1, char *t2)
{
    char t8[8];
    char t17[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1364);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    xsi_set_current_line(67, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7540);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 7540);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(73, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB16;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(67, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t1 + 7264);
    t19 = (t1 + 7264);
    t20 = (t19 + 44U);
    t21 = *((char **)t20);
    t22 = (t1 + 7264);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    t25 = (t1 + 7540);
    t26 = (t25 + 36U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 7356);
    t6 = (t1 + 7356);
    t7 = (t6 + 44U);
    t9 = *((char **)t7);
    t15 = (t1 + 7356);
    t16 = (t15 + 40U);
    t19 = *((char **)t16);
    t20 = (t1 + 7540);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t8, t17, t9, t19, 2, 1, t22, 32, 1);
    t23 = (t8 + 4);
    t10 = *((unsigned int *)t23);
    t30 = (!(t10));
    t24 = (t17 + 4);
    t11 = *((unsigned int *)t24);
    t33 = (!(t11));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 7448);
    t6 = (t1 + 7448);
    t7 = (t6 + 44U);
    t9 = *((char **)t7);
    t15 = (t1 + 7448);
    t16 = (t15 + 40U);
    t19 = *((char **)t16);
    t20 = (t1 + 7540);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t8, t17, t9, t19, 2, 1, t22, 32, 1);
    t23 = (t8 + 4);
    t10 = *((unsigned int *)t23);
    t30 = (!(t10));
    t24 = (t17 + 4);
    t11 = *((unsigned int *)t24);
    t33 = (!(t11));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(67, ng0);
    t4 = (t1 + 7540);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 7540);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB6;

LAB10:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t18), t38);
    goto LAB11;

LAB12:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t17);
    t37 = (t12 - t13);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t17), t38);
    goto LAB13;

LAB14:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t17);
    t37 = (t12 - t13);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t17), t38);
    goto LAB15;

LAB16:    xsi_set_current_line(73, ng0);
    t7 = ((char*)((ng5)));
    t9 = (t1 + 5332);
    t15 = (t1 + 5332);
    t16 = (t15 + 44U);
    t19 = *((char **)t16);
    t20 = ((char*)((ng6)));
    t21 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t8, t17, t18, ((int*)(t19)), 2, t20, 32, 1, t21, 32, 1);
    t22 = (t8 + 4);
    t10 = *((unsigned int *)t22);
    t30 = (!(t10));
    t23 = (t17 + 4);
    t11 = *((unsigned int *)t23);
    t33 = (!(t11));
    t34 = (t30 && t33);
    t24 = (t18 + 4);
    t12 = *((unsigned int *)t24);
    t37 = (!(t12));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(74, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB19;
    goto LAB1;

LAB17:    t13 = *((unsigned int *)t18);
    t39 = (t13 + 0);
    t14 = *((unsigned int *)t8);
    t29 = *((unsigned int *)t17);
    t40 = (t14 - t29);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t9, t7, t39, *((unsigned int *)t17), t41);
    goto LAB18;

LAB19:    xsi_set_current_line(74, ng0);
    t7 = ((char*)((ng3)));
    t9 = (t1 + 5332);
    t15 = (t1 + 5332);
    t16 = (t15 + 44U);
    t19 = *((char **)t16);
    t20 = ((char*)((ng6)));
    t21 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t8, t17, t18, ((int*)(t19)), 2, t20, 32, 1, t21, 32, 1);
    t22 = (t8 + 4);
    t10 = *((unsigned int *)t22);
    t30 = (!(t10));
    t23 = (t17 + 4);
    t11 = *((unsigned int *)t23);
    t33 = (!(t11));
    t34 = (t30 && t33);
    t24 = (t18 + 4);
    t12 = *((unsigned int *)t24);
    t37 = (!(t12));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(75, ng0);

LAB22:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t5, t7, 2, t9, 32, 1);
    t15 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t16 = (t8 + 4);
    t19 = (t15 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t15);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t16);
    t14 = *((unsigned int *)t19);
    t29 = (t13 ^ t14);
    t32 = (t12 | t29);
    t35 = *((unsigned int *)t16);
    t36 = *((unsigned int *)t19);
    t42 = (t35 | t36);
    t43 = (~(t42));
    t44 = (t32 & t43);
    if (t44 != 0)
        goto LAB26;

LAB23:    if (t42 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t17) = 1;

LAB26:    t21 = (t17 + 4);
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t17);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB28;

LAB27:    t22 = (t2 + 48U);
    t23 = *((char **)t22);
    t24 = (t23 + 16U);
    xsi_wp_set_status(t24, 1);
    t25 = (t2 + 28U);
    *((char **)t25) = &&LAB22;
    goto LAB1;

LAB20:    t13 = *((unsigned int *)t18);
    t39 = (t13 + 0);
    t14 = *((unsigned int *)t8);
    t29 = *((unsigned int *)t17);
    t40 = (t14 - t29);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t9, t7, t39, *((unsigned int *)t17), t41);
    goto LAB21;

LAB25:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB26;

LAB28:    t26 = (t2 + 48U);
    t27 = *((char **)t26);
    t28 = (t27 + 16U);
    xsi_wp_set_status(t28, 0);
    goto LAB4;

}

static int sp_SetWireInValue(char *t1, char *t2)
{
    char t8[8];
    char t18[8];
    char t32[8];
    char t79[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    int t87;
    char *t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1620);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t5 = (t1 + 7264);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t9 = (t1 + 7264);
    t10 = (t9 + 44U);
    t11 = *((char **)t10);
    t12 = (t1 + 7264);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    t15 = (t1 + 7632);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t8, 16, t7, t11, t14, 2, 1, t17, 8, 2);
    t19 = (t1 + 7816);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    *((unsigned int *)t18) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB7;

LAB6:    t30 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t30 & 65535U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 65535U);
    t33 = *((unsigned int *)t8);
    t34 = *((unsigned int *)t18);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t8 + 4);
    t37 = (t18 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB8;

LAB9:
LAB10:    t64 = (t1 + 7908);
    xsi_vlogvar_assign_value(t64, t32, 0, 0, 16);
    xsi_set_current_line(90, ng0);
    t4 = (t1 + 7908);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 7724);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    t11 = (t1 + 7816);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t24 = *((unsigned int *)t10);
    t25 = *((unsigned int *)t13);
    t26 = (t24 & t25);
    *((unsigned int *)t8) = t26;
    t14 = (t10 + 4);
    t15 = (t13 + 4);
    t16 = (t8 + 4);
    t27 = *((unsigned int *)t14);
    t28 = *((unsigned int *)t15);
    t29 = (t27 | t28);
    *((unsigned int *)t16) = t29;
    t30 = *((unsigned int *)t16);
    t31 = (t30 != 0);
    if (t31 == 1)
        goto LAB11;

LAB12:
LAB13:    t54 = *((unsigned int *)t6);
    t55 = *((unsigned int *)t8);
    t58 = (t54 | t55);
    *((unsigned int *)t18) = t58;
    t20 = (t6 + 4);
    t21 = (t8 + 4);
    t22 = (t18 + 4);
    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t21);
    t61 = (t59 | t60);
    *((unsigned int *)t22) = t61;
    t62 = *((unsigned int *)t22);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB14;

LAB15:
LAB16:    t37 = (t1 + 7264);
    t38 = (t1 + 7264);
    t46 = (t38 + 44U);
    t47 = *((char **)t46);
    t64 = (t1 + 7264);
    t80 = (t64 + 40U);
    t81 = *((char **)t80);
    t82 = (t1 + 7632);
    t83 = (t82 + 36U);
    t84 = *((char **)t83);
    xsi_vlog_generic_convert_array_indices(t32, t79, t47, t81, 2, 1, t84, 8, 2);
    t85 = (t32 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (!(t86));
    t88 = (t79 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (!(t89));
    t91 = (t87 && t90);
    if (t91 == 1)
        goto LAB17;

LAB18:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t26 = *((unsigned int *)t18);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t18) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB6;

LAB8:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t8 + 4);
    t47 = (t18 + 4);
    t48 = *((unsigned int *)t8);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t18);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB10;

LAB11:    t33 = *((unsigned int *)t8);
    t34 = *((unsigned int *)t16);
    *((unsigned int *)t8) = (t33 | t34);
    t17 = (t10 + 4);
    t19 = (t13 + 4);
    t35 = *((unsigned int *)t10);
    t39 = (~(t35));
    t40 = *((unsigned int *)t17);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (~(t42));
    t44 = *((unsigned int *)t19);
    t45 = (~(t44));
    t56 = (t39 & t41);
    t57 = (t43 & t45);
    t48 = (~(t56));
    t49 = (~(t57));
    t50 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t50 & t48);
    t51 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t51 & t49);
    t52 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t52 & t48);
    t53 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t53 & t49);
    goto LAB13;

LAB14:    t65 = *((unsigned int *)t18);
    t66 = *((unsigned int *)t22);
    *((unsigned int *)t18) = (t65 | t66);
    t23 = (t6 + 4);
    t36 = (t8 + 4);
    t67 = *((unsigned int *)t23);
    t68 = (~(t67));
    t69 = *((unsigned int *)t6);
    t70 = (t69 & t68);
    t71 = *((unsigned int *)t36);
    t72 = (~(t71));
    t73 = *((unsigned int *)t8);
    t74 = (t73 & t72);
    t75 = (~(t70));
    t76 = (~(t74));
    t77 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t77 & t75);
    t78 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t78 & t76);
    goto LAB16;

LAB17:    t92 = *((unsigned int *)t32);
    t93 = *((unsigned int *)t79);
    t94 = (t92 - t93);
    t95 = (t94 + 1);
    xsi_vlogvar_assign_value(t37, t18, 0, *((unsigned int *)t79), t95);
    goto LAB18;

}

static int sp_GetWireOutValue(char *t1, char *t2)
{
    char t6[8];
    char t17[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;

LAB0:    t0 = 1;
    xsi_set_current_line(100, ng0);

LAB2:    xsi_set_current_line(101, ng0);
    t3 = (t1 + 7356);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t1 + 7356);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t1 + 7356);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t1 + 8000);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 8, t15, 8, t16, 8);
    xsi_vlog_generic_get_array_select_value(t6, 16, t5, t9, t12, 2, 1, t17, 8, 2);
    t18 = (t1 + 8092);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 16);
    t0 = 0;

LAB1:    return t0;
}

static int sp_IsTriggered(char *t1, char *t2)
{
    char t6[8];
    char t17[8];
    char t21[8];
    char t54[8];
    char t67[8];
    char t78[8];
    char t82[8];
    char t115[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
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
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
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
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;

LAB0:    t0 = 1;
    xsi_set_current_line(112, ng0);

LAB2:    xsi_set_current_line(113, ng0);
    t3 = (t1 + 7448);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t1 + 7448);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t1 + 7448);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = (t1 + 8184);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng9)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 8, t15, 8, t16, 8);
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t9, t12, 2, 1, t17, 8, 2);
    t18 = (t1 + 8276);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t20);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t6 + 4);
    t26 = (t20 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB3;

LAB4:
LAB5:    t53 = ((char*)((ng1)));
    memset(t54, 0, 8);
    t55 = (t21 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB7;

LAB6:    t56 = (t53 + 4);
    if (*((unsigned int *)t56) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t21) < *((unsigned int *)t53))
        goto LAB9;

LAB8:    *((unsigned int *)t54) = 1;

LAB9:    t58 = (t54 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(119, ng0);

LAB27:    xsi_set_current_line(120, ng0);
    t3 = (t1 + 8276);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t1 + 2132);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t7, (char)118, t5, 16);
    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 8368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB13:    t0 = 0;

LAB1:    return t0;
LAB3:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t6 + 4);
    t36 = (t20 + 4);
    t37 = *((unsigned int *)t6);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t20);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB5;

LAB7:    t57 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(113, ng0);

LAB14:    xsi_set_current_line(114, ng0);
    t64 = (t1 + 7448);
    t65 = (t64 + 36U);
    t66 = *((char **)t65);
    t68 = (t1 + 7448);
    t69 = (t68 + 44U);
    t70 = *((char **)t69);
    t71 = (t1 + 7448);
    t72 = (t71 + 40U);
    t73 = *((char **)t72);
    t74 = (t1 + 8184);
    t75 = (t74 + 36U);
    t76 = *((char **)t75);
    t77 = ((char*)((ng9)));
    memset(t78, 0, 8);
    xsi_vlog_unsigned_minus(t78, 8, t76, 8, t77, 8);
    xsi_vlog_generic_get_array_select_value(t67, 32, t66, t70, t73, 2, 1, t78, 8, 2);
    t79 = (t1 + 8276);
    t80 = (t79 + 36U);
    t81 = *((char **)t80);
    t83 = *((unsigned int *)t67);
    t84 = *((unsigned int *)t81);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t67 + 4);
    t87 = (t81 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB15;

LAB16:
LAB17:    t114 = ((char*)((ng1)));
    memset(t115, 0, 8);
    t116 = (t82 + 4);
    t117 = (t114 + 4);
    t118 = *((unsigned int *)t82);
    t119 = *((unsigned int *)t114);
    t120 = (t118 ^ t119);
    t121 = *((unsigned int *)t116);
    t122 = *((unsigned int *)t117);
    t123 = (t121 ^ t122);
    t124 = (t120 | t123);
    t125 = *((unsigned int *)t116);
    t126 = *((unsigned int *)t117);
    t127 = (t125 | t126);
    t128 = (~(t127));
    t129 = (t124 & t128);
    if (t129 != 0)
        goto LAB21;

LAB18:    if (t127 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t115) = 1;

LAB21:    t131 = (t115 + 4);
    t132 = *((unsigned int *)t131);
    t133 = (~(t132));
    t134 = *((unsigned int *)t115);
    t135 = (t134 & t133);
    t136 = (t135 != 0);
    if (t136 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(116, ng0);

LAB26:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t1 + 8368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB24:    goto LAB13;

LAB15:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t67 + 4);
    t97 = (t81 + 4);
    t98 = *((unsigned int *)t67);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t81);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB17;

LAB20:    t130 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(114, ng0);

LAB25:    xsi_set_current_line(115, ng0);
    t137 = ((char*)((ng1)));
    t138 = (t1 + 8368);
    xsi_vlogvar_assign_value(t138, t137, 0, 0, 1);
    goto LAB24;

}

static int sp_UpdateWireIns(char *t1, char *t2)
{
    char t10[8];
    char t11[8];
    char t12[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2388);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(132, ng0);
    t5 = (t2 + 48U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(132, ng0);
    t8 = ((char*)((ng11)));
    t9 = (t1 + 5332);
    t13 = (t1 + 5332);
    t14 = (t13 + 44U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    t17 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t15)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t11 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    t25 = (t12 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(133, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5332);
    t6 = (t1 + 5332);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t9, 32, 1);
    t13 = (t10 + 4);
    t19 = *((unsigned int *)t13);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(134, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB7:    t29 = *((unsigned int *)t12);
    t30 = (t29 + 0);
    t31 = *((unsigned int *)t10);
    t32 = *((unsigned int *)t11);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t9, t8, t30, *((unsigned int *)t11), t34);
    goto LAB8;

LAB9:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t10), 1);
    goto LAB10;

LAB11:    xsi_set_current_line(134, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 5332);
    t9 = (t1 + 5332);
    t13 = (t9 + 44U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t10 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    t18 = (t11 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (!(t22));
    t24 = (t20 && t23);
    t21 = (t12 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(135, ng0);
    xsi_set_current_line(135, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8460);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB14:    t4 = (t1 + 8460);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t7, 32);
    t8 = (t10 + 4);
    t19 = *((unsigned int *)t8);
    t22 = (~(t19));
    t26 = *((unsigned int *)t10);
    t29 = (t26 & t22);
    t31 = (t29 != 0);
    if (t31 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(139, ng0);

LAB19:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t5, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t13 = (t10 + 4);
    t14 = (t9 + 4);
    t19 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    t26 = (t19 ^ t22);
    t29 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t14);
    t32 = (t29 ^ t31);
    t39 = (t26 | t32);
    t40 = *((unsigned int *)t13);
    t41 = *((unsigned int *)t14);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB23;

LAB20:    if (t42 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t11) = 1;

LAB23:    t16 = (t11 + 4);
    t45 = *((unsigned int *)t16);
    t46 = (~(t45));
    t47 = *((unsigned int *)t11);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB25;

LAB24:    t17 = (t2 + 48U);
    t18 = *((char **)t17);
    t21 = (t18 + 24U);
    xsi_wp_set_status(t21, 1);
    t25 = (t2 + 28U);
    *((char **)t25) = &&LAB19;
    goto LAB1;

LAB12:    t29 = *((unsigned int *)t12);
    t30 = (t29 + 0);
    t31 = *((unsigned int *)t10);
    t32 = *((unsigned int *)t11);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t8, t7, t30, *((unsigned int *)t11), t34);
    goto LAB13;

LAB15:    xsi_set_current_line(135, ng0);

LAB17:    xsi_set_current_line(136, ng0);
    t9 = (t1 + 7264);
    t13 = (t9 + 36U);
    t14 = *((char **)t13);
    t15 = (t1 + 7264);
    t16 = (t15 + 44U);
    t17 = *((char **)t16);
    t18 = (t1 + 7264);
    t21 = (t18 + 40U);
    t25 = *((char **)t21);
    t35 = (t1 + 8460);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_array_select_value(t11, 16, t14, t17, t25, 2, 1, t37, 32, 1);
    t38 = (t1 + 7172);
    xsi_vlogvar_assign_value(t38, t11, 0, 0, 16);
    xsi_set_current_line(137, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(135, ng0);
    t4 = (t1 + 8460);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8460);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB14;

LAB22:    t15 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB23;

LAB25:    t35 = (t2 + 48U);
    t36 = *((char **)t35);
    t37 = (t36 + 24U);
    xsi_wp_set_status(t37, 0);
    goto LAB4;

}

static int sp_UpdateWireOuts(char *t1, char *t2)
{
    char t10[8];
    char t11[8];
    char t12[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2644);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(148, ng0);

LAB5:    xsi_set_current_line(149, ng0);
    t5 = (t2 + 48U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(149, ng0);
    t8 = ((char*)((ng12)));
    t9 = (t1 + 5332);
    t13 = (t1 + 5332);
    t14 = (t13 + 44U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    t17 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t15)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t11 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    t25 = (t12 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(150, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB7:    t29 = *((unsigned int *)t12);
    t30 = (t29 + 0);
    t31 = *((unsigned int *)t10);
    t32 = *((unsigned int *)t11);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t9, t8, t30, *((unsigned int *)t11), t34);
    goto LAB8;

LAB9:    xsi_set_current_line(150, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 5332);
    t9 = (t1 + 5332);
    t13 = (t9 + 44U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t10 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    t18 = (t11 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (!(t22));
    t24 = (t20 && t23);
    t21 = (t12 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(151, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB12;
    goto LAB1;

LAB10:    t29 = *((unsigned int *)t12);
    t30 = (t29 + 0);
    t31 = *((unsigned int *)t10);
    t32 = *((unsigned int *)t11);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t8, t7, t30, *((unsigned int *)t11), t34);
    goto LAB11;

LAB12:    xsi_set_current_line(151, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t1 + 5332);
    t9 = (t1 + 5332);
    t13 = (t9 + 44U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t10, t14, 2, t15, 32, 1);
    t16 = (t10 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(152, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 24U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB15;
    goto LAB1;

LAB13:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t10), 1);
    goto LAB14;

LAB15:    xsi_set_current_line(152, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(153, ng0);
    xsi_set_current_line(153, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8552);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB17:    t4 = (t1 + 8552);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t7, 32);
    t8 = (t10 + 4);
    t19 = *((unsigned int *)t8);
    t22 = (~(t19));
    t26 = *((unsigned int *)t10);
    t29 = (t26 & t22);
    t31 = (t29 != 0);
    if (t31 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(155, ng0);

LAB23:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t5, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t13 = (t10 + 4);
    t14 = (t9 + 4);
    t19 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    t26 = (t19 ^ t22);
    t29 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t14);
    t32 = (t29 ^ t31);
    t42 = (t26 | t32);
    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t14);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB27;

LAB24:    if (t45 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t11) = 1;

LAB27:    t16 = (t11 + 4);
    t48 = *((unsigned int *)t16);
    t49 = (~(t48));
    t50 = *((unsigned int *)t11);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB29;

LAB28:    t17 = (t2 + 48U);
    t18 = *((char **)t17);
    t21 = (t18 + 48U);
    xsi_wp_set_status(t21, 1);
    t25 = (t2 + 28U);
    *((char **)t25) = &&LAB23;
    goto LAB1;

LAB18:    xsi_set_current_line(154, ng0);
    t9 = (t2 + 48U);
    t13 = *((char **)t9);
    t14 = (t13 + 40U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(154, ng0);
    t15 = (t1 + 4644U);
    t16 = *((char **)t15);
    t15 = (t1 + 7356);
    t17 = (t1 + 7356);
    t18 = (t17 + 44U);
    t21 = *((char **)t18);
    t25 = (t1 + 7356);
    t35 = (t25 + 40U);
    t36 = *((char **)t35);
    t37 = (t1 + 8552);
    t38 = (t37 + 36U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t11, t12, t21, t36, 2, 1, t39, 32, 1);
    t40 = (t11 + 4);
    t32 = *((unsigned int *)t40);
    t20 = (!(t32));
    t41 = (t12 + 4);
    t42 = *((unsigned int *)t41);
    t23 = (!(t42));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(153, ng0);
    t4 = (t1 + 8552);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8552);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB17;

LAB21:    t43 = *((unsigned int *)t11);
    t44 = *((unsigned int *)t12);
    t27 = (t43 - t44);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t15, t16, 0, *((unsigned int *)t12), t28);
    goto LAB22;

LAB26:    t15 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB27;

LAB29:    t35 = (t2 + 48U);
    t36 = *((char **)t35);
    t37 = (t36 + 48U);
    xsi_wp_set_status(t37, 0);
    goto LAB4;

}

static int sp_ActivateTriggerIn(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2900);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(166, ng0);

LAB5:    xsi_set_current_line(167, ng0);
    t5 = (t2 + 48U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(167, ng0);
    t8 = ((char*)((ng4)));
    t9 = (t1 + 5332);
    t11 = (t1 + 5332);
    t12 = (t11 + 44U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t10, t13, 2, t14, 32, 1);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    if (t17 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(168, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t1 + 5332);
    t6 = (t1 + 5332);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    t11 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t10, t18, t19, ((int*)(t8)), 2, t9, 32, 1, t11, 32, 1);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (!(t16));
    t13 = (t18 + 4);
    t20 = *((unsigned int *)t13);
    t21 = (!(t20));
    t22 = (t17 && t21);
    t14 = (t19 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (!(t23));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(169, ng0);
    t4 = (t1 + 8644);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    xsi_vlogtype_concat(t10, 16, 16, 2U, t7, 8, t6, 8);
    t8 = (t1 + 7172);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 16);
    xsi_set_current_line(170, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB7:    xsi_vlogvar_assign_value(t9, t8, 0, *((unsigned int *)t10), 1);
    goto LAB8;

LAB9:    t26 = *((unsigned int *)t19);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t18);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t18), t31);
    goto LAB10;

LAB11:    xsi_set_current_line(170, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t1 + 8736);
    t9 = (t8 + 36U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t7, 16, t11, 32);
    t12 = (t1 + 7172);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 16);
    xsi_set_current_line(171, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 5332);
    t6 = (t1 + 5332);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    t11 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t10, t18, t19, ((int*)(t8)), 2, t9, 32, 1, t11, 32, 1);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (!(t16));
    t13 = (t18 + 4);
    t20 = *((unsigned int *)t13);
    t21 = (!(t20));
    t22 = (t17 && t21);
    t14 = (t19 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (!(t23));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(172, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB12:    t26 = *((unsigned int *)t19);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t18);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t18), t31);
    goto LAB13;

LAB14:    xsi_set_current_line(172, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 7172);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(173, ng0);

LAB15:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t5, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t16 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    t23 = (t16 ^ t20);
    t26 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t12);
    t29 = (t26 ^ t28);
    t32 = (t23 | t29);
    t33 = *((unsigned int *)t11);
    t34 = *((unsigned int *)t12);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB19;

LAB16:    if (t35 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t18) = 1;

LAB19:    t14 = (t18 + 4);
    t38 = *((unsigned int *)t14);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB21;

LAB20:    t15 = (t2 + 48U);
    t43 = *((char **)t15);
    t44 = (t43 + 24U);
    xsi_wp_set_status(t44, 1);
    t45 = (t2 + 28U);
    *((char **)t45) = &&LAB15;
    goto LAB1;

LAB18:    t13 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB21:    t46 = (t2 + 48U);
    t47 = *((char **)t46);
    t48 = (t47 + 24U);
    xsi_wp_set_status(t48, 0);
    goto LAB4;

}

static int sp_UpdateTriggerOuts(char *t1, char *t2)
{
    char t10[8];
    char t11[8];
    char t12[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3156);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(182, ng0);

LAB5:    xsi_set_current_line(183, ng0);
    t5 = (t2 + 48U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(183, ng0);
    t8 = ((char*)((ng14)));
    t9 = (t1 + 5332);
    t13 = (t1 + 5332);
    t14 = (t13 + 44U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng6)));
    t17 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t15)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t11 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    t25 = (t12 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(184, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB7:    t29 = *((unsigned int *)t12);
    t30 = (t29 + 0);
    t31 = *((unsigned int *)t10);
    t32 = *((unsigned int *)t11);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t9, t8, t30, *((unsigned int *)t11), t34);
    goto LAB8;

LAB9:    xsi_set_current_line(184, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 5332);
    t9 = (t1 + 5332);
    t13 = (t9 + 44U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t10 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    t18 = (t11 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (!(t22));
    t24 = (t20 && t23);
    t21 = (t12 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(185, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB12;
    goto LAB1;

LAB10:    t29 = *((unsigned int *)t12);
    t30 = (t29 + 0);
    t31 = *((unsigned int *)t10);
    t32 = *((unsigned int *)t11);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t8, t7, t30, *((unsigned int *)t11), t34);
    goto LAB11;

LAB12:    xsi_set_current_line(185, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t1 + 5332);
    t9 = (t1 + 5332);
    t13 = (t9 + 44U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t10, t14, 2, t15, 32, 1);
    t16 = (t10 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(186, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 24U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB15;
    goto LAB1;

LAB13:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t10), 1);
    goto LAB14;

LAB15:    xsi_set_current_line(186, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(186, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(188, ng0);
    xsi_set_current_line(188, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8828);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB18:    t4 = (t1 + 8828);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 664);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t8, 32);
    t7 = (t10 + 4);
    t19 = *((unsigned int *)t7);
    t22 = (~(t19));
    t26 = *((unsigned int *)t10);
    t29 = (t26 & t22);
    t31 = (t29 != 0);
    if (t31 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(190, ng0);
    xsi_set_current_line(190, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8828);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB22:    t4 = (t1 + 8828);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t7, 32);
    t8 = (t10 + 4);
    t19 = *((unsigned int *)t8);
    t22 = (~(t19));
    t26 = *((unsigned int *)t10);
    t29 = (t26 & t22);
    t31 = (t29 != 0);
    if (t31 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(192, ng0);

LAB28:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t5, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t13 = (t10 + 4);
    t14 = (t9 + 4);
    t19 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    t26 = (t19 ^ t22);
    t29 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t14);
    t32 = (t29 ^ t31);
    t42 = (t26 | t32);
    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t14);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB32;

LAB29:    if (t45 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t11) = 1;

LAB32:    t16 = (t11 + 4);
    t48 = *((unsigned int *)t16);
    t49 = (~(t48));
    t50 = *((unsigned int *)t11);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB34;

LAB33:    t17 = (t2 + 48U);
    t18 = *((char **)t17);
    t21 = (t18 + 64U);
    xsi_wp_set_status(t21, 1);
    t25 = (t2 + 28U);
    *((char **)t25) = &&LAB28;
    goto LAB1;

LAB19:    xsi_set_current_line(188, ng0);
    t9 = (t2 + 48U);
    t13 = *((char **)t9);
    t14 = (t13 + 48U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(188, ng0);
    t4 = (t1 + 8828);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8828);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB18;

LAB23:    xsi_set_current_line(191, ng0);
    t9 = (t2 + 48U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(191, ng0);
    t15 = (t1 + 4644U);
    t16 = *((char **)t15);
    t15 = (t1 + 7448);
    t17 = (t1 + 7448);
    t18 = (t17 + 44U);
    t21 = *((char **)t18);
    t25 = (t1 + 7448);
    t35 = (t25 + 40U);
    t36 = *((char **)t35);
    t37 = (t1 + 8828);
    t38 = (t37 + 36U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t11, t12, t21, t36, 2, 1, t39, 32, 1);
    t40 = (t11 + 4);
    t32 = *((unsigned int *)t40);
    t20 = (!(t32));
    t41 = (t12 + 4);
    t42 = *((unsigned int *)t41);
    t23 = (!(t42));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(190, ng0);
    t4 = (t1 + 8828);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8828);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB22;

LAB26:    t43 = *((unsigned int *)t11);
    t44 = *((unsigned int *)t12);
    t27 = (t43 - t44);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t15, t16, 0, *((unsigned int *)t12), t28);
    goto LAB27;

LAB31:    t15 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB32;

LAB34:    t35 = (t2 + 48U);
    t36 = *((char **)t35);
    t37 = (t36 + 64U);
    xsi_wp_set_status(t37, 0);
    goto LAB4;

}

static int sp_WriteToPipeIn(char *t1, char *t2)
{
    char t9[8];
    char t21[8];
    char t22[8];
    char t31[16];
    char t35[8];
    char t44[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
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

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3412);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(205, ng0);

LAB5:    xsi_set_current_line(206, ng0);
    t5 = (t1 + 9012);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t7, 32, t8, 32);
    t10 = (t1 + 9104);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(206, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(206, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(206, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 9472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(207, ng0);
    t4 = (t1 + 9012);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(209, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(208, ng0);
    t10 = (t1 + 3412);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t10);
    goto LAB8;

LAB9:    xsi_set_current_line(209, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t16 = (t10 + 44U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t17, 2, t18, 32, 1);
    t19 = (t9 + 4);
    t11 = *((unsigned int *)t19);
    t20 = (!(t11));
    if (t20 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(210, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 5332);
    t6 = (t1 + 5332);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng6)));
    t16 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t8)), 2, t10, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t20 = (!(t11));
    t18 = (t21 + 4);
    t12 = *((unsigned int *)t18);
    t23 = (!(t12));
    t24 = (t20 && t23);
    t19 = (t22 + 4);
    t13 = *((unsigned int *)t19);
    t25 = (!(t13));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(211, ng0);
    t4 = (t1 + 8920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 264);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t31, 40, 40, 2U, t8, 32, t6, 8);
    t7 = (t1 + 7172);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 16);
    xsi_set_current_line(212, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB10:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t9), 1);
    goto LAB11;

LAB12:    t14 = *((unsigned int *)t22);
    t27 = (t14 + 0);
    t15 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t15 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t21), t30);
    goto LAB13;

LAB14:    xsi_set_current_line(212, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t16 = (t10 + 44U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng6)));
    t19 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t32 = (t9 + 4);
    t11 = *((unsigned int *)t32);
    t20 = (!(t11));
    t33 = (t21 + 4);
    t12 = *((unsigned int *)t33);
    t23 = (!(t12));
    t24 = (t20 && t23);
    t34 = (t22 + 4);
    t13 = *((unsigned int *)t34);
    t25 = (!(t13));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(213, ng0);
    t4 = (t1 + 9104);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 7172);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(214, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB17;
    goto LAB1;

LAB15:    t14 = *((unsigned int *)t22);
    t27 = (t14 + 0);
    t15 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t15 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t8, t7, t27, *((unsigned int *)t21), t30);
    goto LAB16;

LAB17:    xsi_set_current_line(214, ng0);
    t7 = (t1 + 9104);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    t16 = ((char*)((ng19)));
    memset(t9, 0, 8);
    xsi_vlog_signed_rshift(t9, 32, t10, 32, t16, 32);
    t17 = (t1 + 7172);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 16);
    xsi_set_current_line(215, ng0);
    xsi_set_current_line(215, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9196);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB18:    t4 = (t1 + 9196);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 9012);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB20;

LAB19:    t17 = (t10 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB21;

LAB22:    t19 = (t9 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(227, ng0);

LAB41:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t5, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t16 = (t9 + 4);
    t17 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t28 = (t14 ^ t15);
    t46 = (t13 | t28);
    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t17);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB45;

LAB42:    if (t49 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t21) = 1;

LAB45:    t19 = (t21 + 4);
    t52 = *((unsigned int *)t19);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t54 & t53);
    t56 = (t55 != 0);
    if (t56 > 0)
        goto LAB47;

LAB46:    t32 = (t2 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    xsi_wp_set_status(t34, 1);
    t36 = (t2 + 28U);
    *((char **)t36) = &&LAB41;
    goto LAB1;

LAB20:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t9) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(215, ng0);

LAB26:    xsi_set_current_line(216, ng0);
    t32 = (t2 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 24U);
    xsi_wp_set_status(t34, 1);
    *((char **)t3) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(217, ng0);
    t4 = (t1 + 5884);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 5884);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t16 = (t1 + 5884);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = (t1 + 9196);
    t32 = (t19 + 36U);
    t33 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t9, 8, t6, t10, t18, 2, 1, t33, 32, 1);
    t34 = (t1 + 7172);
    t36 = (t1 + 7172);
    t37 = (t36 + 44U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng6)));
    t40 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t21, t22, t35, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t21 + 4);
    t11 = *((unsigned int *)t41);
    t20 = (!(t11));
    t42 = (t22 + 4);
    t12 = *((unsigned int *)t42);
    t23 = (!(t12));
    t24 = (t20 && t23);
    t43 = (t35 + 4);
    t13 = *((unsigned int *)t43);
    t25 = (!(t13));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(218, ng0);
    t4 = (t1 + 5884);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 5884);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t16 = (t1 + 5884);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = (t1 + 9196);
    t32 = (t19 + 36U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t33, 32, t34, 32);
    xsi_vlog_generic_get_array_select_value(t9, 8, t6, t10, t18, 2, 1, t21, 32, 1);
    t36 = (t1 + 7172);
    t37 = (t1 + 7172);
    t38 = (t37 + 44U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng20)));
    t41 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t22, t35, t44, ((int*)(t39)), 2, t40, 32, 1, t41, 32, 1);
    t42 = (t22 + 4);
    t11 = *((unsigned int *)t42);
    t20 = (!(t11));
    t43 = (t35 + 4);
    t12 = *((unsigned int *)t43);
    t23 = (!(t12));
    t24 = (t20 && t23);
    t45 = (t44 + 4);
    t13 = *((unsigned int *)t45);
    t25 = (!(t13));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(219, ng0);
    t4 = (t1 + 9288);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 9288);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(220, ng0);
    t4 = (t1 + 9288);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 9472);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t6, 32, t10, 32);
    t16 = (t9 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(215, ng0);
    t4 = (t1 + 9196);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 9196);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB18;

LAB28:    t14 = *((unsigned int *)t35);
    t27 = (t14 + 0);
    t15 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    t29 = (t15 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t34, t9, t27, *((unsigned int *)t22), t30);
    goto LAB29;

LAB30:    t14 = *((unsigned int *)t44);
    t27 = (t14 + 0);
    t15 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t35);
    t29 = (t15 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t36, t9, t27, *((unsigned int *)t35), t30);
    goto LAB31;

LAB32:    xsi_set_current_line(220, ng0);

LAB35:    xsi_set_current_line(221, ng0);
    xsi_set_current_line(221, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t1 + 9380);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);

LAB36:    t4 = (t1 + 9380);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 264);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(224, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB34;

LAB37:    xsi_set_current_line(221, ng0);

LAB39:    xsi_set_current_line(222, ng0);
    t10 = (t2 + 48U);
    t16 = *((char **)t10);
    t17 = (t16 + 32U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(221, ng0);
    t4 = (t1 + 9380);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 9380);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB36;

LAB44:    t18 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB45;

LAB47:    t37 = (t2 + 48U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    xsi_wp_set_status(t39, 0);
    goto LAB4;

}

static int sp_ReadFromPipeOut(char *t1, char *t2)
{
    char t9[8];
    char t21[8];
    char t22[8];
    char t31[16];
    char t41[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3668);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(240, ng0);

LAB5:    xsi_set_current_line(241, ng0);
    t5 = (t1 + 9656);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t7, 32, t8, 32);
    t10 = (t1 + 9748);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(241, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(241, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9932);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(241, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(241, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 10116);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(242, ng0);
    t4 = (t1 + 9656);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(244, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(243, ng0);
    t10 = (t1 + 3668);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t10);
    goto LAB8;

LAB9:    xsi_set_current_line(244, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t16 = (t10 + 44U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t17, 2, t18, 32, 1);
    t19 = (t9 + 4);
    t11 = *((unsigned int *)t19);
    t20 = (!(t11));
    if (t20 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(245, ng0);
    t4 = ((char*)((ng22)));
    t5 = (t1 + 5332);
    t6 = (t1 + 5332);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng6)));
    t16 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t8)), 2, t10, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t20 = (!(t11));
    t18 = (t21 + 4);
    t12 = *((unsigned int *)t18);
    t23 = (!(t12));
    t24 = (t20 && t23);
    t19 = (t22 + 4);
    t13 = *((unsigned int *)t19);
    t25 = (!(t13));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(246, ng0);
    t4 = (t1 + 9564);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 264);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t31, 40, 40, 2U, t8, 32, t6, 8);
    t7 = (t1 + 7172);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 16);
    xsi_set_current_line(247, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB10:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t9), 1);
    goto LAB11;

LAB12:    t14 = *((unsigned int *)t22);
    t27 = (t14 + 0);
    t15 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t15 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t21), t30);
    goto LAB13;

LAB14:    xsi_set_current_line(247, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t16 = (t10 + 44U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng6)));
    t19 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t32 = (t9 + 4);
    t11 = *((unsigned int *)t32);
    t20 = (!(t11));
    t33 = (t21 + 4);
    t12 = *((unsigned int *)t33);
    t23 = (!(t12));
    t24 = (t20 && t23);
    t34 = (t22 + 4);
    t13 = *((unsigned int *)t34);
    t25 = (!(t13));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(248, ng0);
    t4 = (t1 + 9748);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 7172);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(249, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB17;
    goto LAB1;

LAB15:    t14 = *((unsigned int *)t22);
    t27 = (t14 + 0);
    t15 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t15 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t8, t7, t27, *((unsigned int *)t21), t30);
    goto LAB16;

LAB17:    xsi_set_current_line(249, ng0);
    t7 = (t1 + 9748);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    t16 = ((char*)((ng19)));
    memset(t9, 0, 8);
    xsi_vlog_signed_rshift(t9, 32, t10, 32, t16, 32);
    t17 = (t1 + 7172);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 16);
    xsi_set_current_line(250, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 24U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(250, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t16 = (t10 + 44U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t17, 2, t18, 32, 1);
    t19 = (t9 + 4);
    t11 = *((unsigned int *)t19);
    t20 = (!(t11));
    if (t20 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(251, ng0);
    xsi_set_current_line(251, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB21:    t4 = (t1 + 9840);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 9656);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB23;

LAB22:    t17 = (t10 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB24;

LAB25:    t19 = (t9 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(263, ng0);

LAB44:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t5, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t16 = (t9 + 4);
    t17 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t28 = (t14 ^ t15);
    t36 = (t13 | t28);
    t38 = *((unsigned int *)t16);
    t39 = *((unsigned int *)t17);
    t40 = (t38 | t39);
    t43 = (~(t40));
    t44 = (t36 & t43);
    if (t44 != 0)
        goto LAB48;

LAB45:    if (t40 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t21) = 1;

LAB48:    t19 = (t21 + 4);
    t45 = *((unsigned int *)t19);
    t46 = (~(t45));
    t47 = *((unsigned int *)t21);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB50;

LAB49:    t32 = (t2 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 48U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 28U);
    *((char **)t35) = &&LAB44;
    goto LAB1;

LAB19:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t9), 1);
    goto LAB20;

LAB23:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(251, ng0);

LAB29:    xsi_set_current_line(252, ng0);
    t32 = (t2 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 32U);
    xsi_wp_set_status(t34, 1);
    *((char **)t3) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(253, ng0);
    t4 = (t1 + 4644U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 255U);
    t28 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t28 & 255U);
    t7 = (t1 + 5976);
    t8 = (t1 + 5976);
    t10 = (t8 + 44U);
    t16 = *((char **)t10);
    t17 = (t1 + 5976);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t32 = (t1 + 9840);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    xsi_vlog_generic_convert_array_indices(t21, t22, t16, t19, 2, 1, t34, 32, 1);
    t35 = (t21 + 4);
    t36 = *((unsigned int *)t35);
    t20 = (!(t36));
    t37 = (t22 + 4);
    t38 = *((unsigned int *)t37);
    t23 = (!(t38));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(254, ng0);
    t4 = (t1 + 4644U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 255U);
    t28 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t28 & 255U);
    t7 = (t1 + 5976);
    t8 = (t1 + 5976);
    t10 = (t8 + 44U);
    t16 = *((char **)t10);
    t17 = (t1 + 5976);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t32 = (t1 + 9840);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_signed_add(t41, 32, t34, 32, t35, 32);
    xsi_vlog_generic_convert_array_indices(t21, t22, t16, t19, 2, 1, t41, 32, 1);
    t37 = (t21 + 4);
    t36 = *((unsigned int *)t37);
    t20 = (!(t36));
    t42 = (t22 + 4);
    t38 = *((unsigned int *)t42);
    t23 = (!(t38));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(255, ng0);
    t4 = (t1 + 9932);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 9932);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(256, ng0);
    t4 = (t1 + 9932);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 10116);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t6, 32, t10, 32);
    t16 = (t9 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(251, ng0);
    t4 = (t1 + 9840);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 9840);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB21;

LAB31:    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t25 = (t39 - t40);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t7, t9, 0, *((unsigned int *)t22), t26);
    goto LAB32;

LAB33:    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t25 = (t39 - t40);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t7, t9, 0, *((unsigned int *)t22), t26);
    goto LAB34;

LAB35:    xsi_set_current_line(256, ng0);

LAB38:    xsi_set_current_line(257, ng0);
    xsi_set_current_line(257, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t1 + 10024);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);

LAB39:    t4 = (t1 + 10024);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 264);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(260, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9932);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB37;

LAB40:    xsi_set_current_line(257, ng0);

LAB42:    xsi_set_current_line(258, ng0);
    t10 = (t2 + 48U);
    t16 = *((char **)t10);
    t17 = (t16 + 40U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(257, ng0);
    t4 = (t1 + 10024);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 10024);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB39;

LAB47:    t18 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB48;

LAB50:    t37 = (t2 + 48U);
    t42 = *((char **)t37);
    t50 = (t42 + 48U);
    xsi_wp_set_status(t50, 0);
    goto LAB4;

}

static int sp_WriteToBlockPipeIn(char *t1, char *t2)
{
    char t9[8];
    char t21[8];
    char t22[8];
    char t31[16];
    char t46[8];
    char t47[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3924);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(276, ng0);

LAB5:    xsi_set_current_line(277, ng0);
    t5 = (t1 + 10392);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t7, 32, t8, 32);
    t10 = (t1 + 10484);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(277, ng0);
    t4 = (t1 + 10300);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 10576);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(277, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10852);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(277, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10944);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(278, ng0);
    t4 = (t1 + 10484);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 10576);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_signed_divide(t9, 32, t6, 32, t10, 32);
    t11 = (t1 + 10668);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 32);
    xsi_set_current_line(279, ng0);
    t4 = (t1 + 10392);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(281, ng0);
    t4 = (t1 + 10300);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(283, ng0);
    t4 = (t1 + 10392);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 10300);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 32, t10, 32);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(285, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB15;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(280, ng0);
    t10 = (t1 + 3924);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t10);
    goto LAB8;

LAB9:    xsi_set_current_line(282, ng0);
    t10 = (t1 + 3924);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t10);
    goto LAB11;

LAB12:    xsi_set_current_line(284, ng0);
    t17 = (t1 + 3924);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t17);
    goto LAB14;

LAB15:    xsi_set_current_line(285, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t11 = (t10 + 44U);
    t17 = *((char **)t11);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t17, 2, t18, 32, 1);
    t19 = (t9 + 4);
    t12 = *((unsigned int *)t19);
    t20 = (!(t12));
    if (t20 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(286, ng0);
    t4 = ((char*)((ng25)));
    t5 = (t1 + 5332);
    t6 = (t1 + 5332);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng6)));
    t11 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t8)), 2, t10, 32, 1, t11, 32, 1);
    t17 = (t9 + 4);
    t12 = *((unsigned int *)t17);
    t20 = (!(t12));
    t18 = (t21 + 4);
    t13 = *((unsigned int *)t18);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t19 = (t22 + 4);
    t14 = *((unsigned int *)t19);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(287, ng0);
    t4 = (t1 + 10208);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 264);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t31, 40, 40, 2U, t8, 32, t6, 8);
    t7 = (t1 + 7172);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 16);
    xsi_set_current_line(288, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB16:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t9), 1);
    goto LAB17;

LAB18:    t15 = *((unsigned int *)t22);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t21), t30);
    goto LAB19;

LAB20:    xsi_set_current_line(288, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t11 = (t10 + 44U);
    t17 = *((char **)t11);
    t18 = ((char*)((ng6)));
    t19 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t32 = (t9 + 4);
    t12 = *((unsigned int *)t32);
    t20 = (!(t12));
    t33 = (t21 + 4);
    t13 = *((unsigned int *)t33);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t34 = (t22 + 4);
    t14 = *((unsigned int *)t34);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(289, ng0);
    t4 = (t1 + 10484);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 7172);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(290, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB23;
    goto LAB1;

LAB21:    t15 = *((unsigned int *)t22);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t8, t7, t27, *((unsigned int *)t21), t30);
    goto LAB22;

LAB23:    xsi_set_current_line(290, ng0);
    t7 = (t1 + 10484);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng19)));
    memset(t9, 0, 8);
    xsi_vlog_signed_rshift(t9, 32, t10, 32, t11, 32);
    t17 = (t1 + 7172);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 16);
    xsi_set_current_line(291, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 24U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(291, ng0);
    t7 = (t1 + 10576);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    t11 = (t1 + 7172);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 16);
    xsi_set_current_line(292, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(292, ng0);
    t7 = (t1 + 344);
    t8 = *((char **)t7);
    t7 = (t1 + 7172);
    t10 = (t1 + 7172);
    t11 = (t10 + 44U);
    t17 = *((char **)t11);
    t18 = ((char*)((ng6)));
    t19 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t32 = (t9 + 4);
    t12 = *((unsigned int *)t32);
    t20 = (!(t12));
    t33 = (t21 + 4);
    t13 = *((unsigned int *)t33);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t34 = (t22 + 4);
    t14 = *((unsigned int *)t34);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(292, ng0);
    t4 = (t1 + 424);
    t5 = *((char **)t4);
    t4 = (t1 + 7172);
    t6 = (t1 + 7172);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng20)));
    t11 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t8)), 2, t10, 32, 1, t11, 32, 1);
    t17 = (t9 + 4);
    t12 = *((unsigned int *)t17);
    t20 = (!(t12));
    t18 = (t21 + 4);
    t13 = *((unsigned int *)t18);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t19 = (t22 + 4);
    t14 = *((unsigned int *)t19);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(293, ng0);
    xsi_set_current_line(293, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10760);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB30:    t4 = (t1 + 10760);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 10668);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t10, 32);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(303, ng0);

LAB63:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t5, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t11 = (t9 + 4);
    t17 = (t10 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t10);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t17);
    t28 = (t15 ^ t16);
    t38 = (t14 | t28);
    t39 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t17);
    t41 = (t39 | t40);
    t56 = (~(t41));
    t57 = (t38 & t56);
    if (t57 != 0)
        goto LAB67;

LAB64:    if (t41 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t21) = 1;

LAB67:    t19 = (t21 + 4);
    t58 = *((unsigned int *)t19);
    t59 = (~(t58));
    t60 = *((unsigned int *)t21);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB69;

LAB68:    t32 = (t2 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 88U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 28U);
    *((char **)t35) = &&LAB63;
    goto LAB1;

LAB26:    t15 = *((unsigned int *)t22);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t7, t8, t27, *((unsigned int *)t21), t30);
    goto LAB27;

LAB28:    t15 = *((unsigned int *)t22);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t5, t27, *((unsigned int *)t21), t30);
    goto LAB29;

LAB31:    xsi_set_current_line(293, ng0);

LAB33:    xsi_set_current_line(294, ng0);

LAB34:    t17 = (t1 + 4552U);
    t18 = *((char **)t17);
    t17 = (t1 + 4528U);
    t19 = (t17 + 44U);
    t32 = *((char **)t19);
    t33 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t21, 32, t18, t32, 2, t33, 32, 1);
    t34 = ((char*)((ng4)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t34))
        goto LAB37;

LAB35:    t35 = (t21 + 4);
    t36 = (t34 + 4);
    if (*((unsigned int *)t35) != *((unsigned int *)t36))
        goto LAB37;

LAB36:    *((unsigned int *)t22) = 1;

LAB37:    t37 = (t22 + 4);
    t28 = *((unsigned int *)t37);
    t38 = (~(t28));
    t39 = *((unsigned int *)t22);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(295, ng0);

LAB41:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t5, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t21, 0, 8);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB44;

LAB42:    t11 = (t9 + 4);
    t17 = (t10 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t17))
        goto LAB44;

LAB43:    *((unsigned int *)t21) = 1;

LAB44:    t18 = (t21 + 4);
    t12 = *((unsigned int *)t18);
    t13 = (~(t12));
    t14 = *((unsigned int *)t21);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(296, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB48;
    goto LAB1;

LAB38:    xsi_set_current_line(294, ng0);
    t42 = (t2 + 48U);
    t43 = *((char **)t42);
    t44 = (t43 + 40U);
    xsi_wp_set_status(t44, 1);
    *((char **)t3) = &&LAB40;
    goto LAB1;

LAB40:    goto LAB34;

LAB45:    xsi_set_current_line(295, ng0);
    t19 = (t2 + 48U);
    t32 = *((char **)t19);
    t33 = (t32 + 48U);
    xsi_wp_set_status(t33, 1);
    *((char **)t3) = &&LAB47;
    goto LAB1;

LAB47:    goto LAB41;

LAB48:    xsi_set_current_line(296, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 64U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(297, ng0);
    xsi_set_current_line(297, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10852);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB50:    t4 = (t1 + 10852);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 10576);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t10, 32);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(301, ng0);
    xsi_set_current_line(301, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10852);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB59:    t4 = (t1 + 10852);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 264);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(293, ng0);
    t4 = (t1 + 10760);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 10760);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB30;

LAB51:    xsi_set_current_line(297, ng0);

LAB53:    xsi_set_current_line(298, ng0);
    t17 = (t1 + 5884);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    t32 = (t1 + 5884);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t1 + 5884);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t42 = (t1 + 10944);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_array_select_value(t21, 8, t19, t34, t37, 2, 1, t44, 32, 1);
    t45 = (t1 + 7172);
    t48 = (t1 + 7172);
    t49 = (t48 + 44U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng6)));
    t52 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t22, t46, t47, ((int*)(t50)), 2, t51, 32, 1, t52, 32, 1);
    t53 = (t22 + 4);
    t28 = *((unsigned int *)t53);
    t20 = (!(t28));
    t54 = (t46 + 4);
    t38 = *((unsigned int *)t54);
    t23 = (!(t38));
    t24 = (t20 && t23);
    t55 = (t47 + 4);
    t39 = *((unsigned int *)t55);
    t25 = (!(t39));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(298, ng0);
    t4 = (t1 + 5884);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 5884);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t11 = (t1 + 5884);
    t17 = (t11 + 40U);
    t18 = *((char **)t17);
    t19 = (t1 + 10944);
    t32 = (t19 + 36U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t33, 32, t34, 32);
    xsi_vlog_generic_get_array_select_value(t9, 8, t6, t10, t18, 2, 1, t21, 32, 1);
    t35 = (t1 + 7172);
    t36 = (t1 + 7172);
    t37 = (t36 + 44U);
    t42 = *((char **)t37);
    t43 = ((char*)((ng20)));
    t44 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t22, t46, t47, ((int*)(t42)), 2, t43, 32, 1, t44, 32, 1);
    t45 = (t22 + 4);
    t12 = *((unsigned int *)t45);
    t20 = (!(t12));
    t48 = (t46 + 4);
    t13 = *((unsigned int *)t48);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t49 = (t47 + 4);
    t14 = *((unsigned int *)t49);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(299, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 72U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB58;
    goto LAB1;

LAB54:    t40 = *((unsigned int *)t47);
    t27 = (t40 + 0);
    t41 = *((unsigned int *)t22);
    t56 = *((unsigned int *)t46);
    t29 = (t41 - t56);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t45, t21, t27, *((unsigned int *)t46), t30);
    goto LAB55;

LAB56:    t15 = *((unsigned int *)t47);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t46);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t35, t9, t27, *((unsigned int *)t46), t30);
    goto LAB57;

LAB58:    xsi_set_current_line(299, ng0);
    t4 = (t1 + 10944);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 10944);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(297, ng0);
    t4 = (t1 + 10852);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 10852);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB50;

LAB60:    xsi_set_current_line(301, ng0);
    t10 = (t2 + 48U);
    t11 = *((char **)t10);
    t17 = (t11 + 80U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(301, ng0);
    t4 = (t1 + 10852);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 10852);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB59;

LAB66:    t18 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB67;

LAB69:    t36 = (t2 + 48U);
    t37 = *((char **)t36);
    t42 = (t37 + 88U);
    xsi_wp_set_status(t42, 0);
    goto LAB4;

}

static int sp_ReadFromBlockPipeOut(char *t1, char *t2)
{
    char t9[8];
    char t21[8];
    char t22[8];
    char t31[16];
    char t46[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    char *t47;
    char *t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4180);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(316, ng0);

LAB5:    xsi_set_current_line(317, ng0);
    t5 = (t1 + 11220);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t7, 32, t8, 32);
    t10 = (t1 + 11312);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(317, ng0);
    t4 = (t1 + 11128);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 11404);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(317, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(317, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11772);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(318, ng0);
    t4 = (t1 + 11312);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 11404);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_signed_divide(t9, 32, t6, 32, t10, 32);
    t11 = (t1 + 11496);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 32);
    xsi_set_current_line(319, ng0);
    t4 = (t1 + 11220);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(321, ng0);
    t4 = (t1 + 11128);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(323, ng0);
    t4 = (t1 + 11220);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 11128);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 32, t10, 32);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(325, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB15;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(320, ng0);
    t10 = (t1 + 4180);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t10);
    goto LAB8;

LAB9:    xsi_set_current_line(322, ng0);
    t10 = (t1 + 4180);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t10);
    goto LAB11;

LAB12:    xsi_set_current_line(324, ng0);
    t17 = (t1 + 4180);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t17);
    goto LAB14;

LAB15:    xsi_set_current_line(325, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t11 = (t10 + 44U);
    t17 = *((char **)t11);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t17, 2, t18, 32, 1);
    t19 = (t9 + 4);
    t12 = *((unsigned int *)t19);
    t20 = (!(t12));
    if (t20 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(326, ng0);
    t4 = ((char*)((ng26)));
    t5 = (t1 + 5332);
    t6 = (t1 + 5332);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng6)));
    t11 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t8)), 2, t10, 32, 1, t11, 32, 1);
    t17 = (t9 + 4);
    t12 = *((unsigned int *)t17);
    t20 = (!(t12));
    t18 = (t21 + 4);
    t13 = *((unsigned int *)t18);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t19 = (t22 + 4);
    t14 = *((unsigned int *)t19);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(327, ng0);
    t4 = (t1 + 11036);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 264);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t31, 40, 40, 2U, t8, 32, t6, 8);
    t7 = (t1 + 7172);
    xsi_vlogvar_assign_value(t7, t31, 0, 0, 16);
    xsi_set_current_line(328, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 8U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB16:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t9), 1);
    goto LAB17;

LAB18:    t15 = *((unsigned int *)t22);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t27, *((unsigned int *)t21), t30);
    goto LAB19;

LAB20:    xsi_set_current_line(328, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t11 = (t10 + 44U);
    t17 = *((char **)t11);
    t18 = ((char*)((ng6)));
    t19 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t32 = (t9 + 4);
    t12 = *((unsigned int *)t32);
    t20 = (!(t12));
    t33 = (t21 + 4);
    t13 = *((unsigned int *)t33);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t34 = (t22 + 4);
    t14 = *((unsigned int *)t34);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(329, ng0);
    t4 = (t1 + 11312);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 7172);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(330, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB23;
    goto LAB1;

LAB21:    t15 = *((unsigned int *)t22);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t8, t7, t27, *((unsigned int *)t21), t30);
    goto LAB22;

LAB23:    xsi_set_current_line(330, ng0);
    t7 = (t1 + 11312);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng19)));
    memset(t9, 0, 8);
    xsi_vlog_signed_rshift(t9, 32, t10, 32, t11, 32);
    t17 = (t1 + 7172);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 16);
    xsi_set_current_line(331, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 24U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(331, ng0);
    t7 = (t1 + 11404);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    t11 = (t1 + 7172);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 16);
    xsi_set_current_line(332, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(332, ng0);
    t7 = (t1 + 344);
    t8 = *((char **)t7);
    t7 = (t1 + 7172);
    t10 = (t1 + 7172);
    t11 = (t10 + 44U);
    t17 = *((char **)t11);
    t18 = ((char*)((ng6)));
    t19 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t32 = (t9 + 4);
    t12 = *((unsigned int *)t32);
    t20 = (!(t12));
    t33 = (t21 + 4);
    t13 = *((unsigned int *)t33);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t34 = (t22 + 4);
    t14 = *((unsigned int *)t34);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(332, ng0);
    t4 = (t1 + 424);
    t5 = *((char **)t4);
    t4 = (t1 + 7172);
    t6 = (t1 + 7172);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng20)));
    t11 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t9, t21, t22, ((int*)(t8)), 2, t10, 32, 1, t11, 32, 1);
    t17 = (t9 + 4);
    t12 = *((unsigned int *)t17);
    t20 = (!(t12));
    t18 = (t21 + 4);
    t13 = *((unsigned int *)t18);
    t23 = (!(t13));
    t24 = (t20 && t23);
    t19 = (t22 + 4);
    t14 = *((unsigned int *)t19);
    t25 = (!(t14));
    t26 = (t24 && t25);
    if (t26 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(333, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB30;
    goto LAB1;

LAB26:    t15 = *((unsigned int *)t22);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t7, t8, t27, *((unsigned int *)t21), t30);
    goto LAB27;

LAB28:    t15 = *((unsigned int *)t22);
    t27 = (t15 + 0);
    t16 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t16 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t5, t27, *((unsigned int *)t21), t30);
    goto LAB29;

LAB30:    xsi_set_current_line(333, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t1 + 5332);
    t10 = (t1 + 5332);
    t11 = (t10 + 44U);
    t17 = *((char **)t11);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t17, 2, t18, 32, 1);
    t19 = (t9 + 4);
    t12 = *((unsigned int *)t19);
    t20 = (!(t12));
    if (t20 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(334, ng0);
    xsi_set_current_line(334, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11588);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB33:    t4 = (t1 + 11588);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 11496);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t10, 32);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(344, ng0);

LAB66:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t5, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t11 = (t9 + 4);
    t17 = (t10 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t10);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t17);
    t28 = (t15 ^ t16);
    t38 = (t14 | t28);
    t39 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t17);
    t41 = (t39 | t40);
    t45 = (~(t41));
    t49 = (t38 & t45);
    if (t49 != 0)
        goto LAB70;

LAB67:    if (t41 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t21) = 1;

LAB70:    t19 = (t21 + 4);
    t51 = *((unsigned int *)t19);
    t52 = (~(t51));
    t53 = *((unsigned int *)t21);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB72;

LAB71:    t32 = (t2 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 96U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 28U);
    *((char **)t35) = &&LAB66;
    goto LAB1;

LAB31:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t9), 1);
    goto LAB32;

LAB34:    xsi_set_current_line(334, ng0);

LAB36:    xsi_set_current_line(335, ng0);

LAB37:    t17 = (t1 + 4552U);
    t18 = *((char **)t17);
    t17 = (t1 + 4528U);
    t19 = (t17 + 44U);
    t32 = *((char **)t19);
    t33 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t21, 32, t18, t32, 2, t33, 32, 1);
    t34 = ((char*)((ng4)));
    memset(t22, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t34))
        goto LAB40;

LAB38:    t35 = (t21 + 4);
    t36 = (t34 + 4);
    if (*((unsigned int *)t35) != *((unsigned int *)t36))
        goto LAB40;

LAB39:    *((unsigned int *)t22) = 1;

LAB40:    t37 = (t22 + 4);
    t28 = *((unsigned int *)t37);
    t38 = (~(t28));
    t39 = *((unsigned int *)t22);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(336, ng0);

LAB44:    t4 = (t1 + 4552U);
    t5 = *((char **)t4);
    t4 = (t1 + 4528U);
    t6 = (t4 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t5, t7, 2, t8, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t21, 0, 8);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB47;

LAB45:    t11 = (t9 + 4);
    t17 = (t10 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t17))
        goto LAB47;

LAB46:    *((unsigned int *)t21) = 1;

LAB47:    t18 = (t21 + 4);
    t12 = *((unsigned int *)t18);
    t13 = (~(t12));
    t14 = *((unsigned int *)t21);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(337, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 64U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB51;
    goto LAB1;

LAB41:    xsi_set_current_line(335, ng0);
    t42 = (t2 + 48U);
    t43 = *((char **)t42);
    t44 = (t43 + 48U);
    xsi_wp_set_status(t44, 1);
    *((char **)t3) = &&LAB43;
    goto LAB1;

LAB43:    goto LAB37;

LAB48:    xsi_set_current_line(336, ng0);
    t19 = (t2 + 48U);
    t32 = *((char **)t19);
    t33 = (t32 + 56U);
    xsi_wp_set_status(t33, 1);
    *((char **)t3) = &&LAB50;
    goto LAB1;

LAB50:    goto LAB44;

LAB51:    xsi_set_current_line(337, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 72U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(338, ng0);
    xsi_set_current_line(338, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB53:    t4 = (t1 + 11680);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 11404);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t10, 32);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(342, ng0);
    xsi_set_current_line(342, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB62:    t4 = (t1 + 11680);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 264);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(334, ng0);
    t4 = (t1 + 11588);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 11588);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB33;

LAB54:    xsi_set_current_line(338, ng0);

LAB56:    xsi_set_current_line(339, ng0);
    t17 = (t1 + 4644U);
    t18 = *((char **)t17);
    memset(t21, 0, 8);
    t17 = (t21 + 4);
    t19 = (t18 + 4);
    t28 = *((unsigned int *)t18);
    t38 = (t28 >> 0);
    *((unsigned int *)t21) = t38;
    t39 = *((unsigned int *)t19);
    t40 = (t39 >> 0);
    *((unsigned int *)t17) = t40;
    t41 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t41 & 255U);
    t45 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t45 & 255U);
    t32 = (t1 + 5976);
    t33 = (t1 + 5976);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = (t1 + 5976);
    t37 = (t36 + 40U);
    t42 = *((char **)t37);
    t43 = (t1 + 11772);
    t44 = (t43 + 36U);
    t47 = *((char **)t44);
    xsi_vlog_generic_convert_array_indices(t22, t46, t35, t42, 2, 1, t47, 32, 1);
    t48 = (t22 + 4);
    t49 = *((unsigned int *)t48);
    t20 = (!(t49));
    t50 = (t46 + 4);
    t51 = *((unsigned int *)t50);
    t23 = (!(t51));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(339, ng0);
    t4 = (t1 + 4644U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t6 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 8);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 8);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t28 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t28 & 255U);
    t7 = (t1 + 5976);
    t8 = (t1 + 5976);
    t10 = (t8 + 44U);
    t11 = *((char **)t10);
    t17 = (t1 + 5976);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t32 = (t1 + 11772);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_signed_add(t46, 32, t34, 32, t35, 32);
    xsi_vlog_generic_convert_array_indices(t21, t22, t11, t19, 2, 1, t46, 32, 1);
    t36 = (t21 + 4);
    t38 = *((unsigned int *)t36);
    t20 = (!(t38));
    t37 = (t22 + 4);
    t39 = *((unsigned int *)t37);
    t23 = (!(t39));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(340, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 80U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB61;
    goto LAB1;

LAB57:    t52 = *((unsigned int *)t22);
    t53 = *((unsigned int *)t46);
    t25 = (t52 - t53);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t32, t21, 0, *((unsigned int *)t46), t26);
    goto LAB58;

LAB59:    t40 = *((unsigned int *)t21);
    t41 = *((unsigned int *)t22);
    t25 = (t40 - t41);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t7, t9, 0, *((unsigned int *)t22), t26);
    goto LAB60;

LAB61:    xsi_set_current_line(340, ng0);
    t7 = (t1 + 11772);
    t8 = (t7 + 36U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng15)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t10, 32, t11, 32);
    t17 = (t1 + 11772);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    xsi_set_current_line(338, ng0);
    t4 = (t1 + 11680);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 11680);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB53;

LAB63:    xsi_set_current_line(342, ng0);
    t10 = (t2 + 48U);
    t11 = *((char **)t10);
    t17 = (t11 + 88U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB65;
    goto LAB1;

LAB65:    xsi_set_current_line(342, ng0);
    t4 = (t1 + 11680);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 11680);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB62;

LAB69:    t18 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB70;

LAB72:    t36 = (t2 + 48U);
    t37 = *((char **)t36);
    t42 = (t37 + 96U);
    xsi_wp_set_status(t42, 0);
    goto LAB4;

}

static void Initial_68_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(68, ng27);
    xsi_set_current_line(68, ng27);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5792);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB2:    t1 = (t0 + 5792);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 504);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB3;

LAB4:
LAB1:    return;
LAB3:    xsi_set_current_line(68, ng27);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 5884);
    t16 = (t0 + 5884);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 5884);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 5792);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(68, ng27);
    t1 = (t0 + 5792);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 5792);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB2;

LAB5:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB6;

}

static void Initial_71_1(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(71, ng27);
    xsi_set_current_line(71, ng27);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5792);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB2:    t1 = (t0 + 5792);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 584);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB3;

LAB4:
LAB1:    return;
LAB3:    xsi_set_current_line(71, ng27);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 5976);
    t16 = (t0 + 5976);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 5976);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 5792);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(71, ng27);
    t1 = (t0 + 5792);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 5792);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB2;

LAB5:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB6;

}

static void Initial_74_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(74, ng27);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5424);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_75_3(char *t0)
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

LAB0:    t1 = (t0 + 12728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng27);
    t2 = (t0 + 12628);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng27);
    t4 = (t0 + 5424);
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
    t24 = (t0 + 5424);
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

static void Initial_79_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(79, ng27);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5700);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_80_5(char *t0)
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

LAB0:    t1 = (t0 + 13016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng27);
    t2 = (t0 + 12916);
    xsi_process_wait(t2, 31000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng27);
    t4 = (t0 + 5700);
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
    t24 = (t0 + 5700);
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

static void Initial_83_6(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(83, ng27);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5516);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_84_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(84, ng27);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_121_8(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(121, ng27);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 6068);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_122_9(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(122, ng27);
    t1 = ((char*)((ng28)));
    t2 = (t0 + 6160);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Initial_123_10(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(123, ng27);
    t1 = ((char*)((ng15)));
    t2 = (t0 + 6252);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_124_11(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(124, ng27);
    t1 = ((char*)((ng29)));
    t2 = (t0 + 6344);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_126_12(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(126, ng27);
    t1 = ((char*)((ng30)));
    t2 = (t0 + 6436);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_127_13(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(127, ng27);
    t1 = ((char*)((ng30)));
    t2 = (t0 + 6528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_128_14(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(128, ng27);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6620);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_129_15(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(129, ng27);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6712);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_131_16(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(131, ng27);
    t1 = ((char*)((ng30)));
    t2 = (t0 + 6804);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_132_17(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(132, ng27);
    t1 = ((char*)((ng30)));
    t2 = (t0 + 6896);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_133_18(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(133, ng27);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6988);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_134_19(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(134, ng27);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7080);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_136_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 15176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng27);

LAB4:    xsi_set_current_line(137, ng27);
    t2 = (t0 + 15076);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(137, ng27);
    t3 = (t0 + 15076);
    t4 = (t0 + 1364);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB8:    t6 = (t0 + 15128);
    t7 = *((char **)t6);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t9 + 148U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB10:    if (t14 != 0)
        goto LAB11;

LAB6:    t7 = (t0 + 1364);
    xsi_vlog_subprogram_popinvocation(t7);

LAB7:    t15 = (t0 + 15128);
    t16 = *((char **)t15);
    t15 = (t0 + 1364);
    t17 = (t0 + 15076);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(169, ng27);
    t2 = (t0 + 15076);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t6 = (t0 + 15176U);
    *((char **)t6) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(169, ng27);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6160);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng31)));
    t8 = (t0 + 15076);
    t9 = (t0 + 1620);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 7632);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 7724);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 16);
    t13 = (t0 + 7816);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 16);

LAB15:    t15 = (t0 + 15128);
    t16 = *((char **)t15);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t18 + 148U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t14 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB17:    if (t14 != 0)
        goto LAB18;

LAB13:    t16 = (t0 + 1620);
    xsi_vlog_subprogram_popinvocation(t16);

LAB14:    t23 = (t0 + 15128);
    t24 = *((char **)t23);
    t23 = (t0 + 1620);
    t25 = (t0 + 15076);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(172, ng27);
    t2 = (t0 + 15076);
    xsi_process_wait(t2, 300000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:;
LAB18:    t15 = (t0 + 15176U);
    *((char **)t15) = &&LAB15;
    goto LAB1;

LAB19:    xsi_set_current_line(172, ng27);
    t3 = (t0 + 15076);
    t4 = (t0 + 2388);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB22:    t6 = (t0 + 15128);
    t7 = *((char **)t6);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t9 + 148U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB24:    if (t14 != 0)
        goto LAB25;

LAB20:    t7 = (t0 + 2388);
    xsi_vlog_subprogram_popinvocation(t7);

LAB21:    t15 = (t0 + 15128);
    t16 = *((char **)t15);
    t15 = (t0 + 2388);
    t17 = (t0 + 15076);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(173, ng27);
    t2 = (t0 + 15076);
    xsi_process_wait(t2, 400000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:;
LAB25:    t6 = (t0 + 15176U);
    *((char **)t6) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(173, ng27);
    t3 = ((char*)((ng32)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 15076);
    t6 = (t0 + 2900);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 8644);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);
    t9 = (t0 + 8736);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);

LAB29:    t10 = (t0 + 15128);
    t11 = *((char **)t10);
    t12 = (t11 + 44U);
    t13 = *((char **)t12);
    t15 = (t13 + 148U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t14 = ((int  (*)(char *, char *))t18)(t0, t11);

LAB31:    if (t14 != 0)
        goto LAB32;

LAB27:    t11 = (t0 + 2900);
    xsi_vlog_subprogram_popinvocation(t11);

LAB28:    t19 = (t0 + 15128);
    t20 = *((char **)t19);
    t19 = (t0 + 2900);
    t21 = (t0 + 15076);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    goto LAB1;

LAB30:;
LAB32:    t10 = (t0 + 15176U);
    *((char **)t10) = &&LAB29;
    goto LAB1;

}

static void Initial_52_21(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(52, ng0);

LAB2:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 5332);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 7172);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_57_22(char *t0)
{
    char t3[8];
    char t7[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;

LAB0:    t1 = (t0 + 15464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 15364);
    xsi_process_wait(t2, 10417LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 5332);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    memset(t3, 0, 8);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t16) == 0)
        goto LAB5;

LAB7:    t22 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t22) = 1;

LAB8:    t23 = (t3 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    *((unsigned int *)t3) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB9:    t31 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t31 & 1U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1U);
    t33 = (t0 + 5332);
    t35 = (t0 + 5332);
    t36 = (t35 + 44U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB11;

LAB12:    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t27 = *((unsigned int *)t3);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t3) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB9;

LAB11:    xsi_vlogvar_assign_value(t33, t3, 0, *((unsigned int *)t34), 1);
    goto LAB12;

}

static void Cont_59_23(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 15608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5332);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    memset(t4, 0, 8);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t16) != 0)
        goto LAB6;

LAB7:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB8;

LAB9:    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t34, 8);

LAB16:    t35 = (t0 + 16368);
    t36 = (t35 + 32U);
    t37 = *((char **)t36);
    t38 = (t37 + 40U);
    t39 = *((char **)t38);
    memset(t39, 0, 8);
    t40 = 65535U;
    t41 = t40;
    t42 = (t3 + 4);
    t43 = *((unsigned int *)t3);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t42);
    t41 = (t41 & t44);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 | t40);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t47 | t41);
    xsi_driver_vfirst_trans(t35, 0, 15);
    t48 = (t0 + 15804);
    *((int *)t48) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    t27 = (t0 + 7172);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    goto LAB9;

LAB10:    t34 = ((char*)((ng33)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t29, 16, t34, 16);
    goto LAB16;

LAB14:    memcpy(t3, t29, 8);
    goto LAB16;

}


extern void work_m_00000000001616402922_0293276604_init()
{
	static char *pe[] = {(void *)Initial_68_0,(void *)Initial_71_1,(void *)Initial_74_2,(void *)Always_75_3,(void *)Initial_79_4,(void *)Always_80_5,(void *)Initial_83_6,(void *)Initial_84_7,(void *)Initial_121_8,(void *)Initial_122_9,(void *)Initial_123_10,(void *)Initial_124_11,(void *)Initial_126_12,(void *)Initial_127_13,(void *)Initial_128_14,(void *)Initial_129_15,(void *)Initial_131_16,(void *)Initial_132_17,(void *)Initial_133_18,(void *)Initial_134_19,(void *)Initial_136_20,(void *)Initial_52_21,(void *)Always_57_22,(void *)Cont_59_23};
	static char *se[] = {(void *)sp_FrontPanelReset,(void *)sp_SetWireInValue,(void *)sp_GetWireOutValue,(void *)sp_IsTriggered,(void *)sp_UpdateWireIns,(void *)sp_UpdateWireOuts,(void *)sp_ActivateTriggerIn,(void *)sp_UpdateTriggerOuts,(void *)sp_WriteToPipeIn,(void *)sp_ReadFromPipeOut,(void *)sp_WriteToBlockPipeIn,(void *)sp_ReadFromBlockPipeOut};
	xsi_register_didat("work_m_00000000001616402922_0293276604", "isim/FIRST_TEST_isim_beh.exe.sim/work/m_00000000001616402922_0293276604.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
