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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/gb/Documents/4IR/FPGA-Proj/INSA_Ethernet_10_Core/Ethernet_10_Core/Test_Reception.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_3362471586_2372691052_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(142, ng0);

LAB3:    t1 = (5 * 1000LL);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 7592);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 7592);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 7512);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3362471586_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(260, ng0);

LAB3:    t1 = (t0 + 7656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (10 * 1000LL);
    t7 = (t0 + 7656);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3362471586_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int64 t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int64 t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int64 t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(262, ng0);

LAB3:    t1 = (t0 + 7720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (90 * 1000LL);
    t7 = (t0 + 7720);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);
    t12 = (880 * 1000LL);
    t13 = (t0 + 7720);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t13, 0U, 1, t12);
    t18 = (1530 * 1000LL);
    t19 = (t0 + 7720);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t19, 0U, 1, t18);
    t24 = (1920 * 1000LL);
    t25 = (t0 + 7720);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t25, 0U, 1, t24);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3362471586_2372691052_p_3(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int64 t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int64 t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int64 t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int64 t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int64 t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int64 t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int64 t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    int64 t80;
    char *t81;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    int64 t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    int64 t96;
    char *t97;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    int64 t104;
    char *t105;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    int64 t112;
    char *t113;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    int64 t120;
    char *t121;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    int64 t128;
    char *t129;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    int64 t136;
    char *t137;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    int64 t144;
    char *t145;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    int64 t152;
    char *t153;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    int64 t160;
    char *t161;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t167;

LAB0:    xsi_set_current_line(265, ng0);

LAB3:    t1 = (t0 + 12803);
    t3 = (t0 + 7784);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);
    t8 = (160 * 1000LL);
    t9 = (t0 + 12811);
    t11 = (t0 + 7784);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 8U);
    xsi_driver_subsequent_trans_delta(t11, 0U, 8U, t8);
    t16 = (240 * 1000LL);
    t17 = (t0 + 12819);
    t19 = (t0 + 7784);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 8U);
    xsi_driver_subsequent_trans_delta(t19, 0U, 8U, t16);
    t24 = (320 * 1000LL);
    t25 = (t0 + 12827);
    t27 = (t0 + 7784);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t25, 8U);
    xsi_driver_subsequent_trans_delta(t27, 0U, 8U, t24);
    t32 = (400 * 1000LL);
    t33 = (t0 + 12835);
    t35 = (t0 + 7784);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t33, 8U);
    xsi_driver_subsequent_trans_delta(t35, 0U, 8U, t32);
    t40 = (480 * 1000LL);
    t41 = (t0 + 12843);
    t43 = (t0 + 7784);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t41, 8U);
    xsi_driver_subsequent_trans_delta(t43, 0U, 8U, t40);
    t48 = (560 * 1000LL);
    t49 = (t0 + 12851);
    t51 = (t0 + 7784);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memcpy(t55, t49, 8U);
    xsi_driver_subsequent_trans_delta(t51, 0U, 8U, t48);
    t56 = (640 * 1000LL);
    t57 = (t0 + 12859);
    t59 = (t0 + 7784);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memcpy(t63, t57, 8U);
    xsi_driver_subsequent_trans_delta(t59, 0U, 8U, t56);
    t64 = (1200 * 1000LL);
    t65 = (t0 + 12867);
    t67 = (t0 + 7784);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memcpy(t71, t65, 8U);
    xsi_driver_subsequent_trans_delta(t67, 0U, 8U, t64);
    t72 = (1280 * 1000LL);
    t73 = (t0 + 12875);
    t75 = (t0 + 7784);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memcpy(t79, t73, 8U);
    xsi_driver_subsequent_trans_delta(t75, 0U, 8U, t72);
    t80 = (1360 * 1000LL);
    t81 = (t0 + 12883);
    t83 = (t0 + 7784);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 8U);
    xsi_driver_subsequent_trans_delta(t83, 0U, 8U, t80);
    t88 = (1680 * 1000LL);
    t89 = (t0 + 12891);
    t91 = (t0 + 7784);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    memcpy(t95, t89, 8U);
    xsi_driver_subsequent_trans_delta(t91, 0U, 8U, t88);
    t96 = (1760 * 1000LL);
    t97 = (t0 + 12899);
    t99 = (t0 + 7784);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    memcpy(t103, t97, 8U);
    xsi_driver_subsequent_trans_delta(t99, 0U, 8U, t96);
    t104 = (1840 * 1000LL);
    t105 = (t0 + 12907);
    t107 = (t0 + 7784);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memcpy(t111, t105, 8U);
    xsi_driver_subsequent_trans_delta(t107, 0U, 8U, t104);
    t112 = (1920 * 1000LL);
    t113 = (t0 + 12915);
    t115 = (t0 + 7784);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    memcpy(t119, t113, 8U);
    xsi_driver_subsequent_trans_delta(t115, 0U, 8U, t112);
    t120 = (2000 * 1000LL);
    t121 = (t0 + 12923);
    t123 = (t0 + 7784);
    t124 = (t123 + 56U);
    t125 = *((char **)t124);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    memcpy(t127, t121, 8U);
    xsi_driver_subsequent_trans_delta(t123, 0U, 8U, t120);
    t128 = (2080 * 1000LL);
    t129 = (t0 + 12931);
    t131 = (t0 + 7784);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    t134 = (t133 + 56U);
    t135 = *((char **)t134);
    memcpy(t135, t129, 8U);
    xsi_driver_subsequent_trans_delta(t131, 0U, 8U, t128);
    t136 = (2640 * 1000LL);
    t137 = (t0 + 12939);
    t139 = (t0 + 7784);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    memcpy(t143, t137, 8U);
    xsi_driver_subsequent_trans_delta(t139, 0U, 8U, t136);
    t144 = (2720 * 1000LL);
    t145 = (t0 + 12947);
    t147 = (t0 + 7784);
    t148 = (t147 + 56U);
    t149 = *((char **)t148);
    t150 = (t149 + 56U);
    t151 = *((char **)t150);
    memcpy(t151, t145, 8U);
    xsi_driver_subsequent_trans_delta(t147, 0U, 8U, t144);
    t152 = (2800 * 1000LL);
    t153 = (t0 + 12955);
    t155 = (t0 + 7784);
    t156 = (t155 + 56U);
    t157 = *((char **)t156);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memcpy(t159, t153, 8U);
    xsi_driver_subsequent_trans_delta(t155, 0U, 8U, t152);
    t160 = (2880 * 1000LL);
    t161 = (t0 + 12963);
    t163 = (t0 + 7784);
    t164 = (t163 + 56U);
    t165 = *((char **)t164);
    t166 = (t165 + 56U);
    t167 = *((char **)t166);
    memcpy(t167, t161, 8U);
    xsi_driver_subsequent_trans_delta(t163, 0U, 8U, t160);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3362471586_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(287, ng0);

