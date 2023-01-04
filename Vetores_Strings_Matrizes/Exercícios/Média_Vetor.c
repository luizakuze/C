/* O programa realiza a entrada de dados para um vetor de tamanho 3 e
computa a média dos valores adicionados ao vetor. */

#include <stdio.h>

int main()
{
   int vet[3];
   float media;
   
   // Entrada de dados
   for (int i = 0; i < 3; i++) {
       printf("Entre com o valor do vetor[%d]:\n", i);
       scanf("%d", &vet[i]);
   }

   // Saída
    for (int i = 0; i < 3; i++)
        printf("vet[%d]= %d\n", i, vet[i]);
    
    // Média
    media = (vet[0] + vet[1] + vet[2]) / 3.0;
    printf("A media dos valores escolhidos para o vetor eh %.2f\n", media);
        return 0;
}
