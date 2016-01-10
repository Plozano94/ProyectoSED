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
static const char *ng0 = "/home/pablo/timer/mux.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_0290344353_3212880686_p_0(char *t0)
{
    char t11[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 5631);
    t14 = xsi_mem_cmp(t2, t4, 2U);
    if (t14 == 1)
        goto LAB14;

LAB19:    t8 = (t0 + 5633);
    t24 = xsi_mem_cmp(t8, t4, 2U);
    if (t24 == 1)
        goto LAB15;

LAB20:    t10 = (t0 + 5635);
    t25 = xsi_mem_cmp(t10, t4, 2U);
    if (t25 == 1)
        goto LAB16;

LAB21:    t13 = (t0 + 5637);
    t26 = xsi_mem_cmp(t13, t4, 2U);
    if (t26 == 1)
        goto LAB17;

LAB22:
LAB18:    xsi_set_current_line(75, ng0);
    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t4 = t2;
    memset(t4, (unsigned char)2, 4U);
    t5 = (t0 + 3768);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5655);
    t5 = (t0 + 3832);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB13:    t2 = (t0 + 3624);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t4 = (t0 + 5584U);
    t9 = (t0 + 5627);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t4, t9, t11);
    if (t16 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 5584U);
    t5 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t11, t4, t2, 1);
    t8 = (t11 + 12U);
    t15 = *((unsigned int *)t8);
    t23 = (1U * t15);
    t1 = (2U != t23);
    if (t1 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 3704);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t5, 2U);
    xsi_driver_first_trans_fast(t9);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(56, ng0);
    t13 = (t0 + 5629);
    t18 = (t0 + 3704);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 2U);
    xsi_driver_first_trans_fast(t18);
    goto LAB9;

LAB11:    xsi_size_not_matching(2U, t23, 0);
    goto LAB12;

LAB14:    xsi_set_current_line(63, ng0);
    t18 = (t0 + 5639);
    t20 = (t0 + 3768);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t27 = (t22 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_fast_port(t20);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 3832);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB13;

LAB15:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5643);
    t5 = (t0 + 3768);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 3832);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB13;

LAB16:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5647);
    t5 = (t0 + 3768);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 3832);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB13;

LAB17:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5651);
    t5 = (t0 + 3768);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 3832);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB13;

LAB23:;
}


extern void work_a_0290344353_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0290344353_3212880686_p_0};
	xsi_register_didat("work_a_0290344353_3212880686", "isim/top_tb_isim_beh.exe.sim/work/a_0290344353_3212880686.didat");
	xsi_register_executes(pe);
}
