/*Escriba un programa para capturar por teclado el número de horas trabajadas 
y que envíe dicho valor a una función que determine y retorne el valor a pagar, 
considerando que las primeras 160 horas trabajadas serán a $6.5 y el resto de horas a $7.5.*/
#include <stdio.h>

float calcularPago(int horasTrabajadas);

int main() {
    int horas;
    float pago;

    // Captura el número de horas trabajadas por teclado
    printf("Ingrese el número de horas trabajadas: ");
    scanf("%d", &horas);

    // Calcula el pago llamando a la función calcularPago
    pago = calcularPago(horas);

    // Muestra el resultado
    printf("El pago correspondiente es: $%.2f\n", pago);

    return 0;
}

// Función para calcular el valor a pagar
float calcularPago(int horasTrabajadas) {
    float tarifaNormal = 6.5; // Tarifa para las primeras 160 horas
    float tarifaExtra = 7.5; // Tarifa para horas extras
    float pagoTotal;

    // Verifica si las horas trabajadas son menores o iguales a 160
    if (horasTrabajadas <= 160) {
        pagoTotal = horasTrabajadas * tarifaNormal;
    } else {
        // Calcula las horas normales y las horas extras
        int horasNormales = 160;
        int horasExtras = horasTrabajadas - horasNormales;

        // Calcula el pago por las horas normales y las horas extras
        pagoTotal = horasNormales * tarifaNormal + horasExtras * tarifaExtra;
    }

    return pagoTotal;
}
