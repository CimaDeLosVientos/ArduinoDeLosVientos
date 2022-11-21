// analog pins
const int led = 9;

// variables
const int timeBetweenLeds = 2000;

int ledRedValue;
int ledGreenvalue;
int ledBlueValue;


void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  // set values
  ledRedValue = random(0, 255);
  ledGreenvalue = random(0, 255);
  ledBlueValue = random(0, 255);

  // write values  
  analogWrite(ledRed, ledRedValue);
  analogWrite(ledGreen, ledGreenvalue);
  analogWrite(ledBlue, ledBlueValue);
  delay(timeBetweenLeds);
}