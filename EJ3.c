//Desarrollar un algoritmo que ingrese 10 números enteros y
//muestre por pantalla un mensaje únicamente cuando son positivos
#include<stdio.h>

int main()
{
    int num, aux=1, i=0;
    while(i<10)
    {
        printf("Ingrese un n%cmero entero\n", 163);
        scanf("%d", &num);
        if(num<0)
            aux=num;
        i++;
    }
    if(aux>0)
        printf("Los enteros ingresados son positivos\n");
    return 0;
}
