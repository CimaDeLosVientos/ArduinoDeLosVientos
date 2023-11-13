// analog pins
const int ledRed = 9;
const int ledGreen = 10;
const int ledBlue = 11;

// sitch pins
const int switchRedPin = 5;
const int switchGreenPin = 6;
const int switchBluePin = 7;

// variables
const int ledRedValue = 0;
const int ledGreenValue = 0;
const int ledBlueValue = 0;

const int increment = 10;
const int timeBetweenSwitch = 30;

int ledRedValue;
int ledGreenvalue;
int ledBlueValue;

void setup() {
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(ledBluePin, OUTPUT);

  pinMode(switchRedPin, INPUT);
  pinMode(switchGreenPin, INPUT);
  pinMode(switchBluePin, INPUT);

  ledRedValue = 0;
  ledGreenvalue = 0;
  ledBlueValue = 0;
}

bool IsPulsed(int switchPin){
  return digitalRead(switchPin) == HIGH;
}

void loop() {
  if (IsPulsed(switchRedPin)){
    ledRedValue = (ledRedValue + increment) % 255;
    delay(timeBetweenSwitch);
  }

  if (IsPulsed(switchGreenPin)){
    ledGreenValue = (ledGreenValue + increment) % 255;
    delay(timeBetweenSwitch);
  }

  if (IsPulsed(switchBluePin)){
    ledBlueValue = (ledBlueValue + increment) % 255;
    delay(timeBetweenSwitch);
  }

  digitalWrite(ledLeftPin, ledLeftState);
  digitalWrite(ledCenterPin, ledCenterState);
  digitalWrite(ledRightPin, ledRightState);

}
