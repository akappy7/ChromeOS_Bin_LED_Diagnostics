/* Copyright 2015 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "common.h"
#include "registers.h"
#include "task.h"
#include "kmsc_chip.h"
#include "intc.h"

void intc_cpu_int_group_5(void)
{
	/* Determine interrupt number. */
	int intc_group_5 = IT83XX_INTC_IVCT5 - 16;

	switch (intc_group_5) {
#ifdef CONFIG_LPC
	case IT83XX_IRQ_KBC_OUT:
		lpc_kbc_obe_interrupt();
		break;

	case IT83XX_IRQ_KBC_IN:
		lpc_kbc_ibf_interrupt();
		break;
#endif
#if defined(HAS_TASK_KEYSCAN) && !defined(CONFIG_IT83XX_KEYBOARD_KSI_WUC_INT)
	case IT83XX_IRQ_KB_MATRIX:
		keyboard_raw_interrupt();
		break;
#endif
	default:
		break;
	}
}
DECLARE_IRQ(CPU_INT_GROUP_5, intc_cpu_int_group_5, 2);

void intc_cpu_int_group_4(void)
{
	/* Determine interrupt number. */
	int intc_group_4 = IT83XX_INTC_IVCT4 - 16;

	switch (intc_group_4) {
#ifdef CONFIG_LPC
	case IT83XX_IRQ_PMC_IN:
		pm1_ibf_interrupt();
		break;

	case IT83XX_IRQ_PMC2_IN:
		pm2_ibf_interrupt();
		break;

	case IT83XX_IRQ_PMC3_IN:
		pm3_ibf_interrupt();
		break;

	case IT83XX_IRQ_PMC4_IN:
		pm4_ibf_interrupt();
		break;

	case IT83XX_IRQ_PMC5_IN:
		pm5_ibf_interrupt();
		break;
#endif
	default:
		break;
	}
}
DECLARE_IRQ(CPU_INT_GROUP_4, intc_cpu_int_group_4, 2);

void intc_cpu_int_group_12(void)
{
	/* Determine interrupt number. */
	int intc_group_12 = IT83XX_INTC_IVCT12 - 16;

	switch (intc_group_12) {
#ifdef CONFIG_PECI
	case IT83XX_IRQ_PECI:
		peci_interrupt();
		break;
#endif
	default:
		break;
	}
}
DECLARE_IRQ(CPU_INT_GROUP_12, intc_cpu_int_group_12, 2);

void intc_cpu_int_group_6(void)
{
	/* Determine interrupt number. */
	int intc_group_6 = IT83XX_INTC_IVCT6 - 16;

	switch (intc_group_6) {

	case IT83XX_IRQ_SMB_A:
		i2c_interrupt(0);
		break;

	case IT83XX_IRQ_SMB_B:
		i2c_interrupt(1);
		break;

	case IT83XX_IRQ_SMB_C:
		i2c_interrupt(2);
		break;

	default:
		break;
	}
}
DECLARE_IRQ(CPU_INT_GROUP_6, intc_cpu_int_group_6, 2);
