# include "MsTimer2.h"
# define PhaseAPin 2
# define PhaseBPin 3

volatile long int Pulses = 0, Speed = 0, CountForDisplay;
int SamplesDisplay =0;
int SampleTime = 10, TimeDisplay =200;
int PulseOneRound =334;
double GainSpeed;

void setup() {
  pinMode(PhaseAPin, INPUT);
  pinMode(PhaseBPin, INPUT);

  Serial.begin(57600);

  attachInterrupt(0, CountPulses, RISING);

  MsTimer2::set(SampleTime, Timer2Tasks);
  MsTimer2::start();

  SamplesDisplay = TimeDisplay/SampleTime;

  GainSpeed = (1.0 / 334) * (1000 / SampleTime)*60;

}

void loop() {
  if (CountForDisplay == SamplesDisplay)
  {
    Serial.println (Speed);
    CountForDisplay =0;
    }
}

void CountPulses()
{
  Pulses ++;
  }

void Timer2Tasks()
  {
    Speed = (int) (Pulses * GainSpeed);
    Pulses =0;
    CountForDisplay ++;
    }
