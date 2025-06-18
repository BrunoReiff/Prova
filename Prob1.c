#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int U[3], V[3], somatorio = 0;
    printf("Inclua, um a um, os valores do vetor U:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &U[i]);
    }
    printf("\nInclua, um a um, os valores do vetor V:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &V[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        somatorio += 3*V[i]-2*U[2-i];
    }
    printf("O valor do somatorio eh: %d", somatorio);    
    return 0;
}
