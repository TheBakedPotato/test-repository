#include <Arduino.h>
#include <LittleFS.h>

#include <Startup.h>

void setup()
{
  Serial.begin(115200);

  splash::Startup splash;
  splash.print(Serial);

  LittleFS.begin(true);

  bool fileExists = LittleFS.exists("/test.txt");

  if (fileExists)
  {
    Serial.println("'test.txt' exists!");
    File testFile = LittleFS.open("/test.txt");

    uint8_t buffer[100];
    testFile.read(buffer, 100);

    char *characterBuffer = (char *)(buffer);
    Serial.print(characterBuffer);
  }
  else
  {
    Serial.println("'test.txt' DOES NOT exists! >:(");
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
}