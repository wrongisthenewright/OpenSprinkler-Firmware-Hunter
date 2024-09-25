# OpenSprinkler-Firmware-Hunter
OpenSprinkler-based firmware for Hunter irrigation controllers

This is a ~~hacked-up~~ custom version of [OpenSprinkler](http://www.opensprinkler.com) firmware for my Hunter WiFi add-on adapter board based on ESP8266. The primary changes are as follows:

- Supports ESP8266 only.
- Migrated project to PlatformIO.
- Use GPIO2 to control the Hunter sprinkler controller via the REM interface.
- MCU GPIO assignments are rearranged as there are no port expanders.
- Button support is disabled. The web interface or app is the intended way to control the firmware.
- Only Sensor 1 is supported by default. Sensor logic polarity is inverted to match the Hunter controller.
- Only sequential stations are supported, since there is no way to turn off an individual station when multiple are running.
- RTC is optional. If the RTC is missing, the FW will fallback to NTP. If the time is not set, programs will not run.
- Maxiumum station runtime is limited by the controller. Hunter PRO-C allows up to 6hrs runtime.

The firmware has been tested with a Hunter PRO-C PC300 sprinkler controller. It may be compatible with other controllers which support Hunter SmartPort/ROAM remotes.
This project is provided AS-IS with no warranty whatsoever. It is not affiliated with OpenSprinkler.

### Further Reading
This project is made possible by the reverse-engineering efforts of Scott Shumate, [documented here](https://www.hackster.io/sshumate/hunter-sprinkler-wifi-remote-control-4ea918).
