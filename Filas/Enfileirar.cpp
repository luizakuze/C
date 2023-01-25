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

void fila_enfileirar (int fila[TAM], int valor, int *tras) {

    if (*tras == TAM - 1) {
        cout << "Fila cheia" << endl;
    } else {
        *tras = *tras + 1;
        fila[*tras] = valor;
    }
}

int fila_tamanho (int tras, int frente) {
    return (tras - frente) + 1;
}

int main()
{
    int frente, tras;
    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int valor;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 5, &tras);

    imprime_vetor(fila, fila_tamanho(tras, frente));

    return 0;
}
