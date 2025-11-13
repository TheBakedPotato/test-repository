#include "Startup.h"

using namespace splash;

void Startup::print(HardwareSerial &serial)
{
    serial.println("This is a test print");
}