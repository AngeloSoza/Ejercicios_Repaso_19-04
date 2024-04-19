/*Escribe un programa que permita convertir temperaturas Fahrenheit a grados Celsius.  Utilice una función con parámetros.*/

#include <stdio.h>
#include <math.h>

float conversion (float gradosF);

int main(int argc, char const *argv[])
{
    float TempFh;
    float TempC;

    printf ("Dime la temperatura en grados Fahrenheit, para convertirla a Celsius: ");
    scanf("%f", &TempFh);

    TempC = conversion(TempFh);
    printf("La temperatura dada en grados Celsius equivale a %2f", TempC);

    return 0;
}

float conversion(float temperaturaFh){
    return (temperaturaFh-32)/1.8;
    
}