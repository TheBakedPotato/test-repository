#ifndef SERIAL_SPLASH_H
#define SERIAL_SPLASH_H

#include <Arduino.h>

namespace splash
{
    class Startup
    {
    public:
        void print(HardwareSerial &serial);

    private:
        char *properties[10][2];
    };
}

#endif