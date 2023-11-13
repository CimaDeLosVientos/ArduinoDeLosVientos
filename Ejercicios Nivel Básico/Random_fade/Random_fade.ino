// analog pins
const int ledRed = 9;
const int ledGreen = 10;
const int ledBlue = 11;

// variables
const int timeBetweenLeds = 2000;
const int timeBetweenSteps = 30;
const int steps = 50;

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

  // fade in from min to max in increments of 2 porcent:
  for(int fadeValue = 0 ; fadeValue <= steps; fadeValue++) { 
    analogWrite(ledRed, (int)(ledRedValue*fadeValue/steps));
    analogWrite(ledGreen, (int)(ledGreenvalue*fadeValue/steps));
    analogWrite(ledBlue, (int)(ledBlueValue*fadeValue/steps));
    // wait for timeBetweenSteps milliseconds to see the dimming effect    
    delay(timeBetweenSteps);                            
  } 
  
  // fade out from max to min in increments of 2 porcent:
  for(int fadeValue = steps ; fadeValue >= 0; fadeValue--) { 
    analogWrite(ledRed, (int)(ledRedValue*fadeValue/steps));
    analogWrite(ledGreen, (int)(ledGreenvalue*fadeValue/steps));
    analogWrite(ledBlue, (int)(ledBlueValue*fadeValue/steps));
    // wait for timeBetweenSteps milliseconds to see the dimming effect    
    delay(timeBetweenSteps);                            
  } 

}