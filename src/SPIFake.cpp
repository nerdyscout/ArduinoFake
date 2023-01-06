#include "SPIFake.h"

#include "Arduino.h"
#include "ArduinoFake.h"

void SPIClass::begin() { ArduinoFakeInstance(SPIClass)->begin(); };

void SPIClass::end() { ArduinoFakeInstance(SPIClass)->end(); };

void SPIClass::beginTransaction(SPISettings settings) {
  ArduinoFakeInstance(SPIClass)->beginTransaction(settings);
};

void SPIClass::endTransaction(void) {
  ArduinoFakeInstance(SPIClass)->endTransaction();
};

uint8_t SPIClass::transfer(uint8_t data) {
  return ArduinoFakeInstance(SPIClass)->transfer(data);
};

void SPIClass::transfer(void *buf, size_t count) {
  return ArduinoFakeInstance(SPIClass)->transfer(buf, count);
};

SPIClass SPI = SPIClassFakeProxy(ArduinoFakeInstance(SPIClass));
