/*
 * @file	baremetal/irq.c
 * @brief	baremetal libmetal irq definitions.
 */

#include <metal/alloc.h>
#include <metal/errno.h>
#include <metal/irq.h>
#include <metal/list.h>
#include <metal/log.h>
#include <metal/mutex.h>
#include <metal/sys.h>
#include <metal/utilities.h>

unsigned int metal_irq_save_disable(void) { return sys_irq_save_disable(); }

void metal_irq_restore_enable(unsigned int flags) {
  sys_irq_restore_enable(flags);
}
