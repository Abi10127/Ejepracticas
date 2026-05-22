#include <stdio.h>

int main() 
{
    int matriz[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    // Ciclo externo para las FILAS
    for (int f = 0; f < 2; f++) 
    {
        // Ciclo interno para las COLUMNAS
        for (int c = 0; c < 3; c++) 
        {
            printf("%d ", matriz[f][c]);
        }
        printf("\n"); // Un salto de línea al terminar cada fila para que se vea como tabla
    }

    return 0;
}
