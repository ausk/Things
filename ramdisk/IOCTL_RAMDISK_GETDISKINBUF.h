#ifndef __IOCTL_RAMDISK_GETDISKINBUF_H__
#define __IOCTL_RAMDISK_GETDISKINBUF_H__

#include <IOCTL_RAMDISK.h>

// Get the input buffer used to create the specific disk device
// Will be returned as the output buffer
const DWORD IOCTL_RAMDISK_GETDISKINBUF = 0x240008;

struct IOCTL_RAMDISK_GETDISKINBUF_DATA {
	// sizeof / magic
	// Must be 20
	uint32_t magic;
	
	// Device ID
	RAMDISK_ID id;
	
} __attribute__((packed));

#endif // __IOCTL_RAMDISK_GETDISKINBUF_H__