const int segmentPins[8]={13,12,11,10,9,8,7,6};// mảng 1 chiều điều khiển Led 7 đoạn
          //vị trí mảng  {0,1,2,3,4,5,6,7}
int buttonPintang=3;
int buttonPingiam=4;
int i = 0;
const byte numberal[10]={
0b00111111,//0
0b00000110,//1
0b01011011,//2
0b01001111,//3
0b01100110,//4
0b01101101,//5
0b01111101,//6
0b00000111,//7
0b01111111,//8
0b01101111 //9
};
void setup() {

  for(int vt=0;vt<8;vt++){

    pinMode(segmentPins[vt],OUTPUT);
    digitalWrite(segmentPins[vt],LOW);

  }
  pinMode(buttonPintang,INPUT_PULLUP);
  pinMode(buttonPingiam,INPUT_PULLUP);
  Hienthiso(0);
}

void loop() {

  if(digitalRead(buttonPintang)==LOW)
  {
    i=i+1;
    while(digitalRead(buttonPintang)==0)
    if(i==10)
    i=9;
  }
  if(digitalRead(buttonPingiam)==LOW)
  {
    i=i-1;
    while(digitalRead(buttonPingiam)==0)
    if(i==-1)
    i=0;
  }
  
  Hienthiso(i);
}
void Hienthiso(int nb){
  boolean x;
  for(int seg=0;seg<8;seg++){
    x=bitRead(numberal[nb],seg);//seg=0
    digitalWrite(segmentPins[seg],x);
  }
}