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
static const char *ng0 = "/home/pablo/timer/timer.vhd";



static void work_a_0141943142_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    double t9;
    double t10;
    char *t11;
    double t12;
    double t13;
    int t14;
    double t15;
    double t16;
    double t17;
    char *t18;

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1312U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    t2 = (t0 + 3592);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1808U);
    t8 = *((char **)t4);
    t9 = *((double *)t8);
    t10 = (t9 + 1.0000000000000000);
    t4 = (t0 + 1808U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((double *)t4) = t10;
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t9 = *((double *)t4);
    t1 = (t9 == 50.000000000000000);
    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1928U);
    t5 = *((char **)t2);
    t10 = *((double *)t5);
    t2 = (t0 + 1808U);
    t8 = *((char **)t2);
    t12 = *((double *)t8);
    t13 = (t12 * 0.020000000000000000);
    t14 = (-(9));
    t15 = xsi_vhdl_pow_double(10.000000000000000, t14);
    t16 = (t13 * t15);
    t17 = (t10 / t16);
    t2 = (t0 + 2048U);
    t11 = *((char **)t2);
    t2 = (t11 + 0);
    *((double *)t2) = t17;
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2048U);
    t4 = *((char **)t2);
    t9 = *((double *)t4);
    t2 = (t0 + 3688);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t18 = *((char **)t11);
    *((double *)t18) = t9;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1928U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((double *)t2) = 0.0000000000000000;
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((double *)t2) = 0.0000000000000000;
    goto LAB9;

LAB11:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1928U);
    t8 = *((char **)t4);
    t9 = *((double *)t8);
    t10 = (t9 + 1.0000000000000000);
    t4 = (t0 + 1928U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((double *)t4) = t10;
    goto LAB12;

LAB14:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB16;

}

static void work_a_0141943142_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    double t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(77, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((double *)t2);
    t1 = (t0 + 3752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((double *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3608);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0141943142_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0141943142_3212880686_p_0,(void *)work_a_0141943142_3212880686_p_1};
	xsi_register_didat("work_a_0141943142_3212880686", "isim/timer_tb_isim_beh.exe.sim/work/a_0141943142_3212880686.didat");
	xsi_register_executes(pe);
}
