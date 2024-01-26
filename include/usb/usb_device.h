/**
 * @file usb_device.h
 * @author Sven Fabricius (sven.fabricius@livediesel.de)
 * @brief Header for usb_device.c file.
 * @version 0.1
 * @date 2024-01-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#ifndef __USB_DEVICE__H__
#define __USB_DEVICE__H__

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "usbd_def.h"

/** USB Device initialization function. */
void USB_DEVICE_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __USB_DEVICE__H__ */
