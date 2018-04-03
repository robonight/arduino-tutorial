#import "Arduino.h";

class Blink
{
    int pin;

    int Timer = 500;

    // These maintain the current state
    int ledState;                 // ledState used to set the LED
    unsigned long previousMillis; // will store last time LED was updated

    bool isTimeup() {
        return (millis() - previousMillis >= Timer);
    }

    void update(int newState) {
        ledState = newState;                 // Turn it off
        previousMillis = millis(); // Remember the time
        digitalWrite(pin, ledState); // Update the actual LED
    }

  public:
    Blink(int ledPin, bool delay)
    {
        pin = ledPin;
        previousMillis = delay ? millis() + Timer : 0;
    }
    void blink()
    {
        if ((ledState == HIGH) && isTimeup())
        {
            update(LOW);
        }
        else if ((ledState == LOW) && isTimeup())
        {
            update(HIGH);
        }
    }
};

