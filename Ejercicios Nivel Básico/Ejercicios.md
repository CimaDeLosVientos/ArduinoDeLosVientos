# Ejercicio 1. SOS

Desarrolla un programa que mediante un led emita un mensaje SOS en morse.
El delay entre señales será de medio segundo y de un segundo entre caracteres.
La duración de las señales largas será de medio segundo y la de las cortas de un cuarto de segundo.

Competencias:

- Escritura Digital

# Ejercicio 2. Blink a dos tiempos

Desarrolla un programa en el que dos leds parpadeen pero uno lo haga al doble de frecuencia que el otro.

Competencias:

- Escritura Digital
- Control de secuencia

# Ejercicio 3. Cuenta atrás con 7 segmentos

Desarrolla un programa que utilizando un conjunto de leds **7 segmentos** realice una cuenta regresiva del 9 al 0 utilizando variables para los pines.

Competencias:

- Escritura Digital
- Lectura de variables

# Ejercicio 4. Semáforo completo

Desarrolla un programa con 3 leds de colores rojo, amarillo y verde, y 2 leds de colores rojo y verde que simulen el funcionamiento de un semáforo.

Los 3 primeros leds representarán el semáforo de los coches y los otros dos el de los peatones.

El de los coches debe empezar en rojo, mantenerse 4 segundos, cambiar a amarillo durante dos segundos, y luego pasar a verde durante 4 segundos.

El de los peatones debe estar rojo mientras el de los coches esté rojo y amarillo y pasar a verde mientres el de los coches esté en rojo. Además, los últimos 2 segundos debe parpadear con cambios cada 200 milisegundos.

En la segunda parte de este ejercicio todos los pines y tiempos deben ser variables.

Competencias:

- Escritura Digital
- Control de secuencia
- Lectura de variables
- Operaciones aritméticas

# Ejercicio 5. Leds alternos con incremento

Desarrolla un programa que alterne la señal entre dos leds y el tiempo que pase entre cambio sea 100 milisegundos más que en el ciclo anterior.

Competencias:

- Escritura Digital
- Lectura y escritura de variables
- Operaciones Aritméticas

# Ejercicio 6. Leds alternos con decremento y reset

Desarrolla un programa que alterne la señal entre dos leds y el tiempo que pase entre cambio sea 100 milisegundos menos que en el ciclo anterior y que cuando el tiempo entre cambios sea 0 se reinicie.

Competencias:

- Escritura Digital
- Lectura y escritura de variables
- Operaciones Aritméticas
- Sentencias condicionales

# Ejercicio 6.5. PUM-ZAP

Utilizando dos leds y una variable que se incremente en una unidad cada ciclo, desarrolla un programa que encienda el led 1 cuando la variable sea par, y el led 2 cuando la variable sea múltiplo de 3.

NOTA: Hay números que no son múltiplos ni de dos ni de tres, por lo que no se encenderá ninguno, y números que son múltiplos de dos y tres, y por tanto se encenderán ambos leds.

Competencias:

- Escritura Digital
- Operaciones Aritméticas (+ operación módulo)
- Sentencias condicionales

# Ejercicio 7. Triple blink alterno

Desarrolla un programa en el que dos leds parpadeen 3 veces cada uno de forma alterna.

Competencias:

- Escritura Digital
- Sentencias condicionales excluyentes y con control de *reset*

# Ejercicio 8. Triple blink alterno con *if else*

Desarrolla un programa en el que dos leds parpadeen 3 veces cada uno de forma alterna utilizando una sentencia condicional con sección *else*.

Competencias:

- Escritura Digital
- Sentencias condicionales completas y con control de *reset*

# Ejercicio 9. Triple blink alterno con *while*

Desarrolla un programa en el que dos leds parpadeen 3 veces cada uno de forma alterna utilizando un bucle *while*.

Competencias:

- Escritura Digital
- Bucles (*while*)

# Ejercicio 10. Triple blink alterno con *for*

Desarrolla un programa en el que dos leds parpadeen 3 veces cada uno de forma alterna utilizando un bucle *while*.

Competencias:

- Escritura Digital
- Bucles (*for*)

# Ejercicio 11. Fade

Utilizando un led desarrolla un programa que lo encienda y lo apaga gradualmente.

Competencias:

- Escritura Analógica
- Control de flujo

# Ejercicio 12. Fade Alterno

Utilizando dos leds realiza el programa de fade de forma que mientras que el led 1 se enciende gradualmente, el led 2 se apaga gradualmente.

Competencias:

- Escritura Analógica
- Control de flujo

# Ejercicio 13. Colores secundarios con RGB

Utilizando un *led rgb*, desarrolla un programa que recorra los colores secundarios cambiando cada 2 segundos.

