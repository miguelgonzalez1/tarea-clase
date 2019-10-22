/******************************************************************************

3) Realizar un programa qur permita obtener el promedio de un estudiante con n notas.

*******************************************************************************/
#include <stdio.h>

void main()
{
    float nota,prom,cant,cont=1,prom1;
    printf("ingrese la cantidad de notas del estudiante:");
    scanf("%f",&cant);
    while(cont<=cant)
    {
        printf("Ingrese la nota:");
        scanf("%f",&nota);
        prom=prom+nota;
    cont++;       
    }
    prom1=prom/cant;
    printf("El promedio es %.2f",prom1);
   
}

