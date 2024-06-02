#include<stdio.h>

int main()
{
    int num1, num2, resto;
    char codigo;
    printf("Se le pedir%c que ingrese dos n%cmeros (el primero menor que el segundo) y una letra (P o I)\npara calcular los pares o impares comprendidos entre esos n%cmeros\n\n", 160, 163, 163);
    printf("Ingrese el primer n%cmero:\n", 163);
    scanf("%d", &num1);
    printf("Ingrese el segundo n%cmero (mayor que %d):\n", 163, num1);
    scanf("%d", &num2);

    for(num1;num1==num2;num1++)
    {
        resto=num1%2;
        if(resto==0)
        printf("%d\n", num1);
    }
    return 0;
}

