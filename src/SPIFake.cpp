#include "Arduino.h"
#include "ArduinoFake.h"
#include "SPIFake.h"

void SPIClass::begin()
{
    ArduinoFakeInstance(SPIBus)->begin();
};

void SPIClass::end()
{
    ArduinoFakeInstance(SPIBus)->end();
};

void SPIClass::beginTransaction(SPISettings settings)
{
    ArduinoFakeInstance(SPIBus)->beginTransaction(settings);
};

void SPIClass::endTransaction(void)
{
    ArduinoFakeInstance(SPIBus)->endTransaction();
};

uint8_t SPIClass::transfer(uint8_t data)
{
    return ArduinoFakeInstance(SPIBus)->transfer(data);
};

void SPIClass::transfer(void *buf, size_t count)
{
    return ArduinoFakeInstance(SPIBus)->transfer(buf, count);
};

SPIClass SPI = SPIBusFakeProxy(ArduinoFakeInstance(SPIBus));
