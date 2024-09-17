#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define Num_lanzamientos 100

char* lanzar_moneda();

int main()
{
    int cara = 0;
    int sello = 0;
    int i;

    srand(time(NULL));

    for (i = 0; i < Num_lanzamientos; i++)
    {
        char* resultado = lanzar_moneda();
        printf("Lanzamiento %d: %s\n", i + 1, resultado);
        if (strcmp(resultado, "Cara") == 0)
        {
            cara++;
        }
        else
        {
            sello++;
        }
    }
    printf("Resultados: Cara=%d, Cruz=%d\n", cara, sello);
    system("pause");
    return 0;    
}


char* lanzar_moneda()
{
    int resultado = rand() % 2;

    if (resultado == 0)
    {
        return "Cara";
    }
    else
    {
        return "Sello";
    }
}