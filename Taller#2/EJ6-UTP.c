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
// Descripción: Programa que determina si un numero es mayor a 100
// Salvedad: No se garantiza el correcto funcionamiento del programa si se utiliza algo diferente a un numero

#include <stdio.h>

int main()
{
    // Se declara la variable number apara guardar el numero ingresado por el usuario
    float number = 0;

    // Se pide y guarda el numero ingresado por el usuario
    printf("Ingrese un numero: ");
    scanf("%f", &number);

    // Se determina si el numero es mayor o menor a 100
    if (number >= 100){
        printf("El numero es mayor o igual a 100");
    }
    else {
        printf("El numero no es mayor a 100");
    }
    
    return 0;

}