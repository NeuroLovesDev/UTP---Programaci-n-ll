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
// Descripción: Programa que permite saber si un estudiante aprueba o no

#include <stdio.h>

int main()
{
   // Se definen las variables grade1, grade2 y grade3 para guardar los numeros ingresados por el usuario
   // Se define la variable CalculateGrades para operaciones matematicas
   float grade1, grade2, grade3, CalculateGrades = 0;

   // Se piden y se guardan los numeros dados por el usuario
   printf("Ingrese la nota #1: ");
   scanf("%f", &grade1);

   printf("Ingrese la nota #2: ");
   scanf("%f", &grade2);

   printf("Ingrese la nota #3: ");
   scanf("%f", &grade3);

   // Se calcula el promedio de los numeros dado por el usuario y se guarda 
   CalculateGrades = ((grade1 + grade2+ grade3)/ 3);

   // Se determina si el estudiante tiene un promedio mayor de 3.0 o menor y se imprime el resultado en pantalla
   if (CalculateGrades >= 3.0){
     printf("El estudiante aprobo");
   }
   else { 
    printf("El estudiante reprobo");
   }
   
   return 0;

}