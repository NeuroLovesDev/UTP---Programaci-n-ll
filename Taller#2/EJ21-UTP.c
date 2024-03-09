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
// Descripción: Programa que permite saber si un numero es capicua

#include <stdio.h>
#include <string.h>

int main ()
{   
    // Se declara la variable number para guardar la cadena de caracteres ingresada por el usuario
    // Se declara las variables digit1 y digit2 para convertir el primer caracter a entero
    // Se declara la variable length para verificar si la longitud es correcta
    int length, digit1, digit2 = 0;
    char number[4];

    // Se pide y guarda la cadena de caracteres ingresada por el usuario
    printf("Ingrese un numero de 3 cifras: ");
    scanf("%s", number);
    
    // Se guarda la cantidad de caracteres de la variable number
    length = strlen(number);

    // Se verifica si cumple con la condicion de caracteres y si lo hace convierte el primer y ultimo caracter en enteros y
    // los compara para ver si son iguales, si lo son imprime que son capicuas, si no, imprime que no lo son
    if (length == 3){
        digit1 = number[0] - '0';
        digit2 = number[2] - '0';
        
        if (digit1 == digit2){
            printf("El numero %s es capicua.", number);
        }
        else {
            printf("El numero %s no es capicua.",number);
        }
    }
    else {
        printf("Ingrese un numero valido");
    }

    return 0;

}