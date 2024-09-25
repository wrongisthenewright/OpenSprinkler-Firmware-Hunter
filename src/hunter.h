/////////////////////////////////////////////////////////////////////////////
// Hunter Irrigation Bus Class
//
// This work is released under the Creative Commons Zero (CC0) license.
// See http://creativecommons.org/publicdomain/zero/1.0/
// 
// Modified from Esquilo library for ESP8266/Arduino for bit-banging
/////////////////////////////////////////////////////////////////////////////

#ifndef HUNTER_H
#define HUNTER_H

#include <Arduino.h>

// library interface description
class HunterInterface
{
    public:
    HunterInterface(uint8_t pin);
    void start(uint8_t zone, uint8_t time);
    void stopAll() {start(1,0);}
    void program(uint8_t num);

    private:
    void write(uint8_t * buffer, int len);
    static void setBitfield(uint8_t * bits, uint8_t pos, uint8_t val, uint8_t len);
    HardwareSerial * hunter_uart;
    volatile uint32_t * hunter_uart_cfg;
};

#endif
