const int ledLeftPin = 8;
const int ledCenterPin = 9;
const int ledRightPin = 10;

const int switchLeftPin = 5;
const int switchCenterPin = 6;
const int switchRightPin = 7;

void setup() {
  pinMode(ledLeftPin, OUTPUT);
  pinMode(ledCenterPin, OUTPUT);
  pinMode(ledRightPin, OUTPUT);
  pinMode(switchLeftPin, INPUT);
  pinMode(switchCenterPin, INPUT);
  pinMode(switchRightPin, INPUT);
}

bool IsPulsed(int switchPin){
  return digitalRead(switchPin) == HIGH;
}

void loop() {
  if (IsPulsed(switchLeftPin) && IsPulsed(switchCenterPin)){
    digitalWrite(ledRightPin, HIGHT);
  }else{
    digitalWrite(ledRightPin, HIGHT);
  }

  if (IsPulsed(switchLeftPin) && IsPulsed(switchRigthPin)){
    digitalWrite(ledCenterPin, HIGHT);
  }else{
    digitalWrite(ledCenterPin, HIGHT);
  }

  if (IsPulsed(switchCenterPin) && IsPulsed(switchRigthPin)){
    digitalWrite(ledLeftPin, HIGHT);
  }else{
    digitalWrite(ledLeftPin, HIGHT);
  }
}
