/* O tipo booleano pode assumir apenas dois valores: Verdadeiro ou Falso.
Além disso, para utilizar operações contendo esse tipo, é necessário importar a biblioteca <stdbool.h> */
#include <stdio.h>
#include <stdbool.h>

int main()
{

    // Definindo Variaveis
    bool a = true, b = false;

    //Se a for verdadeiro
    if (a)
        printf("A eh verdadeiro\n");

    //Comparando o b
    if (b)
        printf("B eh verdadeiro\n");
    else
        printf("B eh falso\n");

    //Comparando uma falsidade
    if (!b)
        printf("B é falso\n");

    return 0;
}
