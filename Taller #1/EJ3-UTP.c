// Fecha de publicación: 16/02/2024
// Hora: 6.10 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que sirve para calcular el perimetro de un rectangulo

#include <stdio.h>

int main ()
{
    float largoRec, anchoRec = 0;

    // Pide, recibe y lee el largo del rectangulo
    printf("Por favor ingrese el largo del rectangulo: ");
    scanf("%f", &largoRec);

    // Pide, recibe y lee el ancho del rectangulo
    printf("Por favor ingrese el ancho del rectangulo: ");
    scanf("%f", &anchoRec);

    // Con los valores guardados hace el calculo del perimetro del rectangulo
    // y muestra en pantalla el resultado final
    printf("El perimetro de un rectangulo con largo %0.f y ancho %0.f es de %1.f", largoRec, anchoRec, 2 * (largoRec + anchoRec));

    return 0;

}