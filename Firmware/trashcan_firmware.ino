#include <Servo.h>

Servo myServo;

const int servoPin = 6;
const int buttonPin = 4;

const int STOP = 94;
const int SPEED1 = 74;
const int SPEED2 = 114;

int directionState = 0;

bool lastButtonReading = HIGH;
bool stableButtonState = HIGH;

unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  myServo.attach(servoPin);
  pinMode(buttonPin, INPUT_PULLUP);

  myServo.write(STOP);
}

void loop() {
  bool reading = digitalRead(buttonPin);

  // debounce check
  if (reading != lastButtonReading) {
    lastDebounceTime = millis();
  }

  if (millis() - lastDebounceTime > debounceDelay) {
    if (reading != stableButtonState) {
      stableButtonState = reading;

      // only toggle on actual press (HIGH → LOW)
      if (stableButtonState == LOW) {
        directionState = !directionState;
      }
    }
  }

  lastButtonReading = reading;

  // run servo while pressed
  if (stableButtonState == LOW) {
    if (directionState == 0) {
      myServo.write(SPEED1);
    } else {
      myServo.write(SPEED2);
    }
  } else {
    myServo.write(STOP);
  }
}