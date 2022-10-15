const int x0=2, x1=3, x2=4;
const int y0=11,y1=12, y2=13;
void setup() {
   pinMode(x0,INPUT);  pinMode(x1,INPUT);  pinMode(x2,INPUT);
   pinMode(y0,OUTPUT);  pinMode(y1,OUTPUT); pinMode(y2,OUTPUT);
   digitalWrite(y0,LOW);  digitalWrite(y1,LOW);  digitalWrite(y2,LOW);
   
}

void loop() {

  if (digitalRead(x0)==0)
        digitalWrite(y0,1);
  else digitalWrite(y0,0);
              
  if (digitalRead(x1)==1)
        digitalWrite(y1,1);
  else digitalWrite(y1,0);
  
  if (digitalRead(x2)==0)
        digitalWrite(y2,1);
  else digitalWrite(y2,0);

}
