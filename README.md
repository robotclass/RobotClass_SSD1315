# RobotClass SSD1315 Arduino Library

A lightweight library for 72x40 OLED displays based on the SSD1315 controller.

## Features

- Draw pixels, rectangles, bitmaps and text
- Multiple fonts including a compact 5x8 font
- Screen rotation (0/90/180/270 degrees)
- Adjustable brightness and sleep mode
- Examples demonstrating usage

## Installation

Download this repository as a ZIP archive and install it through the Arduino
IDE's **Sketch > Include Library > Add .ZIP Library** menu. The original vendor
examples are kept in the `origin` folder for reference.

## Usage

```cpp
#include <SSD1315.h>

RobotClass_SSD1315 display;

void setup() {
    Wire.begin();
    display.begin();
    display.setRotation(1);      // rotate display 90 degrees
    display.setBrightness(0x7F); // medium brightness
    display.drawString(0, 0, "Hello", 5);
    display.display();
}

void loop() {
    // put the display to sleep to save power
    display.sleep(true);
    delay(1000);
    display.sleep(false);
    delay(2000);
}
```

See the `examples` directory for more complete demonstrations.
