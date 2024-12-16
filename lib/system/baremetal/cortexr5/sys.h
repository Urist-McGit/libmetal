/*
 * @file	baremetal/cortexr5/sys.h
 * @brief	baremetal cortexr5 system primitives for libmetal.
 */

#ifndef __METAL_BAREMETAL_SYS__H__
#error "Include metal/sys.h instead of metal/baremetal/@PROJECT_MACHINE@/sys.h"
#endif

#ifndef __METAL_BAREMETAL_TEMPLATE_SYS__H__
#define __METAL_BAREMETAL_TEMPLATE_SYS__H__

#ifdef __cplusplus
extern "C" {
#endif

#ifdef METAL_INTERNAL

void sys_irq_enable(unsigned int vector);

void sys_irq_disable(unsigned int vector);

#endif /* METAL_INTERNAL */

#ifdef __cplusplus
}
#endif

#endif /* __METAL_BAREMETAL_SYS__H__ */
