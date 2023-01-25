// Fila - Modelo FIFO - First in, First out

#include <iostream>
#include <stdlib.h>
#include <string.h>
#define TAM 10

using namespace std;

void imprime_vetor (int vetor[TAM], int tamanho) {

    int i;

    cout << endl;

    for (i = 0; i < TAM; i++)
        cout << vetor[i] << " - ";

    cout << "Tamanho da fila: " << tamanho << endl;
}

void fila_construtor (int *frente, int *tras) {
    *frente = 0;
    *tras = -1;
}

bool fila_vazia(int frente, int tras) {
    if (frente > tras) {
        return true;
    } else {
        return false;
    }
}

bool fila_cheia (int tras){
    if (tras == TAM - 1)
        return true;
    else
        return false;
}

void fila_enfileirar (int fila[TAM], int valor, int *tras) {

    if (fila_cheia(*tras)) {
        cout << "Fila cheia" << endl;
    } else {
        *tras = *tras + 1;
        fila[*tras] = valor;
    }
}

int fila_tamanho (int tras, int frente) {
    return (tras - frente) + 1;
}

// Modo FIFO
void fila_desenfileirar (int fila[TAM], int *frente, int tras) {

    if (!fila_vazia(*frente, tras)) {
        cout << "O valor: " << fila[*frente] << " foi removido" << endl;
        fila[*frente] = 0;
        *frente = *frente + 1;
    } else {
        cout << "Impossivel desenfileirar uma fila vazia" << endl;
    }
}


int main()
{
    int frente, tras;
    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int valor;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);

    fila_desenfileirar(fila, &frente, tras);
    fila_desenfileirar(fila, &frente, tras);
    fila_desenfileirar(fila, &frente, tras);
    fila_desenfileirar(fila, &frente, tras);
    imprime_vetor(fila, fila_tamanho(tras, frente));

    return 0;
}
