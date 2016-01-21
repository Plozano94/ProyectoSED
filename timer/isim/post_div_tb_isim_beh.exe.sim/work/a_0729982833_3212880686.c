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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Pablo Lozano/Desktop/SED/timer/post_div.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_0729982833_3212880686_p_0(char *t0)
{
    char t15[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    int t14;
    char *t16;

LAB0:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3672);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t4 = (t0 + 5944U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t4);
    t10 = (t0 + 2248U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t9;
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t12 = (1024 / 1000);
    t13 = (t9 * t12);
    t14 = (t13 / 1024);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t14;
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, t9, 4);
    t5 = (t0 + 3752);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t16 = *((char **)t11);
    memcpy(t16, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t13 = (1000 * t12);
    t14 = (t9 - t13);
    t2 = (t0 + 2248U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t14;
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t12 = (1024 / 100);
    t13 = (t9 * t12);
    t14 = (t13 / 1024);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t14;
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, t9, 4);
    t5 = (t0 + 3816);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t16 = *((char **)t11);
    memcpy(t16, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t13 = (100 * t12);
    t14 = (t9 - t13);
    t2 = (t0 + 2248U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t14;
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t12 = (1024 / 10);
    t13 = (t9 * t12);
    t14 = (t13 / 1024);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t14;
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, t9, 4);
    t5 = (t0 + 3880);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t16 = *((char **)t11);
    memcpy(t16, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t13 = (10 * t12);
    t14 = (t9 - t13);
    t2 = (t0 + 2248U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t14;
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t12 = (1024 / 1);
    t13 = (t9 * t12);
    t14 = (t13 / 1024);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t14;
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, t9, 4);
    t5 = (t0 + 3944);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t16 = *((char **)t11);
    memcpy(t16, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}


extern void work_a_0729982833_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0729982833_3212880686_p_0};
	xsi_register_didat("work_a_0729982833_3212880686", "isim/post_div_tb_isim_beh.exe.sim/work/a_0729982833_3212880686.didat");
	xsi_register_executes(pe);
}
