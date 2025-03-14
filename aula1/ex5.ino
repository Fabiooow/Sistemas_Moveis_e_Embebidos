
void setup() {
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  red();
  green();
  yellow();
}

void red(){
  int cont = 0;
  for(int i = 0; i<10; i++){
    analogWrite(10, cont);
    delay(500);
    cont += 25;
  }
  analogWrite(10, 0);
}

void green(){
  int cont = 0;
  for(int i = 0; i<10; i++){
    analogWrite(5, cont);
    delay(400);
    cont += 25;
  }
  analogWrite(5, 0);
}

void yellow(){
  int cont = 0;
  for(int i = 0; i<10; i++){
    analogWrite(9, cont);
    delay(200);
    cont += 25;
  }
  analogWrite(9, 0);
}
