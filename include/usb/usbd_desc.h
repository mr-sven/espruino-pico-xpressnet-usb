/**
 * @file usbd_desc.h
 * @author Sven Fabricius (sven.fabricius@livediesel.de)
 * @brief Header for usbd_conf.c file.
 * @version 0.1
 * @date 2024-01-26
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef __USBD_DESC__C__
#define __USBD_DESC__C__

#ifdef __cplusplus
 extern "C" {
#endif

#include "usbd_def.h"

#define DEVICE_ID1              (UID_BASE)
#define DEVICE_ID2              (UID_BASE + 0x4)
#define DEVICE_ID3              (UID_BASE + 0x8)

#define USB_SIZ_STRING_SERIAL   0x1A

/** Descriptor for the Usb device. */
extern USBD_DescriptorsTypeDef FS_Desc;

#ifdef __cplusplus
}
#endif

#endif /* __USBD_DESC__C__ */

