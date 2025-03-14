
void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  red();
  yellow();
  green();
}

void red(){
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(10, LOW);

}

void green(){
  digitalWrite(8, HIGH);
  delay(4000);
  digitalWrite(8, LOW);
}

void yellow(){
  digitalWrite(9, HIGH);
  delay(2000);
  digitalWrite(9, LOW);
}
