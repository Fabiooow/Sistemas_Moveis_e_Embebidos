int ledPin = 11;
int analogPin = A1;
int val = 0;        

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(analogPin);
  digitalWrite(ledPin, HIGH);
  delay(val);
  digitalWrite(ledPin, LOW);
  delay(val);
}
