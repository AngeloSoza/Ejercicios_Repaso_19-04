/*Programa que permita leer el valor correspondiente a una distancia en kilómetros y las visualice expresadas en metros. Utiliza una función.*/
#include <stdio.h>

int conversion(int km);

int main(int argc, char const *argv[])
{
    int km, metros;
    
    //Prefuntar al usuario que ingrese los kilometros
    printf("Ingresa los kilometros: ");
    scanf("%i", &km);

    //Conversion
    metros = conversion(km);

    //Mostrar resultadio de la conversion
    printf("La conversion de km a metros, equivale a: %i", metros);

    return 0;
}

int conversion(int km){
    return km * 1000;
}
