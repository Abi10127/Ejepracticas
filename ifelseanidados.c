//a diferencia del ejercicio anterior donde solo se leían 2 números, en este caso se leerán 3 números 

#include <stdio.h>
int main()
{
  int a, b ,c;
  printf("Ingrese 3 valores distintos: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a > c)
  {
    if(c > b)
    {
      printf("El valor %d es mayor a %d", a, b);
    }
    else
    {
      printf("El valor %d es menor a %d", c, a);
    }
  }  
  else
  {
    printf("El valor %d es menor a %d", a, c);
  }
  return 0;
}
  
