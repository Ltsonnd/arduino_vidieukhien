const int x0=2, x1=3;
const int y0=11;

void setup() {
  pinMode(x0,INPUT); pinMode(x1,INPUT);
  pinMode(y0,OUTPUT);
  digitalWrite(y0,LOW);
}

void loop() {
  if (digitalRead(x0)==1)
     digitalWrite(y0,1);
  if (digitalRead(x1)==1)
     digitalWrite(y0,0);
}
