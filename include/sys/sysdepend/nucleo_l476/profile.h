/*
 *----------------------------------------------------------------------
 *    micro T-Kernel 3.00.03.B0
 *
 *    Copyright (C) 2006-2021 by Ken Sakamura.
 *    This software is distributed under the T-License 2.2.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2021/01.
 *
 *----------------------------------------------------------------------
 */

/*
 *	profile.h
 *
 *	Service Profile (Nucleo-64 STM32L467 depended)
 */

#ifndef __SYS_DEPEND_PROFILE_H__
#define __SYS_DEPEND_PROFILE_H__

/*
 **** CPU-depeneded profile (STM32L4)
 */
#include <sys/sysdepend/cpu/stm32l4/profile.h>

/*
 **** Target-depeneded profile (Nucleo-64 STM32L467)
 */

/*
 * Power management
 */
#define TK_SUPPORT_LOWPOWER	FALSE		/* Support of power management */



#endif /* __SYS_DEPEND_PROFILE_H__ */