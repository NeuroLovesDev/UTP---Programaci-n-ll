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
// Descripción: Programa que pide 3 numeros y verifica si los dos primeros numeros multiplicados da
// el tercer numero

#include <stdio.h> 

int main ()
{
    // Se declaran las variables number1, number2 y number3 para guardar los numeros entregados por el usuario
    // Se declara la variable resultnumber para guardar el resultado de la operacion
    int number1, number2, number3, CalculateNumber = 0;

    // Se pide y guarda los numeros ingresados por el usuario
    printf("Ingrese el primer numero: ");
    scanf("%i", &number1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &number2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &number3);

    // Se calcula la operacion de los dos numeros ingresados
    CalculateNumber = (number1 * number2);
    
    // Se determina si el resultado de la operacion es igual al tercer numero e imprime en pantalla
    if (CalculateNumber == number3){
        printf("El resultado de %i por %i SI es igual a %i", number1, number2, number3);
    }
    else {
        printf("El resultado de %i por %i NO es igual a %i, es %i", number1, number2, number3, CalculateNumber);
    }

    return 0;

}