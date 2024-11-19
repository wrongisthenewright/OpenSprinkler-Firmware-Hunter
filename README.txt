Clone repo of 2.1.9(3) version of OpenSprinkler already adapted by @seb821 for interfacing Hunter(R) watering systems. 
The mods in this fork are my reactions to error in bulding the firmware from Seb821 work.
I'm a dumb developer so error compiling this code are all my own contribution :)

I've addedd platform.io config file for wemos D1 mini.
The hunter.h contains the reference to the GPIO port used, in this repo I'm using GPIO 16 (D0) 
just so that the physical wiring is the same of ecodina hunter-wifi esp8266 code that do similar
things (it supports REST API, that I'm using atm)


https://github.com/ecodina/hunter-wifi

It works correctly with an Hunter X-Core 6 station controller, it should work with any Hunter controller with REM port.


Just a memo for myself, to build and flash the wemos do (updated after new Ubuntu 24.04 upgrade of my laptop: 


alias get_pio='source ~/.platformio/penv/bin/activate'
git clone xxxx
cd xxxx
sudo chmod 666 /dev/ttyUSB0
esptool.py --port /dev/ttyUSB0 erase_flash
get_pio
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
