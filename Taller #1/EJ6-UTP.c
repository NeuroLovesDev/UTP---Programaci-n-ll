// Fecha de publicación: 16/02/2024
// Hora: 7.40 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que sirve para calcular las horas y minutos de los minutos que ingresemos
// Salvedad: El codigo NO permite números decimales

#include <stdio.h>

int main ()
{
    
    int horas, minutos = 0;

    // Pide, recibe y lee la cantidad de minutos
    printf("Por favor digite la cantidad de minutos: ");
    scanf("%d", &minutos);
    
    // Calculamos las horas dividiendo los minutos ingresados por 60
    horas = (minutos/60);
    
    // Calculamos los minutos multiplicando el resultado de las horas por 60, y luego lo restamos a los minutos originalmente 
    // ingresados, esto nos da los minutos restantes de la operación
    minutos = minutos - (horas * 60);

    // Con los datos guardados muestra los resultados de las operaciones
    printf("%d minutos equivalen a %d horas y %d minutos.", minutos + horas * 60, horas, minutos);

    return 0;

}