
#include <Servo.h>

Servo leftHip;
Servo rightHip;
Servo leftKnee;
Servo rightKnee;  // create servo object to control a servo
// twelve servo objects can be created on most boards

// pin assignment L = left ,R = right, h = hip, k = knee
const int pinLH = 2;
const int pinRH = 3;
const int pinLK = 4;
const int pinRK = 5;

// normal/standing angles
const int hNormal = 90;
const int kNormal = 90;

//step angles/delay
const int hStep = 30;
const int kStep = 40;
const int sDelay = 500;

 
void setup() {
  leftHip.attach(pinLH);
  rightHip.attach(pinRH);
  leftKnee.attach(pinLK);
  rightKnee.attach(pinRK);

  leftHip.write(hNormal); // set initial position of left hip
  rightHip.write(hNormal); // set initial position of right hip
  leftKnee.write(kNormal); // set initial position of left knee
  rightKnee.write(kNormal); // set initial position of right knee
  delay(1000); // wait for servos to reach initial position
}

void step(char side) {
  if (side == 'R') {
    rightHip.write(hNormal + hStep);
    leftHip.write(hNormal - hStep);
    rightKnee.write(kNormal - kStep);
    leftKnee.write(kNormal);
    delay(sDelay);
  }
  else if (side == 'L') {
    leftHip.write(hNormal + hStep);
    rightHip.write(hNormal - hStep);
    leftKnee.write(kNormal - kStep);
    rightKnee.write(kNormal);
    delay(sDelay);
  }
}

void loop() {

  step('R');      // Step right leg

  step('L');       // Step left leg

  leftHip.write(hNormal); 
  rightHip.write(hNormal); 
  leftKnee.write(kNormal); 
  rightKnee.write(kNormal);
  delay(sDelay); 
}
