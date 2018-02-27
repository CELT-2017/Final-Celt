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
static const char *ng0 = "C:/Users/jcala/Desktop/celt funciona/CELT_DIGITAL/comparador.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0822590248_2477206513_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t4 = xsi_vhdl_greater(t1, t2, 6U, t3, 6U);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_vhdl_lessthan(t1, t2, 6U, t3, 6U);
    if (t10 == 1)
        goto LAB7;

LAB8:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t5 = (t0 + 1192U);
    t7 = *((char **)t5);
    t11 = 1;
    if (6U == 6U)
        goto LAB10;

LAB11:    t11 = 0;

LAB12:    t4 = t11;

LAB9:    if (t4 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 3072);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t9 = (t0 + 3072);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    t4 = (unsigned char)1;
    goto LAB9;

LAB10:    t12 = 0;

LAB13:    if (t12 < 6U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t6 + t12);
    t8 = (t7 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB11;

LAB15:    t12 = (t12 + 1);
    goto LAB13;

}


extern void work_a_0822590248_2477206513_init()
{
	static char *pe[] = {(void *)work_a_0822590248_2477206513_p_0};
	xsi_register_didat("work_a_0822590248_2477206513", "isim/test_comparador_isim_beh.exe.sim/work/a_0822590248_2477206513.didat");
	xsi_register_executes(pe);
}
