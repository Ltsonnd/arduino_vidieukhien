const int IR[]={2,3,4};
const int LED[]={13, 12, 11, 10, 9, 8};
void setup() {
for(int i=0;i<3;i++)
pinMode(IR[i],INPUT);
for(int i=0;i<6;i++)
pinMode(LED[i],OUTPUT);
}

void loop() {
int status,ir;
status=0;
for(int i=0;i<3;i++)
{ir=digitalRead(IR[i]);
if(!ir) status|=(1<<(2-i));

}
switch(status)
{ case 0b011:
writeLED(0b001111);
break;
case 0b001:
writeLED(0b000011);
break;
case 0b101:
writeLED(0b110011);
break;
case 0b100:
writeLED(0b110000);
break;
case 0b110:
writeLED(0b111100);
break;
default:
writeLED(0b111111);
break;
}
}

void writeLED(int x)
{for(int i=0;i<6;i++)
{
  if(x&(1<<i)) digitalWrite(LED[i],1);
else digitalWrite(LED[i], 0);
}
}
