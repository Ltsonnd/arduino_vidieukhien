int pinLed [] = {2, 3, 4,5, 6, 7,8,9}; //  (0,1,2,3,4,5,6,7)
int i,j;
void chaytraiphai()
{
static int chayl=0;
for(i=0;i<8;i++)
digitalWrite(pinLed[i], LOW); 
digitalWrite (pinLed [chayl] , HIGH) ; delay(300);
chayl++;
if (chayl>8)
chayl=0;
}
void setup()
{
for(i=0;i<=7;i++)
pinMode(pinLed[i],OUTPUT); 
}
void loop()
{
chaytraiphai();
}
