//Desarrollar un algoritmo que escriba en pantalla todos los
//números pares comprendidos entre 1 y 50
#include<stdio.h>

int main()
{
    int num, resto;
    printf("Los n%cmeros pares comprendidos entre 1 y 50 son:\n", 163);
    for(num=50;num;num--)
    {
        resto=num%2;
        if(resto==0)
            printf("%d\n", num);
    }
    return 0;

}
