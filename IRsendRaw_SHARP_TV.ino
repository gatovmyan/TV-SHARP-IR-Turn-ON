/*
 * IRremote: IRsendRawDemo - demonstrates sending IR codes with sendRaw
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 *
*/

// Arduino NANO

#include <IRremote.h>

IRsend irsend;

unsigned int L = 1800;  //durée d'un 1
unsigned int C = 800;   //durée d'un 0
unsigned int X = 300;  // durée d'une impulsion lumineuse

unsigned long time;

//  signal on-off
unsigned int salve1[] = {
  X,L,X,C,X,C,X,C,X,C,X,C,X,L,X,L,X,C,X,L,X,C,X,C,X,C,X,L,X,C,X};
unsigned int salve2[] = {
  X,L,X,C,X,C,X,C,X,C,X,L,X,C,X,C,X,L,X,C,X,L,X,L,X,L,X,C,X,L,X};

void setup()
{
  Serial.begin(9600);
}

void loop() {

  irsend.sendRaw(salve1, 31, 38); 

  delay(100);
}
