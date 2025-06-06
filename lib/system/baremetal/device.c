/*
 * @file	baremetal/device.c
 * @brief	Generic libmetal device operations.
 */

#include <metal/device.h>
#include <metal/io.h>
#include <metal/sys.h>
#include <metal/utilities.h>

int metal_generic_dev_sys_open(struct metal_device *dev) {
  struct metal_io_region *io;
  unsigned int i;

  /* map I/O memory regions */
  for (i = 0; i < dev->num_regions; i++) {
    io = &dev->regions[i];
    if (!io->size) break;
    metal_sys_io_mem_map(io);
  }

  return 0;
}
