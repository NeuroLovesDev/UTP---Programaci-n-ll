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
// Descripción: Programa que determina si dos numeros son pares o impares
// Salvedad: No se garantiza el correcto funcionamiento del programa si se utiliza algo diferente a un numero

#include <stdio.h> 

int main ()
{
    // Se declara la variable number1 y number2 para guardar el numero ingresado por el usuario
    // Se declara la variable CalculateEvenOrOdd para hacer la operacion que determine si es par o impar
    int number1, number2, CalculateEvenOrOdd1, CalculateEvenOrOdd2 = 0;

    // Se piden los numeros al usuario y se guardan
    printf("Ingrese el primer numero: ");
    scanf("%i", &number1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &number2);

    // Se calcula si el numero ingresado es par o impar
    CalculateEvenOrOdd1 = (number1 % 2);
    CalculateEvenOrOdd2 = (number2 % 2);

    // Se evalua si el residuo del la operacion es diferente a 0 y se determina si es par o impar y si
    // los dos numeros son pares o impares
    if (CalculateEvenOrOdd1 == 0 && CalculateEvenOrOdd2 == 0){
        printf("Ambos son pares");
    }
    else if (CalculateEvenOrOdd1 == 1 && CalculateEvenOrOdd2 == 1 ){
        printf("Ambos son impares");
    }
    else {
        printf("Los numeros son diferentes");
    }

    return 0;

}