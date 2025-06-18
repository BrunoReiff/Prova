#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10], i, j, temp;

    printf("Vamos gerar os elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        vetor[i] = rand()%100;
        printf("%d " ,vetor[i]);
    }    
    
    //Sort
    for (i = 0; i < 10; i++) {
        for (j = i; j < 10; j++) {
            if (vetor[i] > vetor[j + 1]) {
                // Troca os elementos
                temp = vetor[i];
                vetor[i] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibindo o vetor ordenado
    printf("\n\nVetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
