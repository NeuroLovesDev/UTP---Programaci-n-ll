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
// Descripción: Programa que permite determinar el mes del año segun un numero

#include <stdio.h>

int main ()

{
    // Se declara la variable number para guardar el numero recibido por el usuario
    int number = 0;

    // Se pide y guarda el numero ingresado por el usuario
    printf("Este programa, lee un numero entre [1 y 12] e imprime el mes que"
           "le corresponde en el año. Referencia: 1=Enero. 12=Diciembre");
    printf("\nEntre un numero: ");
    scanf("%i", &number);

    // Con el numero ingresado se determina el mes del año y se imprime en pantalla
    if (number == 1){
        printf("El mes es enero");
    }
    else if (number == 2){
        printf("El mes es febrero");
    }
    else if (number == 3){
        printf("El mes es marzo");
    }
    else if (number == 4){
        printf("El mes es abril");
    }
    else if (number == 5){
        printf("El mes es mayo");
    }
    else if (number == 6){
        printf("El mes es junio");
    }
    else if (number == 7){
        printf("El mes es julio");
    }
    else if (number == 8){
        printf("El mes es agosto");
    }
    else if (number == 9){
        printf("El mes es septiembre");
    }
    else if (number == 10){
        printf("El mes es octubre");
    }
    else if (number == 11){
        printf("El mes es noviembre");
    }
    else if (number == 12){
        printf("El mes es diciembre");
    }    
    else {
        printf("El numero no es valido");
    }

    return 0;

}
