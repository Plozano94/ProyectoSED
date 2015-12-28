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
static const char *ng0 = "/home/pablo/timer/div.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


static void work_a_0968160934_3212880686_p_0(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t11;
    int t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 3264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 3344);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 7072U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 4856U);
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t5, t1);
    t12 = (t11 / 1000);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, t12, 7072);
    t7 = (t0 + 3344);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 7072U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB3;

LAB7:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 4856U);
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t5, t1);
    t12 = (t11 / 1000000);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, t12, 7072);
    t7 = (t0 + 3344);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 7072U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB3;

}


extern void work_a_0968160934_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0968160934_3212880686_p_0};
	xsi_register_didat("work_a_0968160934_3212880686", "isim/div_tb_isim_beh.exe.sim/work/a_0968160934_3212880686.didat");
	xsi_register_executes(pe);
}
