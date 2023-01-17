/* Representação de PILHA: LIFO ===> Last In... First Out.
 * Empilhar = Push in
 * Desempilhar = Pop */

#include <iostream>
#define TAM 10

using namespace std;

void imprime_vetor (int vetor[TAM])
{
    cout << endl;
    for (int i = 0; i < TAM; i++)
        cout << vetor[i] << "  ";

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


int main ()
{
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;           // topo da pilha

    imprime_vetor(pilha);

    // Empilhando
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 8, &topo);

    imprime_vetor(pilha);

    return 0;
}
