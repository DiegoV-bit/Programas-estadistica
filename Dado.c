#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Numero_lanzamientos 20
//Funciones
int dado();

int main()
{
    int i;
    int resultados[6] = {0};
    srand(time(NULL));

    for (i = 0; i < Numero_lanzamientos; i++)
    {
        int resultado = dado();
        printf("Lanzamiento %d: %d\n",  i + 1, resultado);
        resultados[resultado - 1]++;
    }

    printf("\nResultados:\n");
    for (i = 0; i < 6; i++)
    {
        printf("Cara %d: %d veces\n", i + 1, resultados[i]);
    }

    system("pause");
    return 0;
}


int dado()
{
    int resultado =  (rand() % 6) + 1;
    return resultado;
}