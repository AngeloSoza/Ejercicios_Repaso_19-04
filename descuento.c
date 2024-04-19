/*Leer el precio de un producto y otorgar el 15% de descuento, mostrar el precio original, el descuento y el nuevo precio.*/

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float precProd;
    float descuento;
    float PrecNuevo;

    //Solicitar al usuario el precio del producto 

    printf("Dime el precio del producto que deseas: ");
    scanf("%f", &precProd);

    //Decir el despuento a aplicarse
   descuento = 0.15 * precProd;

   //Calcular el nuevo precio

    PrecNuevo = precProd - descuento;
    
    //Mostrar el precio original, descuento y el nuevo precio

    printf("\nEl precio con descuento equivale, %.2f\n", PrecNuevo);
    printf("\nEl descuento que se aplicara es de %.2f\n", descuento); 
    printf("\nEl precio original el %.2f\n", precProd);
    

    





    return 0;
}
