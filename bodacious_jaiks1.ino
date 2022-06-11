#include <Liquidcrystal.h>

Liquidcrystal led(2,3,4,5,6,7);

void setup() {
  led.begin(16,2);
}

void loop() {
  lcd.setCursor(0, 0);
  led.print("Hello World");
}