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
static const char *ng0 = "/home/pablo/timer/post_div.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


static void work_a_4132206947_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5432U);
    t3 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 2088U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t3;
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 / 1000);
    t1 = (t0 + 2208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, t3, 4);
    t4 = (t0 + 3584);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 2208U);
    t4 = *((char **)t1);
    t6 = *((int *)t4);
    t11 = (1000 * t6);
    t12 = (t3 - t11);
    t1 = (t0 + 2088U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t12;
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 / 100);
    t1 = (t0 + 2208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, t3, 4);
    t4 = (t0 + 3648);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 2208U);
    t4 = *((char **)t1);
    t6 = *((int *)t4);
    t11 = (100 * t6);
    t12 = (t3 - t11);
    t1 = (t0 + 2088U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t12;
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 / 10);
    t1 = (t0 + 2208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, t3, 4);
    t4 = (t0 + 3712);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 2208U);
    t4 = *((char **)t1);
    t6 = *((int *)t4);
    t11 = (10 * t6);
    t12 = (t3 - t11);
    t1 = (t0 + 2088U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t12;
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, t3, 4);
    t4 = (t0 + 3776);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    t1 = (t0 + 3504);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_4132206947_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4132206947_3212880686_p_0};
	xsi_register_didat("work_a_4132206947_3212880686", "isim/post_div_tb_isim_beh.exe.sim/work/a_4132206947_3212880686.didat");
	xsi_register_executes(pe);
}
