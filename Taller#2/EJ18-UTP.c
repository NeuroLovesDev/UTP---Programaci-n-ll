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
// Descripción: Programa que sirve para calcular el precio a pagar de un estacionamiento


#include <stdio.h>

int main()
{
    // Se declara la variable timeSpend para guardar un numero ingresado por el usuario
    // Se declara la variable CalculateHourValue para hacer una operacion matematica
    int timeSpend, CalculateHourValue = 0;

    // Se pide y guarda el numero ingresado por el usuario
    printf("Ingrese las horas: ");
    scanf("%i", &timeSpend);

    // Se calcula el valor a pagar segun el numero ingresado
    CalculateHourValue = (timeSpend * 1800);

    // Se imprime el resultado y se muestra en pantalla
    printf("El valor a cobrar es de %i", CalculateHourValue);

    return 0;

}