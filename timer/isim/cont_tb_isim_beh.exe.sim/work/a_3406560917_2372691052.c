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
static const char *ng0 = "/home/pablo/timer/cont_tb.vhd";



static void work_a_3406560917_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3406560917_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    int64 t11;

LAB0:    t1 = (t0 + 3032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 12408);
    *((int *)t2) = 0;
    t4 = (t0 + 12412);
    *((int *)t4) = 3;
    t8 = 0;
    t9 = 3;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t3);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(91, ng0);
    t3 = (10 * 1000LL);
    t5 = (t0 + 2840);
    xsi_process_wait(t5, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 12408);
    t8 = *((int *)t2);
    t4 = (t0 + 12412);
    t9 = *((int *)t4);
    if (t8 == t9)
        goto LAB11;

LAB20:    t10 = (t8 + 1);
    t8 = t10;
    t5 = (t0 + 12408);
    *((int *)t5) = t8;
    goto LAB8;

LAB12:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t3);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB25:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 12416);
    *((int *)t2) = 0;
    t4 = (t0 + 12420);
    *((int *)t4) = 20;
    t8 = 0;
    t9 = 20;

LAB29:    if (t8 <= t9)
        goto LAB30;

LAB32:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t11 = (t3 * 10);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t11);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB30:    xsi_set_current_line(101, ng0);
    t3 = (10 * 1000LL);
    t5 = (t0 + 2840);
    xsi_process_wait(t5, t3);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB31:    t2 = (t0 + 12416);
    t8 = *((int *)t2);
    t4 = (t0 + 12420);
    t9 = *((int *)t4);
    if (t8 == t9)
        goto LAB32;

LAB41:    t10 = (t8 + 1);
    t8 = t10;
    t5 = (t0 + 12416);
    *((int *)t5) = t8;
    goto LAB29;

LAB33:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t3);

LAB39:    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB31;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

LAB42:    xsi_set_current_line(112, ng0);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    goto LAB2;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

}


extern void work_a_3406560917_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3406560917_2372691052_p_0,(void *)work_a_3406560917_2372691052_p_1};
	xsi_register_didat("work_a_3406560917_2372691052", "isim/cont_tb_isim_beh.exe.sim/work/a_3406560917_2372691052.didat");
	xsi_register_executes(pe);
}
