//Desarrollar un algoritmo que ingresa un número entero mayor o igual cero (validar)
//y luego muestre por pantalla el factorial del mismo
#include<stdio.h>

int main()
{
    int num, factorial=1;
    printf("Ingrese un entero mayor o igual a 0:\n");
    scanf("%d", &num);
    if(num>=0)
        {
            printf("Factorial de %d (%d!): ", num, num);
            while(num)
            {
             factorial*=num;
             num--;
            }
            printf("%d\n", factorial);
        }
    else
        printf("N%cmero ingresado no v%clido\n", 163, 160);
    return 0;
}
