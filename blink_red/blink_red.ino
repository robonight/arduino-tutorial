int red_led = 8;

void setup() {
  // tell arduino that this is an output pin
  pinMode(red_led, OUTPUT);
}

void loop() {
  digitalWrite(red_led, HIGH);
  delay(500);
  digitalWrite(led_red, LOW);
  delay(500);
}
