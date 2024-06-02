//Desarrollar un algoritmo que ingrese un número entero positivo
//y muestre por pantalla todos sus divisores.
#include<stdio.h>

int main()
{
    int num, consulta, divisor;
    printf("Se calcular%cn los divisores del n%cmero entero que ingrese\n\n",160 , 163);
    printf("Ingrese el n%cmero:\n", 163);
    scanf("%d", &num);
    consulta=num;
    if(num>0)
     while(consulta)
     {
        divisor=num%consulta;
        if(consulta==num)
            printf("\nDivisores:\n");
        if(divisor==0)
            printf("%d\n", consulta);
        consulta--;
     }
    else
        printf("\nEl n%cmero ingresado no es positivo\n", 163);
    return 0;
}
