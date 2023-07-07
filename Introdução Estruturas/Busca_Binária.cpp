#include <stdio.h>
#include <iostream>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM]){

    int cont;

    //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }

}

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada) {

    int esquerda = 0;            // Limite da esquerda
    int direita = TAM - 1;       // Limite da direita
    int meio;                    // O meio onde fica o cursor

    while (esquerda <= direita) {

        // Encontra o meio da análise
        meio = (esquerda + direita) / 2;

        // Quando o valor do meio é encontrado
        if (valorProcurado == vetor[meio]) {
            *posicaoEncontrada = meio;
            return 1;
        }
        
        // Ajusta os limites laterais
        if (vetor[meio] < valorProcurado) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;

        }
    }
    return -1;
}

int main(){

    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicaoEncontrada;

    imprime_vetor(vetor);


    printf("Qual numero deseja encontrar?");
    scanf("%d", &valorProcurado);

    if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1)
        cout << "O valor foi encontrado na posicao:" << posicaoEncontrada;
    else
        cout << "Valor nao encontrado";

    return 0;

