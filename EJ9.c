//Desarrollar un algoritmo que ingrese un entero positivo,
//y muestre por pantalla la suma de sus cifras
#include<stdio.h>
#include<math.h>

int main()
{
    int num, cifra, resto, suma=0;

    printf("Ingrese un n%cmero entero positivo\n", 163);
    scanf("%d", &num);
    if(num>0)
       {
        while(num>9)
        {
            cifra=trunc(num/10);
            resto=num%10;
            num=cifra;
            suma+=resto;
            if(cifra>=1 && cifra<=9)
                suma+=cifra;
        }
         printf("\nLa suma de sus cifras es: %d\n", suma);
       }
    else
        printf("El n%cmero no es positivo\n", 163);

    return 0;
}


//    printf("\n\ncifra: %d", cifra); lineas para prueba de escritorio
//    printf("\nresto: %d", resto);
//    printf("\nsuma: %d", suma);
//    printf("\nnumpost: %d", num);
