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
// Descripción: Programa que permite saber el comprador obtiene descuento cumpliendo unos parametros especificos

#include <stdio.h>

int main ()
{
    // Se define la variable purchaseValue para guardar el numero que ingresa el usuario
    // Se define la variable CalculateFinalValue para hacer operaciones matematicas
    float purchaseValue, CalculateFinalValue = 0;

    // Se pide y guarda el numero ingresado por el usuario
    printf("Ingrese el valor de su compra: ");
    scanf("%f", &purchaseValue);
    
    // Se determina si el valor de la compra es mayor a 100000 y aplica el descuento del 20%, se imprime en pantalla el resultado
    if (purchaseValue >= 100000){
        
     // Se calcula el valor final de la compra teniendo en cuenta que aplica el 20% de descuento
     CalculateFinalValue = (purchaseValue - (purchaseValue * 0.2));

     printf("Usted obtiene un 20%% de descuento, su valor a pagar es %.0f", CalculateFinalValue);
    }
    else{
        printf("Su valor a pagar es de %.0f", purchaseValue);
    }

    return 0;
}