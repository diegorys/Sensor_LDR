#include <SensorLDR.h>

SensorLDR sensor;

void setup() {
  Serial.begin(9600);
  sensor.attach(A5);
  sensor.turnOn();
}

void loop() {
  int light = sensor.getLight();
  Serial.println(light);
  delay(500);
}