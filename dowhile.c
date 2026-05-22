//programa no tan raro como en la práctica que te ayuda a sumar número 

#include <stdio.h>
int main()
{
  int a, op, suma = 0;
  printf("--Bienvenido--\n");
  printf("Selecciona la opción deseada\n");
  printf("1) Sumar\n");
  printf("2) Restar\n");
  scanf("%d", &op);

  switch(op)
  {
    case 1:
      do
      {
        printf("Ingrese un valor: \n");
        scanf("%d", &a);
        suma = a + suma;
        printf("El resultado es: %d\n", suma);
        suma++;
      }
      while (suma <= 10);
      printf("Operación no válida, excede de 10\n");
      break;
    case 2:
      printf("Mala elección, ya me cansé de programar");
      break;
    default:
      printf("Ya me quiero dormir");
      break;
  }
  return 0;
}
        
