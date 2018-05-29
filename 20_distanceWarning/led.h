#ifndef __LED_H__
#define __LED_H__

class Led {
  public:
    Led(int pin) 
      : pin(pin) {
        pinMode(pin, OUTPUT);
    }

  void on() {
    digitalWrite(pin, LOW);
  }
  void off() {
    digitalWrite(pin, HIGH);
  }
  
  private:
    const int pin; 
};
#endif
