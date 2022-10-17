#include"LiquidCrystal_I2C.h"
int sensorPin= A0;
LiquidCrystal_I2C myI2C(0x27,16,2);
void setup() {
  myI2C.begin();
  myI2C.backlight();

}
void loop()
{
myI2C.home () ;
int reading = analogRead(sensorPin) ;
float voltage = reading * 5.0 / 1023.0;
float temp = voltage * 100.0;
myI2C.print ("Temperature");
myI2C.setCursor(0,1); 
myI2C.print(temp);
myI2C.print("degree C"); 
delay (500);
}
