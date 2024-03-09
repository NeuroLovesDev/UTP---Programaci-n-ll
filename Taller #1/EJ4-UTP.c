// Fecha de publicación: 16/02/2024
// Hora: 6.55 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que sirve para convertir Km/H a Mph

#include <stdio.h>

int main()
{
    float kmh = 0;
    
    // Pide, recibe y lee los Km/h
    printf("Por favor digite cuantos Km/h quiere convertir a mph: ");
    scanf("%f", &kmh);
    
    // Calcula y convierte a mph y muestra en pantalla
    printf("%.0f Km/h equivalen a %.2f mph", kmh, kmh * 0.621371);

    return 0;

}