#include <iostream>
#define TAM 10

using namespace std;

// Confere se a pilha está vazia
bool pilha_vazia(int topo) {
    if (topo == -1) {
        return true;
    } else {
        return false;
    }
}

// Confere se a pilha está cheia
bool pilha_cheia(int topo) {
    if (topo == TAM - 1) {
        return true;
    } else {
        return false;
    }
}

void imprime_vetor (int vetor[TAM], int topo)
{
    cout << endl;
    for (int i = 0; i < TAM; i++)
        cout << vetor[i] << " - ";

    cout << "Topo:" << topo;

}

int pilha_tamanho (int topo) {
    return topo + 1;
}

// Imprime o último valor da pilha
int pilha_get (int pilha[TAM], int *topo) {
    if (pilha_vazia(*topo)) {
        cout << "A pilha esta vazia";
        return 0;
    } else {
        return pilha[*topo];
    }
}

// Adiciona um valor a pilha
void pilha_push (int pilha[TAM], int valor, int *topo)
{
    // Caso não possa colocar mais valores
    if (pilha_cheia(*topo)) {
        cout << "Pilha cheia";
    } else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

// Desempilha o último valor da pilha
void pilha_pop (int pilha[TAM], int *topo)
{
    if (pilha_vazia(*topo)) {
        cout << "A pilha ja esta vazia\n";
    } else {
        cout << " - Valor removido:" << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

// Zera a pilha no início
void pilha_construtor (int pilha[TAM], int *topo) {

    // Topo negativo para uma pilha vazia
    *topo = -1;

    cout << endl;
    for (int i = 0; i < TAM; i++)
        pilha[i] = 0;
}

int main ()
{
    int pilha[TAM];
    int topo = -1;          // topo da pilha

    pilha_construtor(pilha, &topo);

    imprime_vetor(pilha, topo);

    // Empilhando
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 8, &topo);

    imprime_vetor(pilha, topo);

    cout << " - Ultimo valor da pilha: " << pilha_get(pilha, &topo);
    cout << " - Tamanho da pilha: " << pilha_tamanho(topo);


    pilha_pop(pilha, &topo);

    imprime_vetor(pilha, topo);

    cout << " - Tamanho da pilha: " << pilha_tamanho(topo);
    return 0;
}
