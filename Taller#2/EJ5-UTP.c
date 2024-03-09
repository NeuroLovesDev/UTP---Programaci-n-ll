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
// Descripción: Programa que calcula el sueldo mensual y el aumento de un trabajador segun los
// años trabajados en la empresa
// Salvedad: Las operaciones al dar un numero periodico pueden no ser exactas debido
// que el programa interpreta los numeros periodicos de diferente manera

#include <stdio.h>

int main ()
{
    // Se declara la variable timeCompany para guardar el numero ingresado por el usuario
    // Se declara la variable salary para determinar que guardará numeros flotantes
    int timeCompany = 0;
    float salary = 0;
    
    // Se pide y se guarda el numero ingresado por el usuario
    printf("Este programa leyendo por teclado la antiguedad en años, calcula el sueldo mensual que le corresponde al trabajador "
           "de una empresa que cobra 40.000 euros anuales, el programa "
           "debe realizar los calculos en funcion de los siguientes criterios: "
           "\na. Si lleva mas de 10 años en la empresa se le aplica un aumento del 10%%. "
           "\nb. Si lleva menos de 10 años pero mas que 5 se le aplica un aumento del 7%%. "
           "\nc. Si lleva menos de 5 años pero mas que 3 se le aplica un aumento del 5%%. "
           "\nd. Si lleva menos de 3 años se le aplica un aumento del 3%%. ");
    printf("\n\nEntre el numero de años de antiguedad del trabajador: ");
    scanf("%i", &timeCompany);
    
    // Se determina segun el numero dado por el usuario el aumento de sueldo que se dará y se realiza la operación
    if (timeCompany > 10){
        salary = (40000/12) + ((40000/12)*0.1);
    }
    else if (timeCompany <= 10 || timeCompany > 5){
        salary = (40000/12) + ((40000/12)*0.07);
    }
    else if  (timeCompany <= 5 || timeCompany > 3){
        salary = (40000/12) + ((40000/12)*0.05);
    }
    else if (timeCompany < 3){
        salary = (40000/12) + ((40000/12)*0.03);
    }
    
    // Se imprime el resultado de la operacion y se muestra en pantalla
    printf("El sueldo mensual es %.2f euros", salary);

    return 0;

}