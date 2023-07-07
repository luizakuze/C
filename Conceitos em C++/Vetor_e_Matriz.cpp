#include <stdbool.h>
#include <iostream>
#include <string>
#define TAM 3

using namespace std;

int main ()
{
    // Definindo vetor
    int vet [TAM], i, j;

    // Passando valores para o vetor
    vet[0] = 10;
    vet[1] = 20;
    vet[2] = 30;

    // Imprimindo valores do vetor em C++
    for (i = 0; i < TAM; i++) {
        // printf("%d\n", vet[i]);
        cout << vet[i] << endl;
    }

    // Resetando o contador i
    i = 0;

    // Imprimindo valores do vetor (Versão 2 com While)
    while (i < TAM) {
        printf("%d\n", vet[i]);
        i++;
    }

    // Definindo matrizes
    int mat [3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, };

    // Imprimindo valores da matriz
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            cout << mat[i][j] << " ";

    return 0;
}
