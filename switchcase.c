//programa que permite al usuario elegir entre diferentes opciones de un menú

#include <stdio.h>
int main()
{
  char d = '\0'; 
  printf("---Bienvenido a Café Libertad---\n");
  printf("Ingrese la opción de platillo a elegir: \n");
  printf("a) Desayunos\n");
  printf("b) Comidas\n");
  printf("c) Cenas\n");
  printf("d) Postres\n");
  scanf("%c", &d);

  switch(d)
  {  //se abren corchetes solo al inicio y al final
    case 'a':
      printf("Haz elegido la opción de desayunos");
      break; //break tiene que estar a la misma altura que el printf
    case 'b':
      printf("Haz elegido la opción de comidas");
      break;
    case 'c':
      printf("Haz elegido la opción de cenas");
      break;
    case 'd':
      printf("Haz elegido la opción de postres");
      break;
    default:
      printf("Gracias por su visita");
      break;
  }
  return 0;
}

