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
// Descripción: Programa que permite determinar si un numero es par o impar
// Salvedad: El programa no garantiza que tenga un correcto funcionamiento con
// numeros decimales

#include <stdio.h> 

int main ()
{
    // Se declara la variable number para guardar el numero ingresado por el usuario
    // Se declara la variable CalculateEvenOrOdd para hacer la operacion que determine si es par o impar
    int number, CalculateEvenOrOdd = 0;

    // Se pide el numero al usuario y se guarda
    printf("Este programa, lee un numero e imprime si es par o impar");
    printf("\nEntre un numero: ");
    scanf("%i", &number);
    
    // Se calcula si el numero ingresado es par o impar
    CalculateEvenOrOdd = (number % 2);

    // Se evalua si el residuo del la operacion es diferente a 0 y se determina si es par o impar
    if (CalculateEvenOrOdd == 0){
        printf("El numero es par");
    }
    else {
        printf("El numero es impar");
    }

    return 0; 

}