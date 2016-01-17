/**
  https://github.com/guillaume-rico/SharpIR/blob/master/examples/SharpSensorCm/SharpSensorCm.ino

  Connection instructions for Arduino UNO
  ---------------------------------------
  Connect RED wire to 5V
  Connect BLACK wiere to GND
  Connect YELLOW/WHITE to AO
*/

#include <SharpIR.h>

#define ir 0
#define model 20150
#define sampleSize 25
#define validityPercent 95

SharpIR sharp(ir, sampleSize, validityPercent,  model);

void setup(){
  Serial.begin(9600);
}

void loop(){
  delay(2000);

  int dis = sharp.distance();  // this returns the distance to the object you're measuring
  Serial.print("Mean distance: ");  // returns it to the serial monitor
  Serial.println(dis);
}
