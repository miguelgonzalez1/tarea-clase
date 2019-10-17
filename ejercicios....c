/******************************************************************************
Realizar un programa que permita generar n numeros enteros
*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont=1,nnum;
    printf("Cuantos numeros va a ingresar:");
    scanf("%d",&nnum);
    case 1:
        while(cont<=nnum)
        {
            printf("%d\n",cont);
            cont++;
        }
    break;
    case 2:
        int
    break;
    case 3:
        int cont=1,nnum,numeros;
        printf("Cuantos numeros va a ingresar:");
        scanf("%d",&nnum);
        while(cont<=nnum);
        {
            printf("ingrese un numero");
            scanf("%d",&numeros);
            suma=suma+numeros;
            cont++;
            
        }
        printf("la suma de %d numeros es %d\n",nnum,suma);
    break;
    case 4:
        int cont=1,tabla,lim,mult=0;
        printf("ingrese la tabla");
        scanf("%d",&tabla);
        printf("ingrese el limite");
        scanf("%d",&lim);
        while (cont<=lim)
        {
            mult=tabla*cont;
            printf("%dx%d=%d\n",tabla,cont,mult);
            cont++;
    break; 
        }
    
    
    return 0;
}

