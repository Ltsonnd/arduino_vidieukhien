#define CDS A0
int cds , cds0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(CDS,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
cds=analogRead(CDS);
if(cds!=cds0)
{cds0=cds;
cds=map(cds,0,1023,0,5000);
Serial.print(cds);
Serial.println(" mV");
}
delay(5000);
}
