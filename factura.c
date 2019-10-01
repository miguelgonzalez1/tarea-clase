
#include <stdio.h>

void main()
{
    char nombre[10], desp1[10], desp2[10];
    int cedula;
    float cantp1, cantp2, preciop1, preciop2, subtotal=0, iva, total=0, pventa1, pventa2;
    printf("ingrese el nombre del cliente:");
    scanf("%s",&nombre);
    printf("ingrese la cedula:");
    scanf("%d",&cedula);
    printf("Datos del producto 1\n");
    printf("ingrese el producto 1\n:");
    scanf("%s",&desp1);
    printf("ingrese la cantidad:");
    scanf("%f",&cantp1);
    printf("ingrese el precio:");
    scanf("%f",&preciop1);
    printf("Datos del producto 2\n");
    printf("ingrese el producto 2\n:");
    scanf("%s",&desp2);
    printf("ingrese la cantidad:");
    scanf("%f",&cantp2);
    printf("ingrese el precio:");
    scanf("%f",&preciop2);
    pventa1=cantp1*preciop1;
    pventa2=cantp2*preciop2;
    subtotal= pventa1+pventa2;
    iva= subtotal*0.12;
    total=subtotal+iva;
    printf(" ************Empresa xyz********* \n");
    printf("Cliente: %s\n",nombre);
    printf("Cedula: %d\n",cedula);
    printf("Descripcion \t cantidad \t precio \t P de venta \n");
    printf("%s \t %.2f \t %.2f \t %.2f \n ", desp1, cantp1, preciop1, pventa1);
    printf("%s \t %.2f \t %.2f \t %.2f \n ", desp2, cantp2, preciop2, pventa2);
    printf("\t \t subtotal: %.2f \n", subtotal);
    printf("\t \t iva: %.2f \n", iva);
    printf("\t \t total: %.2f \n", total);
}
