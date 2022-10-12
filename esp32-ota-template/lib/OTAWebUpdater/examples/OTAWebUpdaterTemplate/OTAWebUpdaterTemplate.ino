#include <OTAWebUpdater.h>

void setup()
{
  addOtaLogic();
}

void loop()
{
  server.handleClient();
}
