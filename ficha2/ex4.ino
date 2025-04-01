int val = 0;
void setup() {
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  val = digitalRead(2);
  if(val == 1){
    digitalWrite(5, HIGH);
  }else{
    digitalWrite(5, LOW);
  }
} 
