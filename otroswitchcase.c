// en esta ocasión se ocuparan valores enteros en vez de caracteres como en el anterior

#include <stdio.h>
int main()
{
  int d;
  printf("---Bievenido al quiz---\n");
  printf("Elije a tu película favorita de Studio Ghibli\n");
  printf("1) El viaje de Chihiro\n");
  printf("2) Mi vecino Totoro\n");
  printf("3) La princesa Mononoke\n");
  printf("4) El increíble castillo vagabundo\n");
  scanf("%d", %d);

  switch(d)
  {
  case 1:
    printf("Nada mal, un clásico");
    break;
  case 2:
    printf("Buena opción, me gusta tanto que tengo dos llaveros de Totoro");
    break;
  case 3:
    printf("De lo mejor del estudio, creo que tiene de los personajes más interesantes, te amo Ashitaka");
    break;
  case 4:
    printf("Oemege mi película favorita, amo Merry go round of life desde que iba a clases de ballet");
    break;
  default:
    printf("Necesitas ver muchas más películas de Studio Ghibli");
    break;
  }
  return 0;
}
