/*Leer el nombre de una persona e imprimir el siguiente saludo: "Hola nombrePersona"*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nombres[30];

    printf("Dime tus nombres: ");
    scanf("%[^\n]", nombres);

    printf("\nHola %s", nombres);

    return 0;
}




