/*
 * @file	baremetal/alloc.c
 * @brief	baremetal libmetal memory allocattion definitions.
 */

#ifndef __METAL_ALLOC__H__
#error "Include metal/alloc.h instead of metal/baremetal/alloc.h"
#endif

#ifndef __METAL_BAREMETAL_ALLOC__H__
#define __METAL_BAREMETAL_ALLOC__H__

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline void *__metal_allocate_memory(unsigned int size) {
  return malloc(size);
}

static inline void __metal_free_memory(void *ptr) { free(ptr); }

#ifdef __cplusplus
}
#endif

#endif /* __METAL_BAREMETAL_ALLOC__H__ */
