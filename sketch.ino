#include "RGB.h"

RGBLED rgbled = RGBLED(13,12,11);
RGB rgb_green = RGB(0,255,0);
RGB rgb_blue  = RGB(0,0,255);
RGB rgb_red   = RGB(255,0,0);

void setup() {
  Serial.begin(9600);
  Serial.println("imf RGB test");
}

void loop() {
  rgbled.begin();
  rgbled.tri_gradient(rgb_green,rgb_blue,rgb_red);
}
