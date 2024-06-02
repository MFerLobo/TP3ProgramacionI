//Desarrollar un algoritmo que ingrese números hasta leer un cero, calcular y mostrar
//por pantalla cuántos de ellos son negativos y cuántos son positivos.
#include<stdio.h>

int main()
{
    int num=1, pos=0, neg=0;
    printf("Contador de n%cmeros positivos y negativos. Cuando ingrese un 0 termina la contabilizaci%cn\n\n", 163, 162);

    while(num)
    {
     printf("Ingrese un n%cmero:\n", 163);
     scanf("%d", &num);
     fflush(stdin);
     if (num>0)
        pos++;
     else if(num)
            neg++;
    }
    printf("Se ingresaron: %d n%cmeros positivos\n", pos, 163);
    printf("               %d n%cmeros negativos\n", neg, 163);
    return 0;
}
