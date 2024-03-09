// Fecha de publicación: 02/03/2024
// Hora: 1.15 PM
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado: C11 - (ISO/IEC 9899:2011)
// Versión del compilador utilizado: 6.3.0 (MinGW)
// Versión del S.0 probado: Windows 11 Pro
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Asignatura IS284 Programación II
// Descripción: Programa que permite determinar el dia de la semana segun el numero

#include <stdio.h> 

int main ()
{
    // Se declara la variable number para guardar el numero recibido por el usuario
    int number = 0;

    // Se pide y guarda el numero ingresado por el usuario
    printf("Este programa, lee un numero entre [1 y 7] e imprime el dia que " 
           "le corresponde en la semana. Referencia: 1 = Lunes. 7 = Domingo");
    printf("\nEntre un numero: ");
    scanf("%i", &number);

    // Con el numero ingresado se determina el dia de la semana y se imprime en pantalla
    if (number == 1){
        printf("El dia es Lunes");
    }
    else if (number == 2){
        printf("El dia es Martes");
    }
    else if (number == 3){
        printf("El dia es Miercoles");
    }
    else if (number == 4){
        printf("El dia es Jueves");
    }
    else if (number == 5){
        printf("El dia es Viernes");
    }
    else if (number == 6){
        printf("El dia es Sabado");
    }
    else if (number == 7){
        printf("El dia es Domingo");
    }
    else {
        printf("El numero no es valido");
    }

    return 0;

}
