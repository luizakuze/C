#include <iostream>
#define TAM 10

using namespace std;

void imprime_vetor (int vetor[TAM], int topo)
{
    cout << endl;
    for (int i = 0; i < TAM; i++)
        cout << vetor[i] << "  ";

    cout << vetor[topo];

}

void pilha_push (int pilha[TAM], int valor, int *topo)
{
    // Caso não possa colocar mais valores
    if (*topo == TAM - 1) {
        cout << "Pilha cheia";
    } else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pilha_pop (int pilha[TAM], int *topo)
{
    if (*topo == -1) {
        cout << "A pilha ja esta vazia\n";
    } else {
        cout << "Valor removido:" << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

int main ()
{
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;          // topo da pilha

    imprime_vetor(pilha, topo);

    // Empilhando
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 8, &topo);

    imprime_vetor(pilha, topo);

    pilha_pop(pilha, &topo);

    imprime_vetor(pilha, topo);

    return 0;
}
