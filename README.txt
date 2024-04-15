Clone repo of (old) version OpenSprinkler adapted for interfacing Hunter(R) watering systems. 
The mods in this fork are my reactions to error in bulding the firmware from Seb821 work.
I'm a dumb developer so error compiling this code are all my own contribution :)

I've addedd platform.io config file for wemos D1 mini.

Just a memo for myself, to build and flash the wemos do:

sudo chmod 666 /dev/ttyUSB0
esptool.py --port /dev/ttyUSB0 erase_flash
pio run -v  -t upload 


============================================
==== OpenSprinkler AVR/RPI/BBB Firmware ====
============================================

This is a unified OpenSprinkler firmware for Arduino, and Linux-based OpenSprinklers such as OpenSprinkler Pi.

For OS (Arduino-based OpenSprinkler) 2.x:
https://openthings.freshdesk.com/support/solutions/articles/5000165132-how-to-compile-opensprinkler-firmware

For OSPi/OSBO or other Linux-based OpenSprinkler:
https://openthings.freshdesk.com/support/solutions/articles/5000631599-installing-and-updating-the-unified-firmware

============================================
Questions and comments:
http://www.opensprinkler.com
============================================
