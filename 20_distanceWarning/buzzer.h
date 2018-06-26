#ifndef __BUZZER_H__
#define __BUZZER_H__

class Buzzer {

  public:
    Buzzer(unsigned int pin) : pin(pin) {
      pinMode(pin, OUTPUT);
    }

    void warn() const {
      tone(pin, 261);
    }

    void error() const {
      tone(pin, 277);
    }

    void ok() const {
      noTone(pin);
    }
  
  private:
    unsigned int pin;
};

#endif
