// Nombre de los pines:
int p_red = 9;
int p_green = 10;
int p_blue = 11;

// Variables globales que poseen, una vez inicializadas, el valor RGB correspondiente
int red;
int green;
int blue;

// Bucle de inicialización
void setup() {                
  // initialize the digital pin as an output.
  pinMode(p_red, OUTPUT);
  pinMode(p_green, OUTPUT);
  pinMode(p_blue, OUTPUT);
  Serial.begin(9600);      // open the serial port at 9600 bps:
}




/*
  Esta función recibe un entero entre 0 y 100 que representará "la potencia"
  con la que se encenderá el led, y escribirá en las tres salidas analogicas
  el valor correpondiente para encender el led.

  Recordad que el valor de las salidas es un número ENTERO entre 0 y 255.
  Para escribir en las salidas analógicas se usa la función:
    analogWrite(<nombre del pin en el que se escribe>, <valor que se escribe>);
*/
void setColor(int porcent){
  //  PARTE A COMPLETAR POR LOS ALUMNOS

}


/*
  Esta función se encarga de cambiar el valor de las variables globales a un número
  ENTERO entre 0 y 255 escogido aleatoriamente.

  Existe una función random que devuelve un número entero entre dos números:
    random(<min>, <max>);
*/
void setRandom(){
  //  PARTE A COMPLETAR POR LOS ALUMNOS
}


/* 
  Bucle principal del programa, se ejecutará constantemente.
  En este bucle se debe:
  - Generar el color con el que se va a iluminar el led.
  - Iluminar el led de forma progresiva.
  - Cuando se haya iluminado completamente, apagarlo de forma progresiva.

  Para que el led no se apague y se encienda inmediatamente, se recomienda
  añadir un delay con la función:
    delay(<milisegundos>)
*/
void loop() {
  //  PARTE A COMPLETAR POR LOS ALUMNOS
}
