#define trig 6
#define echo 7
#include <Wire.h>
#include"LiquidCrystal_I2C.h"
int Width;
int distance = 0;
LiquidCrystal_I2C myI2C(0x27,16,2);
int N=5;
void setup() {
  myI2C.begin();
  myI2C.backlight();
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  myI2C.home();
  for(int i=0;i<N;i++)
  {
    readUtrasoic();
    distance+=Width;
    delay(50);
    
    }
    distance/=N;
    myI2C.print("Distance");
    myI2C.setCursor(0,1);
    myI2C.print(distance);
    myI2C.print(" cm ");
    delay (500);
  // put your main code here, to run repeatedly:

}

void readUtrasoic(){
  digitalWrite(trig,1);
  delayMicroseconds(20);
  digitalWrite(trig,0);
  Width=pulseIn(echo,HIGH);
  Width*=0.0173;
  }
