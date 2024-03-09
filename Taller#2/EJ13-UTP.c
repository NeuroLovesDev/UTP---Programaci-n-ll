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
// Descripción: Programa que permite calcular las calorias dependiendo de la actividad

#include <stdio.h>
#include <string.h>

int main() 
{
    // Se declara la variable activityTime para guardar el numero ingresado por el usuario
    // Se declara la variable CalculateCalories para hacer operaciones matematicas
    // Se declara la variable activityType para guardar la cadena de caracteres ingresada por el usuario
    float activityTime, CalculateCalories = 0;
    char activityType[10];

    // Se pide y se guarda la cadena de caracteres ingresada por el usuario
    printf("Ingrese el tipo de actividad: (Dormido - Sentado): ");
    scanf("%s", activityType);

    // Se pide y se guarda el numero ingresado por el usuario
    printf("Ingrese el tiempo de actividad en minutos: ");
    scanf("%f", &activityTime);

    // Se determina que operacion se ejecutara dependiendo de la cadena de caracteres ingresada
    // por el usuario y se realiza la operacion matematica
    if (strcmp(activityType, "Dormido") == 0) {
        CalculateCalories = (activityTime * 1.08);
    }
    else if (strcmp(activityType, "Sentado") == 0) {
        CalculateCalories = (activityTime *1.66);
    }
    else {
        printf("Los datos ingresados son incorrectos");
    }
    
    // Se imprime el resultado en pantalla
    printf("El numero de calorias consumidas es: %.1f", CalculateCalories);

    return 0;
}