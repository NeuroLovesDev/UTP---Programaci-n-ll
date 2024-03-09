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
// Descripción: Programa que permite calcular el monto a pagar segun la distancia recorrida

#include <stdio.h>

int main ()
{
    // Se declara la variable kmTraveled para guardar el numero ingresado por el usuario
    // Se declara la variable totalValue e ivaValue para operaciones matematicas
    float kmTraveled, totalValue, ivaValue = 0;
    
    // Se pide y guarda el numero ingresado por el usuario
    printf("Ingrese la distancia en Km: ");
    scanf("%f", &kmTraveled);

    // Se calcula el valor del IVA
    ivaValue =  (400000*0.20);

    // Se determina que operaciones se usaran dependiendo de la distancia recorrida
    if (kmTraveled <= 300){
        totalValue = 400000;
    }
    else if (kmTraveled >=1000){
        totalValue = 400000 + 15000 * (kmTraveled - 300);
    }
    else{
        totalValue = 400000 + 15000 * 700 + 10000 * (kmTraveled - 1000);
    }

    // Se calcula el valor del IVA
    totalValue += ivaValue;

    // Se imprime el resultado, se muestra en pantalla
    printf("El monto a pagar es $%.2f", totalValue);

    return 0; 

}