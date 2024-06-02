//Desarrollar un algoritmo que, ingrese un número entero entre 0 y 10 (validar este
//valor) y muestre por pantalla la tabla de multiplicar del número ingresado
#include<stdio.h>

int main()
{
    int num, cond, mult=1;

    printf("Ingrese un n%cmero del 0 al 10 para mostrar su tabla de multiplicar:\n", 163);
    scanf("%d", &num);

    if(num>=0 && num<=10)
        {
        printf("Tabla del %d:\n", num);
        for(cond=1;cond<11;cond++)
            {
             int tabla;
             tabla=num*mult;
             mult++;
             printf("%d\n", tabla);
            }
        }
    else
        printf("N%cmero ingresado no v%clido\n", 163, 160);
    return 0;
}
