#include <stdio.h>
#include <stdlib.h>

//Retorna um ponteiro
int* aloca_vetor (int tamanho) {

    //Ponteiro auxiliar
    int *aux;

    /* Alocação dinâmica de memória + Anotações:
       1. Função malloc para reservar um espaço da memória;
       2. tamanho do vetor * tamanho que um inteiro precisa;
       3. (int*) formato de ponteiro */
  
    aux = (int*) malloc(tamanho * sizeof(int)) ;

    //Retorna o ponteiro para a primeira posição de memória do vetor alocado
    return aux;
}

int main ()
{
    int *vetor, tamanho;

    //Lendo o tamanho do vetor pelo usuário
    printf("Digite um tamanho para o vetor:\n");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereço de memória que foi alocado para o vetor (vet[0])
    vetor = aloca_vetor(tamanho);

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;

    //Imprimindo vetor
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }

    //Após alocar a memória e terminar o programa => Limpar a memória
    free(vetor);

    return 0;
}
