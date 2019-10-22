/******************************************************************************
2) realizar un programa que ingrese un grupo de numeros y realizar la suma de los positivos
*******************************************************************************/
#include <stdio.h>

void main()
{
    int numero=1,suma1;
    while(numero!=0)
    {
        printf("Ingrese un numero:"); 
        scanf("%d",&numero);
        if(numero>0)
            suma1=suma1+numero;
        else{
        }
    }
     printf("La suma de los positivos es:%d",suma1);

    
}

