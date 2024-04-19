/*Escriba un programa para crear un procedimiento que reciba un valor como argumento y lo cambie de signo.*/

void cambiarSigno(int *valor){
    *valor = -(*valor);
}

int main(int argc, char const *argv[])
{
    int num;

    //Solicitar al usuario que ingrese un valor

    printf("Ingrese un valor: ");
    scanf("%d", &num);

    cambiarSigno(&num);

    //Mostrar el valor con el signo cambiado
    printf("El valor con el signo cambiado es: %d\n", num);
    return 0;
}
