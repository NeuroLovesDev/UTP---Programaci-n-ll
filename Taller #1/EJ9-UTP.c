// Fecha de publicación: 16/02/2024
// Hora: 10.29 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que recibe dos números de dos ángulos y calcula el ángulo faltante de un triángulo

#include <stdio.h>

int main ()
{
    
    float primerA, segundoA, calcularangulo = 0;
    
    // Pide, recibe y lee el valor dado del primer ángulo
    printf("Por favor digite el valor del primer angulo: ");
    scanf("%f", &primerA);
    
    // Pide, recibe y lee el valor dado del segundo ángulo
    printf("Por favor digite el valor del segundo angulo: ");
    scanf("%f", &segundoA);
    
    // Calcula el valor del tercer ángulo restando la suma del primer ángulo y el segundo ángulo a 180
    calcularangulo = 180 - (primerA + segundoA);

    // Con la información dada muestra el mensaje en pantalla
    printf("El valor del tercer angulo de un triangulo con angulos de %.0f y %.0f es de %.0f", primerA, segundoA, calcularangulo);

    return 0;

}