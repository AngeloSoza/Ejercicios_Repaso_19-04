/*Leer dos numeros, mostrar el primer número elevado a la 4 potencia y el segundo número elevado al cuadrado.*/
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int cuaPot;
    int cuadrado;

    printf("Dime el primer numero: ");
    scanf("%d", &num1);

    cuaPot = num1 * num1 * num1 * num1;
    printf("El primer numero elevado a la cuarta potencia equivale a %d", cuaPot);

    printf ("\nDime un segundo numero: ");
    scanf("\n%d", &num2);
    cuadrado = num2 * num2;
    printf("\nEl cuadrado del segundo numero equivale a %d", cuadrado);
    return 0;
}
