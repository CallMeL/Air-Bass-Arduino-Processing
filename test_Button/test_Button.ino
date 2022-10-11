#include <Wire.h>
#include <VL53L0X.h>
//====== KEY
const int KeyPin1 = 10;
const int KeyPin2 = 9;
const int KeyPin3 = 8;
const int KeyPin4 = 7;
int PinState1 = 0, PinState2 = 0, PinState3 = 0, PinState4 = 0 ;
int Before = 0;//JITTER

int inByte = 0;

void setup()
{
  
  Serial.begin(9600);
  pinMode(KeyPin1, INPUT);
  pinMode(KeyPin2, INPUT);
  pinMode(KeyPin3, INPUT);
  pinMode(KeyPin4, INPUT);
}

void loop()
{
  PinState1 = digitalRead(KeyPin1);
  PinState2 = digitalRead(KeyPin2);
  PinState3 = digitalRead(KeyPin3);
  PinState4 = digitalRead(KeyPin4);
  if ((PinState1 || PinState2 || PinState3 || PinState4) && Before == 0) {
    //print to serial as (pinstate1,pinstate2,pinstate3,pinstate4,distance_calculated)
    Serial.print(PinState1); Serial.print(",");
    Serial.print(PinState1); Serial.print(",");
    Serial.print(PinState2); Serial.print(",");
    Serial.print(PinState3); Serial.print(",");
    //Serial.print(distance_calculated, DEC);Serial.print(",");
    Serial.print(PinState4); Serial.println(",");
    
    
    Before = !Before;

  } else if (!(PinState1 || PinState2 || PinState3 || PinState4) && Before == 1) {
    //print to serial as (pinstate1,pinstate2,pinstate3,pinstate4,distance_calculated)
    Serial.print(PinState1); Serial.print(",");
    Serial.print(PinState1); Serial.print(",");
    Serial.print(PinState2); Serial.print(",");
    Serial.print(PinState3); Serial.print(",");
    //Serial.print(distance_calculated, DEC);Serial.print(",");
    Serial.print(PinState4); Serial.println(",");

    Before = !Before;
  }
  
}
