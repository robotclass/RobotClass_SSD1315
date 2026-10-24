#include <RobotClass_SSD1315.h>

RobotClass_SSD1315 display;

void setup(){
    Wire.begin();
    display.begin();
    display.drawString(20, 12, "ROC", 16);
    display.display();
}

void loop(){}
