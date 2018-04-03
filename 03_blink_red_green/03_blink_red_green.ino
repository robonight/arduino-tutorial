int led_green = 7;
int led_red = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_red, HIGH);
  delay(500);
  digitalWrite(led_red, LOW);
  delay(500);
  digitalWrite(led_green, HIGH);
  delay(500);
  digitalWrite(led_green, LOW);
  delay(500);
}

