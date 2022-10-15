const int LedsPin[] = {2,3,4,5,6,7,8,9};
int i;
void setup() {
  for (i=0;i<8;i++){
      pinMode(LedsPin[i],OUTPUT);
      digitalWrite(LedsPin[i],LOW);
    }
}

void loop() {
  for(i=0;i<=8;i++){
    for (i=0;i<7;i++){
     digitalWrite(LedsPin[i],HIGH);
     delay(100);
     digitalWrite(LedsPin[i],LOW);
     delay(100);
  }
    for (i=7;i>=1;i--){
     digitalWrite(LedsPin[i],HIGH);
     delay(100);
     digitalWrite(LedsPin[i],0);
     delay(100);
    }
  }
}
