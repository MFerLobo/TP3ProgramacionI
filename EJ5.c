//Desarrollar un algoritmo que ingrese números hasta ingresar un número negativo,
//se pide mostrar por pantalla el promedio.
#include<stdio.h>

int main()
{
    float prom, cant=1, suma=0, aux;

    printf("El programa realizar%c un promedio con los n%cmeros ingresados, hasta que se ingrese un n%cmero negativo\n\n", 163, 161, 163);
    printf("Ingrese un n%cmero:\n", 163);
    scanf("%f", &aux);
    if(aux>0)
    {
     suma+=aux;
     while(aux>0)
     {
      printf("Ingrese un n%cmero:\n", 163);
      scanf("%f", &aux);
      if(aux>0)
      {
       suma+=aux;
       cant++;
      }
     }
     prom=suma/cant;
     printf("El promedio entre los n%cmeros ingresados es: %.2f\n", 163, prom);
    }
    else
        printf("Ingrese al menos un n%cmero positivo", 163);
    return 0;
}
