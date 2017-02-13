int ledPin = 9;      // LED connected to analog pin 9
int mode = 0;        // LED haves three modes, 0 -> medium, 1 -> powerfull, 2 -> party-hard
int on = 0;          // LED state
int buttonPin = 2;   // Button connected to digital pin 2
int buttonState = 0; // Button state
int value;
int curentButtonState = 0;

void setup()  { 
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

int turnOn(){  // Turn on LED like the mode says
  switch (mode) {
    case 0:  // medium
      return 120;
    case 1:  // powerfull
      return 255;
    case 2:  // blink
      if (on == 0){  // is off
        on = 1;  // next state is on
        delay(500);
        return 255;  // turn on
        
      }else{  // is on
        on = 0;  // next state is off
                delay(500);
        return 0; // turn off
      }  
  }  
}

void pushButton(){
  if(buttonState == 0){  // to activate
    buttonState = 1;
  }else{
    buttonState = 0;    // to disactivate
    mode = (mode+1)%3;  // change to next mode
  }
}

void loop()  {
  // read the state of the pushbutton value:
  curentButtonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (curentButtonState == buttonState) {     
    // all ok  
  } 
  else {
    // The buttonState has changed
    pushButton(); 
  }
  
  if(buttonState == 1){ // only turn on when the button is pressed
    value = turnOn();
  }else{
    value = 0;
  }
  Serial.println("value " + value);
    Serial.println("mode " + mode);
   analogWrite(ledPin, value); 
   
}


