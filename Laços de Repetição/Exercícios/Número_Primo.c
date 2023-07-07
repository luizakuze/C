/* O programa confere se o número é primo ou não*/

#include <stdio.h>

int main()
{
    int valor, aux = 0;

    printf("Usuario, entre com o valor:\n");
    scanf("%d", &valor);

    for (int i = 1; i <= valor; i++) {

        //Confere quantas vezes houve a divisao
        if ( valor % i == 0 ) {
            aux++;
        }
    }

    if (aux == 2)
        printf("O numero %d eh primo\n", valor);
    else
        printf("O numero %d nao eh primo\n", valor);

    return 0;
}
