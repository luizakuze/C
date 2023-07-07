### O que o programa faz:
Lê valores para dentro de uma matriz 2x2 e depois inverte os valores da primeira e com segunda linha.

### Versão 1
```
#include <stdio.h>
 
int main ()
{ 
    int minhaMatriz[2][2], aux1,aux2, i , j;
 
    //Lendo valores para matriz
    printf("Digite um valor para [0][0]");
    scanf("%d", &minhaMatriz[0][0]);
    printf("Digite um valor para [0][1]");
    scanf("%d", &minhaMatriz[0][1]);
    printf("Digite um valor para [1][0]");
    scanf("%d", &minhaMatriz[1][0]);
    printf("Digite um valor para [1][1]");
    scanf("%d", &minhaMatriz[1][1]);
 
    //Auxiliares
    aux1 = minhaMatriz[0][0];
    aux2 = minhaMatriz[0][1];
 
    //Invertendo valores usando auxiliares
    minhaMatriz[0][0] = minhaMatriz[1][0];
    minhaMatriz[0][1] = minhaMatriz[1][1];
    minhaMatriz[1][0] = aux1;
    minhaMatriz[1][1] = aux2;
 
    //Imprimindo nova matriz
    printf("\n%d %d",minhaMatriz[0][0],minhaMatriz[0][1]);
    printf("\n%d %d",minhaMatriz[1][0],minhaMatriz[1][1]);
 
    return 0;
}
```

### Versão 2
```
#include <stdio.h>
 
int main ()
{ 
    //Preencha uma matriz 2x2 lendo valores do usuário e
    //depois troque os valores entre a primeira e a segunda linha.
    int minhaMatriz[2][2], aux1,aux2, i , j;
 
    //Lendo valores para matriz
    for(i = 0; i < 2 ; i++){
        for(j = 0; j < 2 ; j++){
            printf("Digite um valor para [%d][%d]:", i, j);
            scanf("%d", &minhaMatriz[i][j]);
        }
    }
 
    //Auxiliares
    aux1 = minhaMatriz[0][0];
    aux2 = minhaMatriz[0][1];
 
    //Invertendo valores usando auxiliares
    minhaMatriz[0][0] = minhaMatriz[1][0];
    minhaMatriz[0][1] = minhaMatriz[1][1];
    minhaMatriz[1][0] = aux1;
    minhaMatriz[1][1] = aux2;
 
    //Imprimindo nova matriz
    for(i = 0; i < 2 ; i++){
        for(j = 0; j < 2 ; j++){
            printf("%d ", minhaMatriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```
