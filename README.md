# arduino-sketchbook

custom sketches to aid in my microcontroller pursuits.

## ESP32 OTA Template

- as the name suggests, this is a bare bones template that enables [OTA sketch uploads](https://www.arduino.cc/en/Tutorial/ota-getting-started) for ESP32 boards.
  - **note**: this is currently formatted as a [PlatformIO](https://platformio.org/) project. you'll need to extract the `OTAWebUpdater` library to use this in the Arduino IDE.
- as of this writing, there's no way to store OTA logic on the flash memory of the board. practically, this means that in order to allow an ESP32 to accept OTA sketch uploads, OTA specific code must be included with _every_ sketch.
- because OTA boilerplate is now necessary in every sketch, i created a simple abstraction layer over the existing [OTA Web Update library](https://espressif-docs.readthedocs-hosted.com/projects/arduino-esp32/en/latest/ota_web_update.html). the point was is to minimize the amount of boilerplate necessary to enable OTA uploading.

```
#include <Arduino.h>
#include <OTAWebUpdater.h>

void setup()
{
  addOtaLogic();
}

void loop()
{
  server.handleClient();
  // your code here!
}
```
