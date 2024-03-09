// Fecha de publicación: 16/02/2024
// Hora: 11.55 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que asigna un valor a X para una formula matematica
// Salvedad: Este código al tener decimales periodicos no da el resultado original del ejercicio

#include <stdio.h> 
#include <math.h>

int main ()
{
    
    float valorvariable, resultado = 0;
    
    // Pide, recibe y lee el valor dado
    printf("Por favor digite el valor que le quiere asignar a X: ");
    scanf("%f", &valorvariable);

    // Calcula el resultado usando el valor dado anteriormente
    resultado = (valorvariable * (1/2) + 25) / ((sqrt(169) / sqrt(144)) + (sqrt(valorvariable) / valorvariable));
    
    // Muestra el resultado en pantalla
    printf("El resultado para un valor de %.0f es de %f", valorvariable, resultado);

    return 0;

}