Competencias:

- Escritura Analógica
- Control de flujo

# Ejercicio 14. Random fade

Utilizando un *led rgb*, desarrolla un programa que lo encienda y lo apaga gradualmente, y que cada vez que se encienda  lo hace con un color escogido aleatoriamente

Competencias:

- Escritura Analógica
- Control de flujo
- Aritmética

# Ejercicio 15. Fade Discreto con Array

Utilizando un led RGB desarrolla un programa que lo encienda y lo apaga gradualmente utilizando 5 valores fijados y almacenados en un *array*.

Competencias:

- Escritura Analógica
- Control de flujo
- Array

# Ejercicio 16. Arcoíris automático

Utilizando un led rgb y un *array* bidimensional, desarrolla un programa que rote por los colores del arcoíris cada 3 segundos.

Competencias:

- Escritura Analógica
- Control de flujo
- Matriz (array de array)

# Ejercicio 17. Interruptor

Utilizando un led y un interruptor, desarrolla un programa que encienda el led mientras que el botón esté pulsado.

Competencias:

- Escritura Digital
- Lectura Digital
- Control de flujo

# Ejercicio 18. Linterna por niveles

Utilizando dos leds y un interruptor, desarrolla un programa que cada vez que se pulse el interruptor pase al siguiente estado, siendo los estados: led 1 y led 2 apagados; led 1 encendido y led 2 apagado; led 1 encendido y led 2 encendido. 

Competencias:

- Escritura Digital
- Lectura Digital
- Control de flujo
- Secuencialidad

# Ejercicio 19. Arcoíris manual

Utilizando un *led rgb*, un *array* bidimensional y un interruptor, desarrolla un programa que rote por los colores del arcoíris cambiando de color cada vez que se pulse el interruptor.

Competencias:

- Escritura Analógica
- Lectura Digital
- Control de flujo
- Matriz (array de array)
- Secuencialidad

# Ejercicio 20. Semáforo completo

Utilizando 5 leds y un interruptor, desarrolla un programa que imite el funcionamiento de los semáforos con pulsador de peatones. Es decir, 3 led deben simular el semáforo para vehículos, y los otros dos los del semáforo de peatones. Al pulsar el botón, pasado un cierto tiempo, debe cerrarse el paso para vehículos y abrirse el de peatones, pasado un tiempo el de peatones debe parpadear y por último cerrarse y reabrir el del tráfico.

Competencias:

- Escritura Digital
- Lectura Digital
- Control de flujo (avanzado)
- Secuencialidad (avanzado)

# Ejercicio 21. Linterna con memoria

Utilizando un led y un interruptor, desarrolla un programa que imite el funcionamiento de una linterna con tres fases (luz débil, luz intensa y parpadeo). Al pulsar el interruptor la linterna debe encenderse con la siguiente fase, y si se pulsa el interruptor cuando está encendida en cualquiera de las fases se debe apagar. Es decir, debe ir cambiando de fase pasando siempre por el estado "apagada"

Competencias:

- Escritura Analógica
- Lectura Digital
- Control de flujo (avanzado mediante máquina de estados)
- Secuencialidad (avanzado)

# Ejercicio 21.5. Juego encender leds

Utilizando 3 leds y 3 interruptores colocados paralelamente se debe implementar un juego que encienda aleatoriamente uno o dos de los leds. Después el usuario puede pulsar cualquiera de los 3 interruptores para cambiar el estado del led y los adyacentes. Cuando todos los leds estén encendidos el juego acaba y deja de funcionar la entrada de usuario.

Competencias:

- Escritura Digital
- Lectura Digital
- Control de variables
- Secuencialidad (avanzado)

# Ejercicio 22. Control de RGB con interruptores

Utilizando un led RGB y 3 interruptores, implementa un programa que cada vez que se pulse el botón correspondiente a un led, este incremente en una cantidad su luminancia, en caso de sobre pasar el valor máximo, debe volver a empezar en 0.

Competencias:

- Escritura analógica
- Lectura Digital
- Control de variables

# Ejercicio 22.1. Control de RGB con interruptores ampliado

Partiendo del ejercicio anterior, añade un interruptor más que mientras que está pulsado si se pulsa el interruptor de un led, éste en vez de incrementar decrementa.

Competencias:

- Escritura analógica
- Lectura Digital
- Control de variables con if anidados

# Ejercicio 23. 2 interruptores 1 led

Utilizando 3 leds y 3 interruptores, implementa un programa al pulsar simultaneamente dos interruptores iluminen el led que no corresponde con esos interruptores.

Competencias:

- Escritura analógica
- Lectura Digital
- Control de variables con operaciones booleanas de adición.
