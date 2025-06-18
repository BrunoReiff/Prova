#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[10], aux;
    int tamanho = sinzeof(vet) / sizeof(vet[0]);
    
    for (int i = 0; i < tamanho; i++) {
        vet[i] = rand()%100;
        printf("%d " ,vet[i]);
    }    
    
    for (int i = 0; i < tamanho; i++) {
        for (int j = i; j < tamanho; j++) {
            if (vet[i] > vet[j + 1]) {
                aux = vet[i];
                vet[i] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
