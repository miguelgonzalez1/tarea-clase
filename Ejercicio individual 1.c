/******************************************************************************

1) Realizar un programa en C que permita ingresar n numeros y realice la suma de los positivos

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=0,cantidad,numero,suma1;
    printf("Ingrese la cantidad de numeros");
    scanf("%d",&cantidad);
    while(cont!=cantidad)
    {
        printf("Ingrese un numero:");
        scanf("%d",&numero);
        if(numero>0)
            suma1=numero+suma1;
        else{
        }
    cont++;
    }
    printf("La suma es:%d",suma1);
}

