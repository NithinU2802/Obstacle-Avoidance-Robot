// Give quator degree moment to servo motor that can perform loop operation
// Require servo motor with battory also need arduino uno to load and execute the program
// Here I use footer board to have control

#include <Servo.h>
Servo servo1;
 
void setup() {
  servo1.attach(10);
}
 
void loop() {
  for (int a = 0; a <= 36; a++ ) {
    servo1.write(a);
    delay(20);
  }
  for (int b = 36; b > 0; b--) {
    servo1.write(b);
    delay(200);
  }
}
