int ledPin = 11;
int analogPin = A1;
int val = 0;        

void setup() {
  //pinMode(ledPin, OUTPUT);
  //pinMode(analogPin, INPUT);
  //DDRB = 0b00001000;
  //DDRC = 0b00000000;
  DDRB |= (1<<PB3);
  DDRC &= ~(1<<PC4);

}

void loop() {
  val = analogRead(analogPin);
  
  //digitalWrite(ledPin, HIGH);
  //delay(val);
  //digitalWrite(ledPin, LOW);
  //delay(val);

  //PORTB |= (1 << PB3);
  //delay(val);
  //PORTB &= ~(1 << PB3);
  //delay(val); 

  //PORTB |= (1 << 3);
  //delay(val);
  //PORTB &= ~(1 << 3);
  //delay(val);

  PORTB ^= (1 << 3);
  delay(val);
  



}
