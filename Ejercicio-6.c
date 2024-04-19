/*Escribe un programa que permita introducir una medida expresada en centímetros y la convierta en pulgadas. (1 pulgada=2.54 centímetros). Utilizar un procedimiento para el cálculo indicado en este problema.*/

#include <stdio.h>
#include <math.h>

void ConvertirPulgadas(float centimetros){
//Convertir centimetros a pulgadas
float pulgadas = centimetros / 2.54;
printf("%.2f centimetros equivale a %.2f pulgadas\n", centimetros, pulgadas);
}

int main(int argc, char const *argv[])
{
    float MedidaCentimetros;

    //Pedir alusuario que le brinde una medida en centimetros
    printf("Dime la medida en centimetros: ");
    scanf("%f", &MedidaCentimetros); 

    ConvertirPulgadas(MedidaCentimetros);
    return 0;
}


