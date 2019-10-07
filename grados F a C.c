#include <stdio.h>

int main(void) {
    float far,c; //esta es la declaracion de variables
    printf("Ingrese los grados Farenheit:"); //en esta linea el computador nos pide ingresar los grados ºF
    scanf("%f",&far); //ingresamos los grados ºF
    c=(float) 5/9*(far-32); //esta es la formula para cambiar de grados ºF a ºC
    printf("%.2f grados Farenheit es igual a %.f grados Centigrados \n" ,far,c); //aca nos muestra la conversion exacta
	return 0;
}