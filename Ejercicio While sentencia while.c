/******************************************************************************
Realizar un programa en C que al recibir como datos un grupo de n�meros naturales positivos,
calcule el cuadrado de estos n�meros. Imprima el cuadrado del n�mero y al final la suma de
los cuadrados.
Datos: NUM1, NUM2, NUM3,..., 0
Donde: NUMi es una variable de tipo entero que representa al n�mero positivo i.
El fin de los datos est� dado por 0. (do while)

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int num,cuadrado,suc;
    printf("Ingrese el numero o 0 para tener la suma de los cuadrados:\n");
    scanf("%d",&num);
    while (num)
    {
        cuadrado=pow (num, 2);
        printf("%d El cubo es %d\n",num,cuadrado);
        suc=suc+cuadrado;
        printf("Ingrese el numero o 0 para tener la suma de los cuadrados:\n");
        scanf("%d",&num);
    }
    printf("La suma de los cuadrados es %d",suc);
    return 0;
}

