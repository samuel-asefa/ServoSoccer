#include <Servo.h>

Servo servo;
const int leftPin = 4;
int leftState = 0;
const int rightPin = 12;
int rightState = 0;
const int resetPin = 5;
int resetState = 0;
int pos = 90;
bool locked = false;

void setup() {
  servo.attach(8);
  pinMode(leftPin, INPUT);
  pinMode(rightPin, INPUT);
  pinMode(resetPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  leftState = digitalRead(leftPin);
  rightState = digitalRead(rightPin);
  resetState = digitalRead(resetPin);
  if (leftState == HIGH && locked == false) {
    locked = true;
    pos = 180;
    servo.write(pos);
    Serial.print("Left Pressed, Servo Locked");
  }
  else if (rightState == HIGH && locked == false) {
    pos = 0;
    locked = true;
    Serial.print("Right Pressed, Servo Locked");
  } 
  else if (resetState == HIGH) {
    pos = 90;
    locked = false;
    Serial.print("Reset Pressed, Servo Unlocked");
  } else {
    servo.write(pos);
  }
  servo.write(pos);

  delay(25);
}