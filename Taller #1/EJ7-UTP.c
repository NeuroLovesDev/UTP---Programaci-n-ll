// Fecha de publicación: 16/02/2024
// Hora: 9.50 PM 
// Versión del código: V.1.0
// Autor: Ing. Andrés E. Álvarez E.
// Nombre del lenguaje utlizado: C
// Versión del lenguaje utilizado:: C11 - (ISO/IEC 9899:2011)
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad: Universidad Tecnológica de Pereira
// Programa: Ingeniería de Sistemas y Computación
// Descripción: Programa que sirve para guardar información dada, exactamente nombre, apellido y fecha de nacimiento
// Salvedad: El codigo NO permite números decimales

#include <stdio.h> 

int main ()
{ 

   char nombre[20], apellido[20];
   int fechaDeN = 0;

   // Pide, recibe y lee la cadena de caracteres que conforman el nombre y el apellido
   printf("Por favor digite su nombre: ");
   scanf("%s", nombre);
   printf("Por favor digite su apellido: ");
   scanf("%s", apellido);

   // Pide, recibe y lee el número dado
   printf("Por favor digite su año de nacimiento: ");
   scanf("%d", &fechaDeN);
   
   // Con la informacion dada llamamos a las variables que contienen nuestra cadena de caracteres y de números
   printf("%s %s %d", nombre, apellido, fechaDeN);

   return 0;
   
}