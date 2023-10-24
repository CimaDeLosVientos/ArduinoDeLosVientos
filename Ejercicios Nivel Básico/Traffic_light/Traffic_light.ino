// pins
const int ledRedCarPin = 5;
const int ledYellowCarPin = 6;
const int ledGreenCarPin = 7;
const int ledRedPedestrianPin = 8;
const int ledGreenPedestrianPin = 9;

// Times
const int timeRedLightCar = 4000;
const int timeYellowLightCar = 2000;
const int timeGreenLightCar= 4000;

const int timeRedLightPedestrian = timeRedLightCar + timeYellowLightCar;
const int timeGreenLightPedestrian = timeRedLightCar;
const int timesToBlink = 8;
const int timeBeforeBlink = timeGreenLightPedestrian / 2;
const int timeBlinking = timeBeforeBlink / timesToBlink;

void setup() {
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
}

void loop() {
  // Green Car status
  digitalWrite(ledGreenCarPin, HIGH);
  delay(timeGreenLight);
  digitalWrite(ledGreenCarPin, LOW);
  
  // Yellow Car status
  digitalWrite(ledYellowCarPin, HIGH);
  delay(timeYellowLight);
  digitalWrite(ledYellowCarPin, LOW);

  // Red Car and Green Pedestrian status
  digitalWrite(ledRedCarPin, HIGH);
  digitalWrite(ledGreenPedestrianPin, HIGH);
  delay(timeBeforeBlink);

  // blink status
  digitalWrite(ledGreenPedestrianPin, LOW);
  delay(timeBlinking);
  digitalWrite(ledGreenPedestrianPin, HIGH);
  delay(timeBlinking);

  digitalWrite(ledGreenPedestrianPin, LOW);
  delay(timeBlinking);
  digitalWrite(ledGreenPedestrianPin, HIGH);
  delay(timeBlinking);

  digitalWrite(ledGreenPedestrianPin, LOW);
  delay(timeBlinking);
  digitalWrite(ledGreenPedestrianPin, HIGH);
  delay(timeBlinking);

  digitalWrite(ledGreenPedestrianPin, LOW);
  delay(timeBlinking);
  digitalWrite(ledGreenPedestrianPin, HIGH);
  delay(timeBlinking);

  // Reset
  digitalWrite(ledRedCarPin, LOW);
  digitalWrite(ledGreenPedestrianPin, LOW);
}
