void setup()
{
  DDRD = 0b11100000;
  PORTD = 0b00000000;
}

void loop()
{
  PORTD = PORTD | (1<<5);
  _delay_ms(1000);
  PORTD = PORTD & ~(1<<5);
  
  PORTD = PORTD | (1<<6);
  _delay_ms(1000);
  PORTD = PORTD & ~(1<<6);
  
  PORTD = PORTD | (1<<7);
  _delay_ms(1000);
  PORTD = PORTD & ~(1<<7);
  
  PORTD = PORTD | (1<<6);
  _delay_ms(1000);
  PORTD = PORTD & ~(1<<6);
}
