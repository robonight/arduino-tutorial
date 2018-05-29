#ifndef __DISTANCE_H__
#define __DISTANCE_H__

class Sensor {
  public:
    Sensor(int trigger_pin, int echo_pin) 
      : trigPin(trigger_pin), echoPin(echo_pin) {
      pinMode(trigger_pin, OUTPUT);
      pinMode(echo_pin, INPUT);
    }

  unsigned int readDistance() {
    digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the response from the HC-SR04 Echo Pin
 
  unsigned int duration = pulseIn(echoPin, HIGH);
  
  // Determine distance from duration
  // Use 343 metres per second as speed of sound
  
   unsigned int distance = (duration / 2) * 0.0343;
    return distance;
  }
  
  private:
    static const int MAX_DISTANCE = 500; // MAX = 500 CM
    unsigned int trigPin;
    unsigned int echoPin;
};

#endif //__DISTANCE_H__
