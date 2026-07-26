#include <Servo.h>

Servo camera;

void setup() {
  camera.attach(9);
  camera.write(90);   // المنتصف
  delay(1000);
}

void loop() {

  camera.write(135);  // 45° يمين
  delay(1000);

  camera.write(45);   // 45° يسار
  delay(1000);

  camera.write(90);   // العودة للمنتصف
  delay(1000);
}