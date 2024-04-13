#include <vector>

#include <Arduino.h>
#include "defines.h"

using namespace std;

// This makes inverting the signal easy
#define HUNTER_ONE HIGH
#define HUNTER_ZERO  LOW

#define START_INTERVAL  900
#define SHORT_INTERVAL  208
#define LONG_INTERVAL 1875

#define HUNTER_PIN  16 // XXX D0

void HunterStop(uint8_t zone);
void HunterStart(uint8_t zone, uint8_t time);
void HunterProgram(uint8_t num);
void HunterBitfield(vector <uint8_t>& bits, uint8_t pos, uint8_t val, uint8_t len);
void HunterWrite(vector<uint8_t> buffer, bool extrabit);
void HunterLow(void);
void HunterHigh(void);
