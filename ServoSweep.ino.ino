#include <Servo.h>

Servo myServo; // create servo object

void setup() {
  myServo.attach(9); // attach servo to pin 9
  Serial.begin(9600);
}

void loop() {
  for(int angle = 0; angle <= 180; angle += 1) {
    myServo.write(angle);
    Serial.print("Angle: ");
    Serial.println(angle);
    delay(15);
  }
  for(int angle = 180; angle >= 0; angle -= 1) {
    myServo.write(angle);
    Serial.print("Angle: ");
    Serial.println(angle);
    delay(15);
  }
}
