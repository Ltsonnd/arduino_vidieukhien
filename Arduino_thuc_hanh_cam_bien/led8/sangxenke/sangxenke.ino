//sang xen ke
int pinLed[ ] ={2, 3, 4,5, 6, 7, 8,9};
//  (0,1,2,3,4,5,6,7)
int i,j;
void xenke()
{
static int chay5=0;
for(chay5=0;chay5<8;chay5+=2) 
digitalWrite(pinLed[chay5],HIGH);
delay(300);
for(i=0;i<8;i++) 
digitalWrite(pinLed[i],LOW);
for(chay5=1;chay5<8;chay5+=2)
digitalWrite(pinLed[chay5],HIGH); 
delay(300);
for(i=0;i<8;i++) 
digitalWrite(pinLed[i], LOW);
}
void setup()
{
for(i=0;i<-7;i++) 
pinMode(pinLed[i],OUTPUT);
}
void loop()
{
  xenke();
  }
