/******************************************************************************
Realizar un programa en C que permita ingresar un grupo de numeros positivos y verificar si es par o impar
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num=1;
    while(num>0)
    {
        printf("Ingrese un numero:");
        scanf("%d",&num);
        while(num<0)
        {
            printf("Ingrese un numero positivo");
            scanf("%d",&num);
        }
        if(num%2==0&&num!=0)
            printf("par\n");
        else if(num%2==1&&num!=0)
            printf("Impar\n");
    }
    return 0;
}

