#ifndef __BUZZER_H__
#define __BUZZER_H__

class Buzzer {

  public:
    Buzzer(unsigned int pin) : pin(pin) {
      pinMode(pin, OUTPUT);
    }

    void warn() {
      tone(pin, 261);
    }

    void error() {
      tone(pin, 277);
    }

    void ok() {
      noTone(pin);
    }
  
  private:
    unsigned int pin;
};

#endif
