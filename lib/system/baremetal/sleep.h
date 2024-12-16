/*
 * @file	baremetal/sleep.h
 * @brief	Generic sleep primitives for libmetal.
 */

#ifndef __METAL_SLEEP__H__
#error "Include metal/sleep.h instead of metal/baremetal/sleep.h"
#endif

#ifndef __METAL_BAREMETAL_SLEEP__H__
#define __METAL_BAREMETAL_SLEEP__H__

#include <metal/utilities.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline int __metal_sleep_usec(unsigned int usec) {
  metal_unused(usec);
  /* Fix me */
  return 0;
}

#ifdef __cplusplus
}
#endif

#endif /* __METAL_BAREMETAL_SLEEP__H__ */
