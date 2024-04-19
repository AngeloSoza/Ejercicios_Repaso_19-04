/*Programa que permita leer el valor correspondiente a una distancia en millas y la visualice expresada en metros.  Sabiendo que 1 milla marina equivale a 1852 metros. Utiliza una función sin parámetros.*/

#include <stdio.h>

// Función para convertir millas a metros
void convertirMillasAMetros() {
    float millas, metros;
    const float MILLA_A_METRO = 1852; // Valor de una milla en metros

    // Solicitar al usuario que ingrese la distancia en millas
    printf("Ingrese la distancia en millas: ");
    scanf("%f", &millas);

    // Convertir millas a metros
    metros = millas * MILLA_A_METRO;

    // Mostrar el resultado de la conversión
    printf("%.2f millas equivale a %.2f metros.\n", millas, metros);
}

int main() {
    // Llamar a la función para convertir millas a metros
    convertirMillasAMetros();

    return 0;
}

