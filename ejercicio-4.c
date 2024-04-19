/*Programa para crear un procedimiento que reciba dos 
variables reales como argumentos e intercambiar sus valores.*/

#include <stdio.h>
void intercambio(int v1, int v2);
int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf ("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    intercambio (num1, num2);
    return 0;
}

void intercambio(int v1, int v2){
    printf("%i, %i\n", v2, v1);
}
