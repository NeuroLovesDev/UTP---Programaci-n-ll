// Fecha de publicación: 16/02/2024
// Hora: 11.55 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que convierte horas, minutos y segundos a milisegundos

#include <stdio.h>

int main ()
{
    
    float segundos, minutos, horas, milisegundos;
    
    // Pide, recibe y lee el valor dado en horas
    printf("Por favor digite el numero de horas, minutos y segundos que desea convertir a milisegundos\n\nDigite Horas: ");
    scanf("%f", &horas);
    
    // Pide, recibe y lee el valor dado en minutos
    printf("Digite minutos: ");
    scanf("%f", &minutos);
    
    // Pide, recibe y lee el valor dado en minutos
    printf("Digite segundos: ");
    scanf("%f", &segundos);

    // Calcula con los valores dados anteriormente los milisegundos
    milisegundos = (horas * 3600000) + (minutos * 60000) + (segundos * 1000);

    // Con la información dada muestra el resultado en pantalla
    printf("La cantidad de milisegundos para %.0f hora, %.0f minutos y %.0f segundos es de %.0f milisegundos", 
     horas, minutos, segundos, milisegundos);

    return 0;

}