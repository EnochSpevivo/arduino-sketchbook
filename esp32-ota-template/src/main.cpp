#include <Arduino.h>
#include <OTAWebUpdater.h>

void setup()
{
  addOtaLogic();
}

void loop()
{
  // by default, the onboard led will blink continuously while connecting to WiFi. it will remain solidly on when it successfully connects.
  server.handleClient();
}