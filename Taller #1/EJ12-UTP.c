// Fecha de publicación: 16/02/2024
// Hora: 12.20 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que representa el problema aritmetico dado en el ejercicio
// Salvedad: Este código al tener decimales periodicos no da el resultado original del ejercicio
// ya que el PC no agarra todos los decimales periodicos lo redondea, el resultado del ejercicio da 0.656925
// pero en consola da 0.631579

#include <stdio.h> 
#include <math.h>    

int main ()
{
    
    float valorresultado = 0;

    // Se calcula la operación 
    valorresultado = (((17/11) + (23/2)) / ((943/120) + pow(144,0.5)));

    // Se muestra en pantalla el resultado
    printf("El valor es %f", valorresultado);

    return 0;

}