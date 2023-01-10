#include <stdio.h>

void imprime_vetor (int *vet, int tamanho) {
    int i;

    //Percorrendo o vetor
    for(int i = 0; i < tamanho; i++)
        printf("%d", vet[i]);
}

void modifica_vetor (int *vet, int tamanho) {
    int i;

    for(int i = 0; i < tamanho; i++)
         vet[i] = vet[i] + 1;
}


int main ()
{
    int vet[3] = {1, 2, 3};

    imprime_vetor(vet, 3);

    modifica_vetor(vet, 3);

    imprime_vetor(vet, 3);

    return 0;
}
