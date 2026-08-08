#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(7);
  servo2.attach(8);
  servo3.attach(9);
  servo4.attach(10);

  unsigned long startTime = millis();

  // Run the Sweep motion for 2 seconds
  while (millis() - startTime < 2000) {

    // Sweep from 0 to 180 degrees
    for (int angle = 0; angle <= 180; angle++) {

      if (millis() - startTime >= 2000)
        break;

      servo1.write(angle);
      servo2.write(angle);
      servo3.write(angle);
      servo4.write(angle);

      delay(5);
    }

    // Sweep from 180 back to 0 degrees
    for (int angle = 180; angle >= 0; angle--) {

      if (millis() - startTime >= 2000)
        break;

      servo1.write(angle);
      servo2.write(angle);
      servo3.write(angle);
      servo4.write(angle);

      delay(5);
    }
  }

  // After 2 seconds, hold all servos at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
  // Keep all servos at 90 degrees
}
