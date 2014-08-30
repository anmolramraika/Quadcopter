#include <Servo.h>
Servo mot1;0
Servo mot2;
Servo mot3;
Servo mot4;
void setup(){
  Serial.begin(115200);
  while(!Serial.available()){
  }
  mot1.attach(3);
  mot2.attach(5);
  mot3.attach(6);
  mot4.attach(9);
  delay(100);
  mot1.write(0);
  mot2.write(0);
  mot3.write(0);
  mot4.write(0);
  delay(5000);
}
void loop(){
  for(int i=0;i<150;i++){
    mot1.write(i);
    mot2.write(i);
    mot3.write(i);
    mot4.write(i);
    delay(100);
  }
  for(int i=150;i>0;i--){
    mot1.write(i);
    mot2.write(i);
    mot3.write(i);
    mot4.write(i);
    delay(100);
  }
}
