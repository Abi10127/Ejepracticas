//código de matriz unidimensional que muestra los nombres de las integrantes de new jeans porque las extraño

#include <stdio.h>
int main()
{
  char integrantes [5][10] = {"Hanni", "Haerin", "Minji", "Hyein", "Danielle"};
  int i = 0;

  printf("Integrantes de New Jeans\n");
  do
  {
    printf("Las integrantes de New Jeans son: %s\n", integrantes[i]);
    i = i + 1;
  }  
  while (i < 5);
  printf("New Jeans never die\n");
  return 0;
}
