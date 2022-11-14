// pins
const int ledPinA = 5;
const int ledPinB = 6;

// variables
int brightness = 0;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by


void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  analogWrite(ledPinA, brightness);
  analogWrite(ledPinB, 255 - brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}