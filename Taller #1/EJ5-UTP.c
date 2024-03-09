// Fecha de publicación: 16/02/2024
// Hora: 7.14 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que sirve para ingresar horas y minutos y calcular el total de minutos.

#include <stdio.h>

int main()
{
    float horas, minutos = 0;
    
    // Pide, registra y lee la cantidad de horas 
    printf("Por favor digite la cantidad de horas: ");
    scanf("%f", &horas);
    
    // Pide, registra y lee la cantidad de minutos
    printf("Por favor digite la cantidad de minutos: ");
    scanf("%f", &minutos);

    // Con los datos guardados, calcula la cantidad de minutos y muestra en pantalla
    printf("%.0f horas y %.0f minutos equivalen a %.0f minutos.", horas, minutos, (horas*60) + minutos);

    return 0;

}