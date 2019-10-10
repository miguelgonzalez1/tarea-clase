/******************************************************************************
Una empresa clasifica a sus empleados en dos grupos de
empleados, los del grupo 1 son aquellos que laboran dentro de la misma y
desean darles un aumento de sueldo siguiendo el siguiente criterio: si el
empleado trabajó más de 40 horas, su sueldo será incrementado en $50.00, si
el empleado es mujer o es mayor de 25 años y tiene en la empresa más de 30
años su sueldo se incrementará en $800.00 y si no cumple con estas
condiciones solo se incrementa en $100.00 (esto último es independiente de
las horas trabajadas), Para los empleados del grupo 2 (los que aspiran a
ingresar a la empresa)si es mayor de 18 años y tiene más de 85 puntos en una
prueba presentada entonces será contratado. Elaborar un programa para
determinar el sueldo de una persona en el caso de los empleados del grupo 1 y
si será o no contratado en el caso de los del grupo 2. El número de cédula es
un número entero.


*******************************************************************************/

#include <stdio.h>

int main()
{
    char nombre[20],apellido[20];
    int edad,horas,tiempo,cedula,genero,op,prueba;
    printf("Ingrese el nombre:");
    scanf("%s",&nombre);
    printf("Ingrese el apellido:\n");
    scanf("%s",&apellido);
    printf("Ingrese su edad:\n");
    scanf("%d",&edad);
    printf("Escoja 1 si trabaja en esta empresa o 2 si quiere trabajar en la empresa:\n");
    scanf("%d",&op);
    if(op==1)
    {
        printf("ingrese su genero (1 para femenino y 2 para masculino):\n");
        scanf("%d",&genero);
        printf("ingrese horas trabajadas:\n");
        scanf("%d",&horas);
        printf("ingrese los años trabajados en la empresa:\n");
        scanf("%d",&tiempo);
        printf("ingrese su cedula:\n");
        scanf("%d",&cedula);
        if(genero==1 && edad>=25 && tiempo>30)
            printf("Su sueldo sera incrementado en $800.00 señor: %s",nombre);
        else if(horas>=40)
            printf("Su sueldo incrementa en $50.00 señor: %s",nombre);
        else 
            printf("Su sueldo incrementa en $100.00 señor: %s",nombre);
    }
    else if (op==2)
    {
        printf("Ingrese el total de la prueba");
        scanf("%d",&prueba);
        if(edad>=18 && prueba>=85)
            printf ("Sera contratado señor: %s",nombre);
        else
            printf("no sera contratado señor: %s",nombre);
            
    }
    return 0;
}
