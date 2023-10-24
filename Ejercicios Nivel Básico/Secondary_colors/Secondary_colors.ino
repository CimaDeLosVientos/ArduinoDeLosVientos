// pins
const int ledRed = 9;
const int ledGreen = 10;
const int ledBlue = 11;

// variables
const int timeBetweenLeds = 2000;


void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  // Red  + Green
  analogWrite(ledRed, 255);
  analogWrite(ledGreen, 255);
  analogWrite(ledBlue, 0);
  delay(timeBetweenLeds);

  // Red  + Blue
  analogWrite(ledRed, 255);
  analogWrite(ledGreen, 0);
  analogWrite(ledBlue, 255);
  delay(timeBetweenLeds);

  // Green  + Blue
  analogWrite(ledRed, 0);
  analogWrite(ledGreen, 255);
  analogWrite(ledBlue, 255);
  delay(timeBetweenLeds);
}