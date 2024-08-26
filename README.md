# Espruino Pico XpressNet USB Adapter [WIP]

Building XpressNet USB Adapter based on Espruino Pico V1.3.

Features:
* STM32F401CDU6 32-bit 84MHz ARM Cortex M4 CPU
* All GPIO is 5 volt tolerant -> MAX485 chip
* USART is Multiprocessor communication Compatible (9n1)

Vendor info: https://www.espruino.com/Pico

## Requirements

Install build toolchain

```bash
sudo apt install libnewlib-arm-none-eabi gcc-arm-none-eabi stlink-tools dfu-util
```

## Flashing

The device is Equiped with DFU Bootloader.

Short out the BOOT0/BTN solder jumper on the back of the board - you can do this by drawing over it with a pencil.

Hold down the Pico's button while plugging it into USB.

Use the DFU tool to flash the firmware.

```bash
$ dfu-util -l
dfu-util 0.9

Copyright 2005-2009 Weston Schmidt, Harald Welte and OpenMoko Inc.
Copyright 2010-2016 Tormod Volden and Stefan Schmidt
This program is Free Software and has ABSOLUTELY NO WARRANTY
Please report bugs to http://sourceforge.net/p/dfu-util/tickets/

Found DFU: [0483:df11] ver=2200, devnum=4, cfg=1, intf=0, path="1-1.5", alt=3, name="@Device Feature/0xFFFF0000/01*004 e", serial="************"
Found DFU: [0483:df11] ver=2200, devnum=4, cfg=1, intf=0, path="1-1.5", alt=2, name="@OTP Memory /0x1FFF7800/01*512 e,01*016 e", serial="************"
Found DFU: [0483:df11] ver=2200, devnum=4, cfg=1, intf=0, path="1-1.5", alt=1, name="@Option Bytes  /0x1FFFC000/01*016 e", serial="************"
Found DFU: [0483:df11] ver=2200, devnum=4, cfg=1, intf=0, path="1-1.5", alt=0, name="@Internal Flash  /0x08000000/04*016Kg,01*064Kg,03*128Kg", serial="************"
```
