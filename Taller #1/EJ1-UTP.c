// Fecha de publicación: 16/02/2024
// Hora: 5:20 PM 
// Versión del código: V.1.1
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que sirve para convertir grados centigrados a fahrenheit

#include <stdio.h>

int main()
{

    float gradosC = 0;
    
    // Recibe y lee la temperatura en °C
    printf("Por favor digite centigrados a convertir a Fahrenheit: ");
    scanf("%f", &gradosC);

    // Calcula la temperatura en °F, nos muestra el resultado del calculo
    printf("%.1f °C son %.1f grados Fahrenheit.", gradosC, gradosC*9/5+32);

    return 0;

}