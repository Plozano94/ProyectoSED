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
static const char *ng0 = "/home/pablo/timer/timer_tb.vhd";



static void work_a_1313920076_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2432);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2432);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1313920076_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;

LAB0:    t1 = (t0 + 2872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5048);
    *((int *)t2) = 1;
    t3 = (t0 + 5052);
    *((int *)t3) = 5000;
    t4 = 1;
    t5 = 5000;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(93, ng0);
    if ((unsigned char)0 == 0)
        goto LAB17;

LAB18:    goto LAB2;

LAB5:    xsi_set_current_line(85, ng0);
    t6 = (0.040000000000000001 * 1000LL);
    t7 = (t0 + 2680);
    xsi_process_wait(t7, t6);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:    t2 = (t0 + 5048);
    t4 = *((int *)t2);
    t3 = (t0 + 5052);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB16:    t10 = (t4 + 1);
    t4 = t10;
    t7 = (t0 + 5048);
    *((int *)t7) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t6 = (0.040000000000000001 * 1000LL);
    t2 = (t0 + 2680);
    xsi_process_wait(t2, t6);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB6;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    t2 = (t0 + 5056);
    xsi_report(t2, 20U, (unsigned char)3);
    goto LAB18;

}


extern void work_a_1313920076_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1313920076_2372691052_p_0,(void *)work_a_1313920076_2372691052_p_1};
	xsi_register_didat("work_a_1313920076_2372691052", "isim/timer_tb_isim_beh.exe.sim/work/a_1313920076_2372691052.didat");
	xsi_register_executes(pe);
}
