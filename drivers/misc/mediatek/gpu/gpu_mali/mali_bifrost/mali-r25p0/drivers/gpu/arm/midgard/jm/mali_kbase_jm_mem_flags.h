/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 *
 * (C) COPYRIGHT 2024 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 */

#ifndef _KBASE_JM_MEM_FLAGS_H_
#define _KBASE_JM_MEM_FLAGS_H_

#include <uapi/gpu/arm/midgard/jm/mali_kbase_jm_mem_flags.h>

/* Kernel-side only flags allocated from 63 bit downwards */

/* Use the GPU VA chosen by the kernel client */
#define BASEP_MEM_FLAG_MAP_FIXED ((base_mem_alloc_flags)1 << 61)

/* Force trimming of JIT allocations when creating a new allocation */
#define BASEP_MEM_PERFORM_JIT_TRIM ((base_mem_alloc_flags)1 << 60)

/* The first available bit which can be used to define new memory flag
 * if needed. It should be decremented by one once new flag is added
 * and BASEP_MEM_FLAGS_NR_BITS should be incremented accordingly
 */
#define BASEP_MEM_FIRST_FREE_FLAG ((base_mem_alloc_flags)1 << 59)

#endif /* _KBASE_JM_MEM_FLAGS_H_ */
