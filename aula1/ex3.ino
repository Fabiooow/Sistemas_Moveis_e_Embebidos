
void setup() {
  pinMode(5, OUTPUT);

}

void loop() {
  analogWrite(5, 80);
  delay(1000);
  analogWrite(5, 170);
  delay(1000);
  analogWrite(5, 255);
  delay(1000);
  analogWrite(5, 0);
  delay(1000);

}
