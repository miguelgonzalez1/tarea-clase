/******************************************************************************
Realizar un programa en C que permita ingresar n numeros postivos y verifique si es par o impar
*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont=1,cantnum,num;
    printf("Ingrese la cantidad de numeros:");
    scanf("%d",&cantnum);
    while(cont<=cantnum)
    {
        printf("Ingrese un numero:");
        scanf("%d",&num);
        while(num<0)
        {
            printf("Ingrese un numero positivo");
            scanf("%d",&num);
        }
        if(num%2==0)
            printf("par\n");
        else 
            printf("Impar\n");
    cont++;       
    }
    return 0;
}

