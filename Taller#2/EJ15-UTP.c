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
// Descripción: Programa que permite calcular un descuento dependiendo del numero de camisas
// Salvedad: El programa en los resultados resta un 1 

#include <stdio.h> 

int main ()
{
    // Se define la variable shirtNumber para guardar el numero ingresado por el usuario
    // Se define la variable price para guardar el numero ingresado por el usuario
    // Se define la variable CalculateDiscount para hacer operaciones matematicas
    int shirtNumber, price, CalculateDiscount = 0;

    // Se piden y guardan los numeros ingresados por el usuario
    printf("Ingrese el numero de camisas: ");
    scanf("%i", &shirtNumber);

    printf("Ingrese valor total de la compra: ");
    scanf("%i", &price);

    // Se determina si el usuario obtiene descuento al tener un numero de camisas compradas
    if (shirtNumber >= 3){
        CalculateDiscount = (price - (price * 0.2));
    }
    else {
        CalculateDiscount = (price - (price * 0.1));
    }

    // Se imprime el resultado y se muestra en pantalla
    printf("El valor total a pagar es %i", CalculateDiscount);

    return 0;

}