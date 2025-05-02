int val = 0;
int temp = 0;

void setup() {
  Serial.begin(9600);  
}

void loop() {
  val = analogRead(A0);
  temp = ((val * 5.0)/1023.0) * 100;

  _delay_ms(100);
  Serial.println(temp);
}
