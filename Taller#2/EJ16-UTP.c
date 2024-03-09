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
// Descripción: Programa que permite decidir y calcular el presupuesto de una empresa
// Salvedad: El programa en los resultados resta un 1 

#include <stdio.h> 

int main ()
{   
    // Se declaran las variables partsnumber y partCost para guardar el numero ingresado por el usuario
    // Se declaran las variables InvestedAmount, BankLoanValue, ManufacturerCreditValue y ManufacturerInterest
    // para operaciones matematicas
    float partsNumber, partCost, InvestedAmount, BankLoanValue, ManufacturerCreditValue, ManufacturerInterest = 0;
    
    // Se piden y guardan los numeros dados por el usuario
    printf("Ingrese el numero de piezas: ");
    scanf("%f", &partsNumber);

    printf("Ingrese el costo de las piezas: ");
    scanf("%f", &partCost);

    // Se determina si el valor excede los 500000 y se hacen calculos segun la situacion, se imprime en pantalla la informacion
    if (partCost >= 500000){
       
       InvestedAmount = (partCost * 0.55);
       BankLoanValue = (partCost * 0.3);
       ManufacturerCreditValue = (partCost * 0.15);
       ManufacturerInterest = (ManufacturerCreditValue * 0.2);

       printf("El numero de piezas son: %.0f \nEl dinero propio invertido es: $%.0f\nEl dinero pedido al banco es: $%.0f\n"
              "El credito pedido al fabricante es: $%.0f\nEl interes del fabricante es: $%.0f",partsNumber, InvestedAmount, 
               BankLoanValue, ManufacturerCreditValue, ManufacturerInterest);  

    } 
    else {

        InvestedAmount = (partCost * 0.7);
        ManufacturerCreditValue = (partCost * 0.3);
        ManufacturerInterest = (ManufacturerCreditValue * 0.2);

        printf("El numero de piezas son: %.0f\nEl dinero propio invertido es: $%.0f\nEl credito pedido al fabricante es:" 
               " $%.0f\nEl interes del fabricante es. $%.0f", partsNumber, InvestedAmount, ManufacturerCreditValue, 
               ManufacturerInterest);
    }

    return 0;

}