/*
 * @file	baremetal/sys.h
 * @brief	Generic system primitives for libmetal.
 */

#ifndef __METAL_SYS__H__
#error "Include metal/sys.h instead of metal/baremetal/sys.h"
#endif

#ifndef __METAL_BAREMETAL_SYS__H__
#define __METAL_BAREMETAL_SYS__H__

#include <limits.h>
#include <metal/cpu.h>
#include <metal/errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef XLNX_PLATFORM
#include <metal/system/baremetal/xlnx/sys.h>
#else
#include "./@PROJECT_MACHINE@/sys.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef METAL_MAX_DEVICE_REGIONS
#define METAL_MAX_DEVICE_REGIONS 1
#endif

/** Structure of baremetal libmetal runtime state. */
struct metal_state {
  /** Common (system independent) data. */
  struct metal_common_state common;
};

#define metal_yield() metal_cpu_yield()

#ifdef METAL_INTERNAL

/**
 * @brief restore interrupts to state before disable_global_interrupt()
 */
void sys_irq_restore_enable(unsigned int flags);

/**
 * @brief disable all interrupts
 */
unsigned int sys_irq_save_disable(void);

#endif /* METAL_INTERNAL */

#ifdef __cplusplus
}
#endif

#endif /* __METAL_BAREMETAL_SYS__H__ */
