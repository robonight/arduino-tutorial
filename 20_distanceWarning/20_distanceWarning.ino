#include "sensor.h"
#include "led.h"
#include "controller.h"
#include "buzzer.h"

const long interval = 50;

const Led green(3);
const Led yellow(4);
const Led red(5);
const Sensor sensor(12, 11);
const Buzzer buzzer(2);

long previousMillis = 0;

void setup() {
}

void loop() {
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;

    unsigned int distance = sensor.readDistance();
    switch(convert(distance)) {
      case OK:
        buzzer.ok();
        green.on();
        yellow.off();
        red.off();
        break;
      case WARN:
        buzzer.warn();
        green.off();
        yellow.on();
        red.off();
        break;
      case ERROR:
        buzzer.error();
        green.off();
        yellow.off();
        red.on();
        break;
      default: // No change
        break;
    }
  }
}
