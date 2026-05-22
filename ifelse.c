//código para practicar el uso de if-else
//se solicita saber si un número es mayor que otro por medio de lecturas que se ingresan desde el teclado

#include <stdio.h>
int main()
{
  int a, b;
  printf("Ingrese dos valores");
  scanf("d% %d", &a, &b);

  if(a < b)
  {
    printf("El valor %d es menor a %d", a, b);
  }
  else
  {
    printf("El valor %d es mayor a %d", a, b); //cuando se usa un printf no debo de usar los gatos, esos solo se usan en el scanf
  }
  return 0;
}
