int val = 0;
int dis = 0;
void setup() {
  Serial.begin(9600);
  PinMode(5, INPUT);
  PinMode(4, OUTPUT);  
}

void loop() {
  digitalWrite(4, HIGH);
  val = analogRead(5);
  dis = 
   

}
