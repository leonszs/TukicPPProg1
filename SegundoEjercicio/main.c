#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int menu();

 int contarCaracteres(char cadena[] , char caracter );
 float aplicarDescuento(float precio);
 int main ()
 {
     char cadena [20];
     char caracter ;
     float precio;
     float resultado;

     int respuesta;



  precio = 100;

  printf("ingrese nombre:  ");
  gets(cadena);

  printf("ingrese caracter:  ");
  scanf("%c", & caracter);

  printf("ingrese el descuento:  ");
  scanf("%f",&precio);

   resultado = aplicarDescuento(precio);
   respuesta = contarCaracteres(cadena , caracter);

     printf("%d",respuesta);
  //  printf("%.2f",resultado);
     return 0 ;
 }

 float aplicarDescuento(float precio)
{
   float precioTotal;

   precioTotal=precio-precio*0.05;

   return precioTotal;
}

int contarCaracteres(char cadena[], char caracter)
{
    int contador = 0;
    int i = 0;

    while(cadena[i] != '\0')
    {
        if(cadena[i]==caracter)
        {
            contador++;
        }
            i++;
    }
    return contador;
}
int menu()
  {
      int opcion;
      system("cls");

     printf("MOSTRAR:");
     printf("SALIR \n");

      printf("Elija una opcion:   ");
      fflush(stdin);
      scanf("%d",&opcion);

      return opcion;



  }
