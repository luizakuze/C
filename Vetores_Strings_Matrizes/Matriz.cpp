/*
vet[0][1][2]

mat[0.0][0.1][0.2] ====> Linhas horizontais e colunas verticais
   [1.0][1.2][1.2]
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Criando uma matriz
    int mat [2][2];

    //Passando valores
    mat [0][0] = 1;
    mat [0][1] = 2;
    mat [1][0] = 3;
    mat [1][1] = 4;

    //Lendo valores do teclado
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            //cout << "\ni = " << i << ", j = " << j;
            cin >> mat[i][j];
        }
    };

    //Imprimindo valores na tela
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            //cout << "\ni = " << i << ", j = " << j;
            cout << mat[i][j] << "\n";
        }
    };
    return 0;
}
