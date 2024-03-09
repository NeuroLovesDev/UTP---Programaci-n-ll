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
// Descripción: Programa que permite calcular el valor del producto y deteminar si obtiene obsequio

#include <stdio.h>

int main()
{   
    // Se declaran la variables boughtProduct e initialValue para guardar los numeros ingresados por el usuario
    // Se declaran las variables discountValue, totalValue y giftProduct para hacer operaciones matematicas
    int boughtProduct, initialValue, discountValue, totalValue, giftProduct = 0;
    
    // Se pide y guardan los numeros ingresados por el usuario
    printf("Ingrese la cantidad de producto comprado: ");
    scanf("%i", &boughtProduct);

    printf("Ingrese el valor total de la compra: ");
    scanf("%i", &initialValue);
    
    // Se determina si se obtiene descuento segun la cantidad comprada y se determina si obtiene obsequio
    if (boughtProduct == 3){
        discountValue = (initialValue * 0.15);
        totalValue = (initialValue - (initialValue * 0.15));

        printf("El monto de compra es: %i \nEl total a pagar es: $%i\nEl descuento ha sido de: $%i\n"
               "No se ha recibido obsequio", boughtProduct, totalValue, discountValue);
        
    }
    else if (boughtProduct < 3){
        discountValue =(initialValue * 0.10);
        totalValue = (initialValue - (initialValue * 0.10));

        printf("El monto de compra es: %i \nEl total a pagar es: $%i\nEl descuento ha sido de: $%i\n"
               "No se ha recibido obsequio", boughtProduct, totalValue, discountValue);

    }
    else {
        discountValue = (initialValue * 0.15);
        totalValue = (initialValue - (initialValue * 0.15));
        giftProduct = (boughtProduct - 3);

        printf("El monto de compra es: %i \nEl total a pagar es: $%i\nEl descuento ha sido de: $%i\n"
               "Se ha recibido %i de producto de obsequio", boughtProduct, totalValue, discountValue, giftProduct);
    }

    return 0;

}