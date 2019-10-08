//1. Realizar un programa en C que permita ingresar por teclado los grados centígrados y Fahrenheit y realice la conversión.
//Datos de entrada: son el 1 o 2 dependiendo la conversion que quiere hacer, también ingresar o los grados centígrados o los grados fahrenheit.
//El proceso son las formulas de conversion que son F=(ºc*9/5)+32 y C=(ºF-32)*5/9
//Los datos de salida son los grados convertidos a los que seleccionamos al inicio sea ºC o ºF

#include <stdio.h>
int main()
{
    int n;
     printf("Seleccione una conversion\n"); //me pide que ingrese 1 o 2 dependiento lo que necesito
     printf("1. C  a  F\n"); //si selecciono 1 me cambia de ºC a ºF
     printf("2. F  a  C\n"); //si selecciono 1 me cambia de ºF a ºC
     scanf("%d",&n); //ingreso el numero 1 o 2
      if(n==1){  //si es 1...
          float c;
          printf("Ingresa grados centigrados\n"); //me dice vque ingrese los grados ºc
           scanf("%f",&c); //ingreso el valor
          double f=(c*9/5)+(32); //la formula para el cambio de ºC a ºF
          printf("%0.2fC equivale a %0.2lfF",c,f); //me da en la pantalla la respuesta
      }else{ // si el numero es 2...
          float f;
          printf("Ingresa grados fahrenheit\n");//me dice que ingrese los grados ºF
          scanf("%f",&f); //ingreso el valor
          double c=(f-32)*5/9; //formula para el cambio de ºF a ºC
          printf("%0.2fF equivale  a %0.2lfC",f,c); //me muestra el resultado en pantalla
      }
    return 0;
}
