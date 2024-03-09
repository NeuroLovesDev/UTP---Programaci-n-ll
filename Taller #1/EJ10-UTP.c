// Fecha de publicación: 16/02/2024
// Hora: 11.29 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que convierte mph a m/s

#include <stdio.h>

int main ()
{
    float mph, mps = 0;
    
    // Pide, recibe y lee el valor de mph
    printf("Por favor ingresar la cantidad de mph que desea convertir a m/s: ");
    scanf("%f", &mph);

    // Calcula el valor de m/s haciendo la operación de multiplicar mph por 1609.344 y dividiendolo en 3600
    mps = (mph * 1609.344) / 3600;

    // Con la información dada muestra el resultado en pantalla
    printf("%.0f mph equivale a %.2f m/s", mph, mps);

    return 0;
    
}
