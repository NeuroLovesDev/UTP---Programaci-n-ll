// Fecha de publicación: 16/02/2024
// Hora: 5:50 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que sirve para calcular el volumen de una esfera

#include <stdio.h>

int main ()
{
    float radioEsf = 0;
    
    // Pide, recibe y lee el radio de la esfera
    printf("Por favor digite el radio de la esfera: ");
    scanf("%f", &radioEsf);

    // Calcula el volumen de la esfera y muestra el resultado en pantalla
    printf("El volumen de una esfera de radio %.0f es: %.5f.", radioEsf, 4.0/3.0 * 3.1415926 * radioEsf * radioEsf *radioEsf);

    return 0;

}