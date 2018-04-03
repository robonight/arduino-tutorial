#import "blink.cpp";

Blink led_green(7, false);
Blink led_red(8, true);

void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  led_green.blink();
  led_red.blink();
}
