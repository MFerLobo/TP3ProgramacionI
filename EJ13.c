//Desarrollar un algoritmo que pida al usuario dos números y una letra: “I”, “i” ó “p”,
//“P”, luego mostrar en pantalla los pares (si se pulsó la “p”, “p”) ó impares (si se pulsó
//la “i”, “I”), comprendidos entre el primer número y el segundo. Tener en cuenta que
//el primer número debe ser menor al segundo y validar que ingrese las letras correspondientes
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
    if(num1<num2)
    {
     printf("\nIngrese el c%cdigo:\n", 162);
     printf("(P) - Pares\n");
     printf("(I) - Impares\n");
     fflush(stdin);
     scanf("%c", &codigo);
     fflush(stdin);
     switch(codigo)
     {
         case 'P':
         case 'p':
                  printf("\nLos n%cmeros pares en ese rango son:\n", 163);
                  while(num1!=num2+1)
                  {
                    resto=num1%2;
                        if(resto==0)
                        printf("%d\n", num1);
                        num1++;
                  }
                  break;
         case 'I':
         case 'i':
                  printf("\nLos n%cmeros impares en ese rango son:\n", 163);
                  while(num1!=num2+1)
                  {
                    resto=num1%2;
                        if(resto!=0)
                        printf("%d\n", num1);
                        num1++;
                  }
                break;
         default:
                 printf("\nC%cdigo ingresado incorrecto\n", 162);
                 break;
     }
    }
    else
        printf("\nEl primer n%cmero es mayor que el segundo\n", 163);

    return 0;
}
