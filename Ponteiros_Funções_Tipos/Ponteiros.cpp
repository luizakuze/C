#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // Variável
    int a = 20;

    // Imprimindo o valor de uma variável
    printf("Valor de a: %d\n", a);

    // Imprimindo o endereço de uma variável
    printf("Valor de a: %d\n", &a);

    // VARIÁVEIS: Armazenam valores
    int b = 10;

    // PONTEIROS: Armazenam posições da memória
    int *ponteiro;

    // Ponteiro recebendo a posição na memória da variável b
    ponteiro = &b;

    // Imprimindo o endereço de uma variável
    printf("Valor de b: %d\n", b);

    // * pode ser lido como "CONTEÚDO APONTADOR POR"
    *ponteiro = 40;

    // Imprimindo o endereço de uma variável
    printf("Valor de b: %d\n", b);
    
    return 0;
}
