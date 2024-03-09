// Fecha de publicación: 16/02/2024
// Hora: 10.29 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que recibe dos números y completa 4 operaciones aritméticas (Suma, resta, multiplicación y división)

#include <stdio.h>

int main ()
{
   float primerN, segundoN, suma, resta, multiplicacion, division = 0;

   // Pide, recibe y lee el primer número
   printf("Por favor digite el primer numero: ");
   scanf("%f", &primerN);

   // Pide, recibe y lee el segundo número
   printf("Por favor digite el segundo numero: ");
   scanf("%f", &segundoN);

   // Realiza las operaciones aritméticas y las guarda en variables
   suma = primerN + segundoN; 
   resta = primerN - segundoN;
   multiplicacion = primerN * segundoN;
   division = primerN / segundoN;

   // Con la información dada muestra en pantalla el resultado
   printf("Suma: %.0f \nResta: %.0f \nMultiplicacion: %.0f \nDivision: %.1f \n", suma, resta, multiplicacion, division);

   return 0;    

}
