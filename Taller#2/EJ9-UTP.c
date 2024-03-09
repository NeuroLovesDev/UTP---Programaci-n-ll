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
// Descripción: Programa que permite saber la ganancia de interes y si se debe invertir

#include <stdio.h> 

int main ()
{
    // Se define las variables interest e initialcapital para guardar los numeros dados por el usuario
    // Se definen las variables CalculateInterest y CalculateBalance para operaciones matematicas
    float interest, initialcapital, CalculateInterest, CalculateBalance = 0;

    // Se piden y guardan los numeros ingresados por el usuario
    printf("Entre el interes en %%: ");
    scanf("%f", &interest);

    printf("Entre el capital en $: ");
    scanf("%f", &initialcapital);

    // Se calcula el interes final con esta operacion matematica
        CalculateInterest = (initialcapital * (interest * 0.01));

    // Se determina si es viable invertir segun los parametros y se muestra en pantalla
    if (CalculateInterest > 7000){
    
    // Se calcula el balance total al sumar el interes inicial con el final
       CalculateBalance = (CalculateInterest + initialcapital);

       printf("INVIERTA, SU SALDO SERA DE %.0f", CalculateBalance);
    }
    else { 
        printf("NO INVIERTA");
    }

    return 0;

}