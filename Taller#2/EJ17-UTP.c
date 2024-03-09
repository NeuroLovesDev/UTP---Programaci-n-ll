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
// Descripción: Programa que permite calcular el IMC de una persona
// Salvedad: La altura debe ser ingresada en metros

#include <stdio.h> 

int main ()
{
    // Se declaran las variables weight y height para guardar los numeros ingresados por el usuario
    // Se declara la variable Bmi para operaciones matematicas
    float weight, height, Bmi  = 0;

    // Se pide y guardan los numeros ingresados por el usuario
    printf("Ingrese su peso en Kg: ");
    scanf("%f", &weight);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &height);

    // Se calcula el BMI con operaciones matematicas
    Bmi = (weight / (height * height));

    // Se determina segun el la variable Bmi en que nivel de peso se encuentra el usuario
    if (Bmi < 16){
        printf("Usted esta en criterio de ingreso a hospital, su IMC es: %.1f", Bmi);
    }
    else if (Bmi >= 16 && Bmi < 17){
        printf("Usted esta en infrapeso, su IMC es: %.1f", Bmi);
    }
    else if (Bmi >=17 && Bmi < 18){
        printf("Usted esta en bajo peso, su IMC es: %.1f", Bmi);
    }
    else if (Bmi >=18 && Bmi < 25){
        printf("Usted esta en peso normal, su IMC es: %.1f", Bmi);
    }
    else if(Bmi >=25 && Bmi < 30){
        printf("Usted esta en sobrepeso, su IMC es: %.1f", Bmi);
    }
    else if(Bmi >=30 && Bmi < 35){
        printf("Usted esta en sobrepeso cronico, su IMC es: %.1f", Bmi);
    }
    else if(Bmi >=35 && Bmi < 40){
        printf("Usted esta en obesidad premorbida, su IMC es: %.1f", Bmi);
    }
    else if(Bmi >= 40){
        printf ("Usted esta en obesidad morbida, su IMC es: %.1f", Bmi);
    }

    return 0;
}