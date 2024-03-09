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
// Descripción: Programa que permite calcular un descuento si ingresamos una clave
// Salvedad: El programa no funcionara correctamente si ingresamos una clave que no sea numerica.

#include <stdio.h>

int main () 
{
    // Se declara la variable password para guardar un numero ingresado por el usuario
    // Se declara la variable originalPrice para guardar un numero ingresado por el usuario
    // Se declara la variable CalculateDiscount para hacer operaciones matematicas
    int password;
    float originalPrice, CalculateDiscount = 0;

    // Se piden y se guardan los numeros ingresados por el usuario
    printf("Ingrese la clave numerica: ");
    scanf("%i", &password);

    printf("Ingrese el precio: ");
    scanf("%f", &originalPrice);

    // Se determina si el usuario uso una clave y se aplica el respectivo descuento, si no uso clave
    // no se aplica nada
    if (password == 1){
        CalculateDiscount = (originalPrice - (originalPrice * 0.1));
        printf("Su descuento ha sido del 10%% al ingresar la clave: %i, el precio original es: %.0f y" 
               " con descuento ha sido de: %.0f", password, originalPrice, CalculateDiscount);
    }
    else if (password == 2){
        CalculateDiscount = (originalPrice - (originalPrice * 0.2));
        printf("Su descuento ha sido del 20%% al ingresar la clave: %i, el precio original es: %.0f y" 
               " con descuento ha sido de: %.0f", password, originalPrice, CalculateDiscount);
    }
    else {
        printf("Usted no ha ingresado ninguna clave correcta, el precio a pagar es %.0f", originalPrice);
    }

    return 0;

}