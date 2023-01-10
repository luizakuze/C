## Em C
```
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // Definindo variáveis
    int linhas = 3, colunas = 3, i, j;
    int **matriz;

    // Lendo o tamanho pelo usuário
    printf("Digite o numero de linhas:\n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas:\n");
    scanf("%d", &colunas);

    // Alocando as linhas
    matriz = (int **) malloc(linhas * sizeof(int *));

    // Alocando memória para as colunas de cada linha
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof (int));
    }

    // Preenchendo valores e exibindo matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória
    free(matriz);

    return 0;
}
```

## Em C++
```
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>

using namespace std;

int main ()
{
    // Definindo variáveis
    int linhas = 3, colunas = 3, i, j;
    int **matriz;

    // Lendo o tamanho pelo usuário
    printf("Digite o numero de linhas:\n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas:\n");
    scanf("%d", &colunas);

    // Alocando as linhas
    matriz = (int **) new int[linhas];

    // Alocando memória para as colunas de cada linha
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *) new int[colunas];
    }

    // Preenchendo valores e exibindo matriz
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória
    free(matriz);

    return 0;
}
```
