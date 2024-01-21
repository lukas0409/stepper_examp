/* 
스텝모터 cw 예제
 */

#include <Stepper.h> // 스텝모터 라이브러리


const int stepsPerRevolution = 1024; // 회전 각도 180도 
Stepper myStepper(stepsPerRevolution,11,9,10,8); // 스텝모터 핀세팅
 
void setup() {
  myStepper.setSpeed(30); // 스텝모터 회전속도 30
}

void loop() {
  myStepper.step(stepsPerRevolution); // cw 회전
}