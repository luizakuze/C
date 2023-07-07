#include <stdio.h>

int main()
{
    // Criar um vetor de inteiros
    int vetor[3], i;

    // Passar valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    // Exibir os valores do vetor
    printf("Posicao 0: %d\n", vetor[0]);
    printf("Posicao 1: %d\n", vetor[1]);
    printf("Posicao 2: %d\n", vetor[2]);

    // Ler 3 valores para o vetor
    for (i = 0; i < 3; i++)
        scanf("%d\n", &vetor[i]);
    
    // Imprimir vetor em um laço de repetição
    for (i = 0; i < 3; i++)
        printf("Posicao %d: %d\n", i, vetor[i]);

    return 0;
}
