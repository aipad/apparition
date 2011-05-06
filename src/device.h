/*
 * device.h
 *
 *  Created on: May 5, 2011
 *      Author: posixninja
 */

#ifndef DEVICE_H_
#define DEVICE_H_

#include <libimobiledevice/libimobiledevice.h>

typedef struct device_t {
	idevice_t* client;
	unsigned char* uuid;
	unsigned char* ecid;
} device_t;

device_t* device_open(char* uuid);
void device_free(device_t* device);

#endif /* DEVICE_H_ */
