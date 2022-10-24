/*
  En este programa se debe simular el comportamiento de una linterna con tres modos
  En el primero se enciende un poco, en el segundo se enciende completamente, y en el
  tercero parpadea.
  En el circuito hay un botón que sirve para apagar y encender la linterna, cada vez
  que se encienda lo hará con el siguiente modo.
*/

// variables globales
int ledPin = 9;      // Nombre del pin al que se conecta el LED (salida)
int mode = 0;        // Variable para controlar los modos de la lintern: 0 -> medium, 1 -> powerfull, 2 -> party-hard
int on = 0;          // Indica si el led está encendido (0 -> apagado, 1 -> encendido)
int buttonPin = 2;   // Nombre del pin al que se conecta el Boton (entrada)
int buttonState = 0; // Indica si el botón está apretado o no en un determinado momento (0 -> desactivado, 1 -> activado)
int curentButtonState = 0;  // Indica si el botón está apretado o no en el momento actual (0 -> desactivado, 1 -> activado)
int value;           // Valor que tomará el LED al escribir en la salida.

// Bucle de inicialización
void setup()  { 
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}



/*
  Esta función devuelve el valor que debe tener la variable value en el momento actual.
  Dicho valor es un número entero entre 0 y 255 y está relacionado con la variable mode.
*/
int turnOn(){  // Turn on LED like the mode says
  //  PARTE A COMPLETAR POR LOS ALUMNOS
}


/*
  Esta función se encarga de cambiar el estado del botón y actualizar el modo
  cuando corresponda.
*/
void pushButton(){
  //  PARTE A COMPLETAR POR LOS ALUMNOS
}


/*
  Bucle principal, se ejecutará continuamente y en el se debe:
  - Comprobar el estado del botón en el momento actual y
    actualizar las variables del programa en caso de que haya cambiado.
  - Si el botón está activado, se debe actualizar el valor del LED (variable value) 
    como corresponda según el modo actual.
  - Escribir en la salida dicho valor para que el LED se encienda, apague, mantenga
    encendido, etc. Según corresponda. Para escribir se utiliza la función:
      analogWrite(<nombre del pin en el que se escribe>, <valor que se escribe>);
*/
void loop()  {
   //  PARTE A COMPLETAR POR LOS ALUMNOS
}


