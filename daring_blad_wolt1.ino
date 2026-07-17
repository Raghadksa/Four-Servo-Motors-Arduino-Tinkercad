#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Servo pins
int servo1Pin = 3;
int servo2Pin = 5;
int servo3Pin = 6;
int servo4Pin = 9;

void setup() {

  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);

  unsigned long startTime = millis();

  int angle = 0;
  int direction = 1;

  // Sweep for 2 seconds
  while (millis() - startTime < 2000) {

    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);

    delay(15);

    angle += direction;

    if (angle >= 180) {
      angle = 180;
      direction = -1;
    }

    if (angle <= 0) {
      angle = 0;
      direction = 1;
    }
  }

  // Hold all servos at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {

}