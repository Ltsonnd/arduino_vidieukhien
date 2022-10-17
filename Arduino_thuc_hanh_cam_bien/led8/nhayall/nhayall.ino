int pinLed[] = {2,3,4,5,6,7,8,9}; //nhap nhay all
int i,j;
void nhapnhay()
{
  for(i=0;i<=7;i++)
    digitalWrite(pinLed[i], LOW) ; 
  delay (300) ;
  for(i=0;i<=7;i++)
    digitalWrite(pinLed[i],HIGH); 
  delay(300);
}
void setup()
{
  for(i=0;i<=7; i++) 
  pinMode(pinLed[i],OUTPUT); 
  }
void loop(){
  nhapnhay();
  }
 

          
