//Desarrollar un algoritmo que ingrese dos n�meros enteros, (primero < segundo),
//validar y muestre por pantalla los n�meros del primer n�mero al segundo
#include<stdio.h>

int main()
{
    int primero, segundo;
    printf("Ingrese un n%cmero entero:\n", 163);
    scanf("%d", &primero);
    printf("Ingrese otro entero mayor al ingresado anteriormente:\n");
    scanf("%d", &segundo);
    if(primero<segundo)
        printf("\n%d \n%d\n", primero, segundo);
    else
        printf("\nNo cumpli%c la consigna >:(\n", 162);
    return 0;
}
