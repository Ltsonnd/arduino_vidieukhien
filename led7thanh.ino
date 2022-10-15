
const int LedPin []={2,3,4,5,6,7,8,9};
const int Code[10][8] = {1,1,1,1,1,1,0,0, //0
                         0,1,1,0,0,0,0,0,//1
                         1,1,0,1,1,0,1,0, //2
                         1,1,1,1,0,0,1,0, //3
                         0,1,1,0,0,1,1,0, //4
                         1,0,1,1,0,1,1,0, //5
                         1,0,1,1,1,1,1,0, //6
                         1,1,1,0,0,0,0,0, //7
                         1,1,1,1,1,1,1,0, //8
                         1,1,1,1,0,1,1,0}; //9
    int i,j;
void setup() {
  for(i=0;i<8;i++) {
    pinMode(LedPin[i],OUTPUT);
    digitalWrite(LedPin[i],LOW);
  }
}

void loop() {
  for (i=0;i<10;i++){
    Write7segment(i);
    delay(500);
  }
}

void Write7segment(int value) {
  int j;
  for (j=0; j<8;j++){
    if (Code[value][j]==1)
      digitalWrite(LedPin[j],HIGH);
    else
      digitalWrite(LedPin[j],LOW);
  }
  }