LAB3:    t1 = (t0 + 7848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (800 * 1000LL);
    t7 = (t0 + 7848);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3362471586_2372691052_p_5(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int64 t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int64 t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int64 t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int64 t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int64 t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int64 t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int64 t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    int64 t80;
    char *t81;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    int64 t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    int64 t96;
    char *t97;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    int64 t104;
    char *t105;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    int64 t112;
    char *t113;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    int64 t120;
    char *t121;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    int64 t128;
    char *t129;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;

LAB0:    xsi_set_current_line(288, ng0);

LAB3:    t1 = (t0 + 12971);
    t3 = (t0 + 7912);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);
    t8 = (800 * 1000LL);
    t9 = (t0 + 12979);
    t11 = (t0 + 7912);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 8U);
    xsi_driver_subsequent_trans_delta(t11, 0U, 8U, t8);
    t16 = (880 * 1000LL);
    t17 = (t0 + 12987);
    t19 = (t0 + 7912);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 8U);
    xsi_driver_subsequent_trans_delta(t19, 0U, 8U, t16);
    t24 = (960 * 1000LL);
    t25 = (t0 + 12995);
    t27 = (t0 + 7912);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t25, 8U);
    xsi_driver_subsequent_trans_delta(t27, 0U, 8U, t24);
    t32 = (1040 * 1000LL);
    t33 = (t0 + 13003);
    t35 = (t0 + 7912);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t33, 8U);
    xsi_driver_subsequent_trans_delta(t35, 0U, 8U, t32);
    t40 = (1120 * 1000LL);
    t41 = (t0 + 13011);
    t43 = (t0 + 7912);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t41, 8U);
    xsi_driver_subsequent_trans_delta(t43, 0U, 8U, t40);
    t48 = (1200 * 1000LL);
    t49 = (t0 + 13019);
    t51 = (t0 + 7912);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memcpy(t55, t49, 8U);
    xsi_driver_subsequent_trans_delta(t51, 0U, 8U, t48);
    t56 = (1280 * 1000LL);
    t57 = (t0 + 13027);
    t59 = (t0 + 7912);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memcpy(t63, t57, 8U);
    xsi_driver_subsequent_trans_delta(t59, 0U, 8U, t56);
    t64 = (1360 * 1000LL);
    t65 = (t0 + 13035);
    t67 = (t0 + 7912);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memcpy(t71, t65, 8U);
    xsi_driver_subsequent_trans_delta(t67, 0U, 8U, t64);
    t72 = (1840 * 1000LL);
    t73 = (t0 + 13043);
    t75 = (t0 + 7912);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memcpy(t79, t73, 8U);
    xsi_driver_subsequent_trans_delta(t75, 0U, 8U, t72);
    t80 = (1920 * 1000LL);
    t81 = (t0 + 13051);
    t83 = (t0 + 7912);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memcpy(t87, t81, 8U);
    xsi_driver_subsequent_trans_delta(t83, 0U, 8U, t80);
    t88 = (2000 * 1000LL);
    t89 = (t0 + 13059);
    t91 = (t0 + 7912);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    memcpy(t95, t89, 8U);
    xsi_driver_subsequent_trans_delta(t91, 0U, 8U, t88);
    t96 = (2080 * 1000LL);
    t97 = (t0 + 13067);
    t99 = (t0 + 7912);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    memcpy(t103, t97, 8U);
    xsi_driver_subsequent_trans_delta(t99, 0U, 8U, t96);
    t104 = (2160 * 1000LL);
    t105 = (t0 + 13075);
    t107 = (t0 + 7912);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memcpy(t111, t105, 8U);
    xsi_driver_subsequent_trans_delta(t107, 0U, 8U, t104);
    t112 = (2240 * 1000LL);
    t113 = (t0 + 13083);
    t115 = (t0 + 7912);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    memcpy(t119, t113, 8U);
    xsi_driver_subsequent_trans_delta(t115, 0U, 8U, t112);
    t120 = (2320 * 1000LL);
    t121 = (t0 + 13091);
    t123 = (t0 + 7912);
    t124 = (t123 + 56U);
    t125 = *((char **)t124);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    memcpy(t127, t121, 8U);
    xsi_driver_subsequent_trans_delta(t123, 0U, 8U, t120);
    t128 = (2400 * 1000LL);
    t129 = (t0 + 13099);
    t131 = (t0 + 7912);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    t134 = (t133 + 56U);
    t135 = *((char **)t134);
    memcpy(t135, t129, 8U);
    xsi_driver_subsequent_trans_delta(t131, 0U, 8U, t128);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3362471586_2372691052_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(307, ng0);

LAB3:    t1 = (t0 + 7976);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3362471586_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3362471586_2372691052_p_0,(void *)work_a_3362471586_2372691052_p_1,(void *)work_a_3362471586_2372691052_p_2,(void *)work_a_3362471586_2372691052_p_3,(void *)work_a_3362471586_2372691052_p_4,(void *)work_a_3362471586_2372691052_p_5,(void *)work_a_3362471586_2372691052_p_6};
	xsi_register_didat("work_a_3362471586_2372691052", "isim/Test_Reception_isim_beh.exe.sim/work/a_3362471586_2372691052.didat");
	xsi_register_executes(pe);
}
