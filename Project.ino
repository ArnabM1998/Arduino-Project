#include <dht.h>
dht DHT;

#define dht_Pin 13

#define SegA_Pin 2                    //connecting segment A to PIN2
#define SegB_Pin 3                    // connecting segment B to PIN3
#define SegC_Pin 4                    // connecting segment C to PIN4
#define SegD_Pin 5                    // connecting segment D to PIN5
#define SegE_Pin 6                    // connecting segment E to PIN6
#define SegF_Pin 7                    // connecting segment F to PIN7
#define SegG_Pin 8                    // connecting segment G to PIN8

void setup(){
  for (int i=2;i<9;i++) {
    pinMode(i, OUTPUT);// taking all pins from 2-8 as output
  }
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(dht_Pin);
  int reading = DHT.humidity;
  Serial.print("HUMIDITY : ");
  Serial.println(DHT.humidity);
  if(reading >= 20 && reading <= 29) {
    //show "1" on disp
    digitalWrite(SegA_Pin, HIGH);
    digitalWrite(SegB_Pin, LOW);
    digitalWrite(SegC_Pin, LOW);
    digitalWrite(SegD_Pin, HIGH);
    digitalWrite(SegE_Pin, HIGH);
    digitalWrite(SegF_Pin, HIGH);
    digitalWrite(SegG_Pin, HIGH);
  }
  else if(reading >= 30 && reading <= 39) {
    //show "2" on disp
    digitalWrite(SegA_Pin, LOW);
    digitalWrite(SegB_Pin, LOW);
    digitalWrite(SegC_Pin, HIGH);
    digitalWrite(SegD_Pin, LOW);
    digitalWrite(SegE_Pin, LOW);
    digitalWrite(SegF_Pin, HIGH);
    digitalWrite(SegG_Pin, LOW);
  }
  else if(reading >= 40 && reading <= 49) {
    //show "3" on disp
    digitalWrite(SegA_Pin, LOW);
    digitalWrite(SegB_Pin, LOW);
    digitalWrite(SegC_Pin, LOW);
    digitalWrite(SegD_Pin, LOW);
    digitalWrite(SegE_Pin, HIGH);
    digitalWrite(SegF_Pin, HIGH);
    digitalWrite(SegG_Pin, LOW);
  }
  else if(reading >= 50 && reading <= 59) {
    //show "4" on disp
    digitalWrite(SegA_Pin, HIGH);
    digitalWrite(SegB_Pin, LOW);
    digitalWrite(SegC_Pin, LOW);
    digitalWrite(SegD_Pin, HIGH);
    digitalWrite(SegE_Pin, HIGH);
    digitalWrite(SegF_Pin, LOW);
    digitalWrite(SegG_Pin, LOW);
  }
  else if(reading >= 60 && reading <= 69) {
    //show "5" on disp
    digitalWrite(SegA_Pin, LOW);
    digitalWrite(SegB_Pin, HIGH);
    digitalWrite(SegC_Pin, LOW);
    digitalWrite(SegD_Pin, LOW);
    digitalWrite(SegE_Pin, HIGH);
    digitalWrite(SegF_Pin, LOW);
    digitalWrite(SegG_Pin, LOW);
  }
  else if(reading >= 70 && reading <= 79) {
    //show "6" on disp
    digitalWrite(SegA_Pin, LOW);
    digitalWrite(SegB_Pin, HIGH);
    digitalWrite(SegC_Pin, LOW);
    digitalWrite(SegD_Pin, LOW);
    digitalWrite(SegE_Pin, LOW);
    digitalWrite(SegF_Pin, LOW);
    digitalWrite(SegG_Pin, LOW);
  }
  else if(reading >= 80 && reading <= 89) {
    //show "7" on disp
    digitalWrite(SegA_Pin, LOW);
    digitalWrite(SegB_Pin, LOW);
    digitalWrite(SegC_Pin, LOW);
    digitalWrite(SegD_Pin, HIGH);
    digitalWrite(SegE_Pin, HIGH);
    digitalWrite(SegF_Pin, HIGH);
    digitalWrite(SegG_Pin, HIGH);
  }
  else if(reading == 90) {
    //show "8" on disp
    digitalWrite(SegA_Pin, LOW);
    digitalWrite(SegB_Pin, LOW);
    digitalWrite(SegC_Pin, LOW);
    digitalWrite(SegD_Pin, LOW);
    digitalWrite(SegE_Pin, LOW);
    digitalWrite(SegF_Pin, LOW);
    digitalWrite(SegG_Pin, LOW);
  }
  else {
    //show "0" on disp
    digitalWrite(SegA_Pin, LOW);
    digitalWrite(SegB_Pin, LOW);
    digitalWrite(SegC_Pin, LOW);
    digitalWrite(SegD_Pin, LOW);
    digitalWrite(SegE_Pin, LOW);
    digitalWrite(SegF_Pin, LOW);
    digitalWrite(SegG_Pin, HIGH);
  }
  delay(50000);
}
