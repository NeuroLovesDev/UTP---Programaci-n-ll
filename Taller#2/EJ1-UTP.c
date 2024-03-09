// Fecha de publicación: 02/03/2024
// Hora: 11.29 AM 
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
// Descripción: Programa que lee un número del uno (1) al cinco (5) e imprime si
// es primo o no
// Salvedad: Los números que no se encuentran en el rango descrito previamente serán
// tratados pero no operados

#include <stdio.h>

int main () 
{
    // Se declara la variable number para guardar el numero ingresado por el usuario
    int number = 0;
    
    // Se pide y guarda el numero ingresado por el usuario
    printf("Este programa, lee un numero entre uno (1) y cinco (5), e imprime si es primo o no");
    printf("\nEntre un numero: ");
    scanf("%i", &number); 

   // Se determina si el numero es primo o no
    if (number == 2 || number == 3 || number == 5 ){
        printf("\nEl numero es primo");
    } 
    else if (number == 1 || number == 4){
        printf("\nEl numero no es primo");
    }
    else {
        printf ("El numero no esta en el rango establecido de entradas.");
    }

    return 0;
}
