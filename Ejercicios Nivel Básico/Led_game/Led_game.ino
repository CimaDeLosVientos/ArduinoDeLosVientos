const int ledLeftPin = 8;
const int ledCenterPin = 9;
const int ledRightPin = 10;

const int switchLeftPin = 5;
const int switchCenterPin = 6;
const int switchRightPin = 7;

int ledLeftState = LOW;
int ledCenterState = LOW;
int ledRightState = LOW;


void setup() {
  pinMode(ledLeftPin, OUTPUT);
  pinMode(ledCenterPin, OUTPUT);
  pinMode(ledRightPin, OUTPUT);
  pinMode(switchLeftPin, INPUT);
  pinMode(switchCenterPin, INPUT);
  pinMode(switchRightPin, INPUT);

  int a, b = random(0,2), random(0,2);
  if (a == 0 || b == 0)
  {
    ledLeftState = HIGH;
  }

  if (a == 1 || b == 1)
  {
    ledCenterState = HIGH;
  }

  if (a == 2 || b == 2)
  {
    ledRightState = HIGH;
  }
}

bool IsPulsed(int switchPin){
  return digitalRead(switchPin) == HIGH;
}

bool IsHigh(int ledPinState){
  return ledPinState == HIGH;
}

void ChangeState(int ledPinState){
  if (ledPinState == HIGH){
    ledPinState = LOW;
  }else{
    ledPinState = HIGH;
  }
}

void loop() {
  if (IsPulsed(switchLeftPin)){
    ChangeState(ledLeftPin);
    ChangeState(ledCenterPin);
    delay(100);
  }

  if (IsPulsed(switchLeftPin)){
    ChangeState(ledLeftPin);
    ChangeState(ledCenterPin);
    ChangeState(ledRightPin);
    delay(100);
  }

  if (IsPulsed(switchLeftPin)){
    ChangeState(ledCenterPin);
    ChangeState(ledRightPin);
    delay(100);
  }

  digitalWrite(ledLeftPin, ledLeftState);
  digitalWrite(ledCenterPin, ledCenterState);
  digitalWrite(ledRightPin, ledRightState);

  if (IsHigh(ledLeftState) && IsHigh(ledCenterState) && IsHigh(ledRightState)){
    delay(-1);
  }
}
