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
// Descripción: Programa que permite saber el salario segun las horas trabajadas 

#include <stdio.h>

int main ()
{
    // Se declara la variable workHour para guardar el numero dado por el usuario
    // Se declara la variable Salary para hacer operaciones matematicas
    int workHour, Salary = 0;

    // Se pide y guarda el numero ingresado por el usuario
    printf("Ingrese las horas trabajadas: ");
    scanf("%i", &workHour);

    // Se determina si el numero ingresado es mayor a 40 y se realizan las operaciones para determinar el salario final
    if (workHour > 40){
        Salary = (16 * 40) + ((workHour - 40)* 20);
    }
    else {
        Salary = (16 * workHour);
    }
    
    // Se imprime el resultado de estas operaciones y se muestra en pantalla
    printf("El salario total es $%i", Salary);

    return 0;
}