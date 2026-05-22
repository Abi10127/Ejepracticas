//código para obtenner la tabla de multiplicación de un número ingresado por teclado

#include <stdio.h>

int main()
{
  int a, cont = 1;
  printf("--Tabla de multiplicar--\n");
  printf("Ingrese un número: \n");
  scanf("%d", &a);

  while ( cont <= 10)
  {
    printf("%d x %d = %d\n", a, cont, a*cont); //se añade ese \n porque si no todas las operaciones aparecen amontonadas 
    cont++;
  }
  return 0;
}
    
