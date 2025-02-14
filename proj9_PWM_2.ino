#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <stdio.h>

void PWM_init_R()
{
  //Tryb pracy - Fast PWM 8bit
  TCCR1A |= (1<<WGM10);
  TCCR1B |= (1<<WGM12);

  //Compare output mode
  TCCR1A |= (1<<COM1A1);
 
  //Prescaler = 1
  TCCR1B |= (1<<CS10);
  
  //Częstotliwosc = 16000000/(1*(1+255)) = 62500Hz (62500 razy na sekunde zliczanie od 0 do 255)

  //Porównywacz
  OCR1A = 255;
}

void PWM_init_G()
{
  //Tryb pracy - Fast PWM 8bit
  TCCR1A |= (1<<WGM10);
  TCCR1B |= (1<<WGM12);
  
  //Compare output mode
  TCCR1A |= (1<<COM1B1);

  //Prescaler = 1
  TCCR1B |= (1<<CS10);
  
  //Częstotliwosc = 16000000/(1*(1+255)) = 62500Hz (62500 razy na sekunde zliczanie od 0 do 255)

  //Porównywacz
  OCR1B = 255;
}

void PWM_init_B()
{
  //Tryb pracy - Fast PWM 8bit
  TCCR2A |= (1<<WGM20);
  TCCR2A |= (1<<WGM21);
  
  //Compare output mode
  TCCR2A |= (1<<COM2B1);
  
  //Prescaler = 1
  TCCR2B |= (1<<CS20);
  
  //Częstotliwosc = 16000000/(1*(1+255)) = 62500Hz (62500 razy na sekunde zliczanie od 0 do 255)

  //Porównywacz
  OCR2B = 255;
}

void color(int r, int g, int b)
{
  r = 255-r;
  g = 255-g;
  b = 255-b;
  OCR1A = r;
  OCR1B = g;
  OCR2B = b;
}

int main()
{
  DDRB |= (1<<PB1);
  DDRB |= (1<<PB2);
  DDRD |= (1<<PD3);

  PWM_init_R();
  PWM_init_G();
  PWM_init_B();

  while(1)
  {
    color(0, 125, 130);
  }

  return 0;
}
