int buttonState = 0;
int lastButtonState = 0;
int ledState = LOW;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  buttonState = digitalRead(2);
  
  if (buttonState == HIGH && lastButtonState == LOW) { 
    // Inverte o estado do LED
    ledState = !ledState;
    digitalWrite(5, ledState);
    delay(200); // Evita múltiplos acionamentos indesejados (debounce)
  }
  
  lastButtonState = buttonState;
}
