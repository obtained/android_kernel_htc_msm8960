/*
 * Copyright (c) 2008-2011, Code Aurora Forum. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_MSM_IOMAP_COPPER_H
#define __ASM_ARCH_MSM_IOMAP_COPPER_H

/* Physical base address and size of peripherals.
 * Ordered by the virtual base addresses they will be mapped at.
 *
 * If you add or remove entries here, you'll want to edit the
 * io desc array in arch/arm/mach-msm/io.c to reflect your
 * changes.
 *
 */

#define COPPER_QGIC_DIST_PHYS	0xF9000000
#define COPPER_QGIC_DIST_SIZE	SZ_4K

#define COPPER_QGIC_CPU_PHYS	0xF9002000
#define COPPER_QGIC_CPU_SIZE	SZ_4K

#define COPPER_TLMM_PHYS	0xFC4A0000
#define COPPER_TLMM_SIZE	SZ_16K

#ifdef CONFIG_DEBUG_MSMCOPPER_UART
#define MSM_DEBUG_UART_BASE	IOMEM(0xFA782000)
#define MSM_DEBUG_UART_PHYS	0xF9682000
#endif

#endif
