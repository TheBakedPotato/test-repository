#include <Arduino.h>

#include <Startup.h>

void setup()
{
  Serial.begin(115200);

  splash::Startup splash;
  splash.print(Serial);
}

void loop()
{
  // put your main code here, to run repeatedly:
}