/*Calcular el cubo de un número*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int respuesta;
    printf("Bienvenido, esto es un sistema para el calculo del cubo de un numero\n");
    printf("Digame el primer numero, por favor: ");
    scanf("%i", &num1);

    respuesta = num1 * num1 * num1;

    printf("\n %i elevado al cubo, da como resultado a: %i", num1, respuesta);

    return 0;
}
