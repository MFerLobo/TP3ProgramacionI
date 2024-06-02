//Desarrollar un algoritmo que calcule y visualice en pantalla una tabla con las 20
//primera potencias de 2
#include<stdio.h>
#include<math.h>

int main()
{
    int pot, num;
    printf("Las 20 primeras potencias de 2:\n");
    for(pot=1; pot<21; pot++)
    {
        num=pow(2, pot);
        printf("%d\n", num);
    }
    return 0;
}
