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
static const char *ng0 = "C:/Users/jcala/Desktop/celt funciona/CELT_DIGITAL/automata.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_4290568010_1553195575_p_0(char *t0)
{
    char t22[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14};

LAB0:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t2 = (t0 + 5112);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    t2 = (t0 + 4904);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (char *)((nl0) + t9);
    goto **((char **)t4);

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(57, ng0);
    t11 = (t0 + 1192U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    if (t14 == 1)
        goto LAB18;

LAB19:    t10 = (unsigned char)0;

LAB20:    if (t10 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);

LAB16:    goto LAB8;

LAB10:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t2 = (t0 + 8104U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t22, t4, t2, 1);
    t8 = (t0 + 2608U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    t12 = (t22 + 12U);
    t23 = *((unsigned int *)t12);
    t24 = (1U * t23);
    memcpy(t8, t5, t24);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t2 = (t0 + 8104U);
    t1 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t4, t2, 20);
    if (t1 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);

LAB22:    goto LAB8;

LAB11:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t2 = (t0 + 8104U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t22, t4, t2, 1);
    t8 = (t0 + 2608U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    t12 = (t22 + 12U);
    t23 = *((unsigned int *)t12);
    t24 = (1U * t23);
    memcpy(t8, t5, t24);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t2 = (t0 + 8104U);
    t1 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t4, t2, 39);
    if (t1 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB25:    goto LAB8;

LAB12:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB13:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB14:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB15:    xsi_set_current_line(58, ng0);
    t11 = (t0 + 5048);
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)1;
    xsi_driver_first_trans_fast(t11);
    goto LAB16;

LAB18:    t11 = (t0 + 1352U);
    t15 = *((char **)t11);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    t10 = t17;
    goto LAB20;

LAB21:    xsi_set_current_line(65, ng0);
    t5 = xsi_get_transient_memory(8U);
    memset(t5, 0, 8U);
    t8 = t5;
    memset(t8, (unsigned char)2, 8U);
    t11 = (t0 + 2608U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t5, 8U);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB22;

LAB24:    xsi_set_current_line(73, ng0);
    t5 = xsi_get_transient_memory(8U);
    memset(t5, 0, 8U);
    t8 = t5;
    memset(t8, (unsigned char)2, 8U);
    t11 = (t0 + 2608U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t5, 8U);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB30;

LAB31:    t1 = (unsigned char)0;

LAB32:    if (t1 != 0)
        goto LAB27;

LAB29:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB35;

LAB36:    t1 = (unsigned char)0;

LAB37:    if (t1 != 0)
        goto LAB33;

LAB34:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB40;

LAB41:    t1 = (unsigned char)0;

LAB42:    if (t1 != 0)
        goto LAB38;

LAB39:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB28:    goto LAB25;

LAB27:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5048);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB28;

LAB30:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;
    goto LAB32;

LAB33:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5048);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB28;

LAB35:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;
    goto LAB37;

LAB38:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5048);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);
    goto LAB28;

LAB40:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB42;

}

static void work_a_4290568010_1553195575_p_1(char *t0)
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
    char *t10;
    char *t11;
    static char *nl0[] = {&&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    t1 = (t0 + 3840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(97, ng0);

LAB14:    t2 = (t0 + 4920);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;

LAB1:    return;
LAB5:    xsi_set_current_line(99, ng0);
    t5 = (t0 + 8151);
    t7 = (t0 + 5176);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 3U);
    xsi_driver_first_trans_fast(t7);
    goto LAB4;

LAB6:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8154);
    t5 = (t0 + 5176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB7:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8157);
    t5 = (t0 + 5176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB8:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8160);
    t5 = (t0 + 5176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB9:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8163);
    t5 = (t0 + 5176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB10:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8166);
    t5 = (t0 + 5176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB11:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8169);
    t5 = (t0 + 5176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB12:    t3 = (t0 + 4920);
    *((int *)t3) = 0;
    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_4290568010_1553195575_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5240);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4936);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4290568010_1553195575_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(108, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (1 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5304);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4952);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4290568010_1553195575_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(109, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (0 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5368);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4968);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4290568010_1553195575_init()
{
	static char *pe[] = {(void *)work_a_4290568010_1553195575_p_0,(void *)work_a_4290568010_1553195575_p_1,(void *)work_a_4290568010_1553195575_p_2,(void *)work_a_4290568010_1553195575_p_3,(void *)work_a_4290568010_1553195575_p_4};
	xsi_register_didat("work_a_4290568010_1553195575", "isim/test_automata_isim_beh.exe.sim/work/a_4290568010_1553195575.didat");
	xsi_register_executes(pe);
}
