/*Leer un número e imprimir el cuadrado del antecesor de dicho número.*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num1;
    int antc;
    int cuad;

    printf("Bienvenido, este es un sistema en el cual te dire el cuadrado del antecesor del numero que me digas: ");
    printf("\nDime el numero que quieras: ");
    scanf("%i", &num1);

    antc = num1-1;
    printf("Su antecesor es %i: ", num1, antc);

    cuad = antc * antc;
    printf("\nEl cuadrado del antecesor es: %i", cuad);

    return 0;
}