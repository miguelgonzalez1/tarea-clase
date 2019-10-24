/******************************************************************************
Realizar un programa en C que al recibir como datos un grupo de números naturales positivos,
calcule el cuadrado de estos números. Imprima el cuadrado del número y al final la suma de
los cuadrados.
Datos: NUM1, NUM2, NUM3,..., 0
Donde: NUMi es una variable de tipo entero que representa al número positivo i.
El fin de los datos está dado por 0. (do while)

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

