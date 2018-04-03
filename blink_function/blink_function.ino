int led_green = 7;
int led_red = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void blink(int pin) {
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink(led_red);
  blink(led_green);
}

