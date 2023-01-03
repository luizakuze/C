#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Responsavel por alimentar o rand de fomra diferente
    srand((unsigned) time(NULL)); //unsigned int ==> um INT positivo; time ==> algum tempo do computador que esta rodando na memoria

    //Variavel para receber o resto da divisao do numero por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    //Variavel para receber o resto da divisao do numero por 5 (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;

    //Imprime o valor
    printf("%d", aleatorioSegundo);

    return 0;
}
