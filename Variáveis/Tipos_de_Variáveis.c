#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Imprimindo Olá
    printf("Olá\n");

    //Lendo valor inteiro
    int a = 10;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor a mudou para %d\n", a);

    //Lendo valor quebrado
    float b = 10.2;
    printf("O valor de a é = %d \n", b);
    scanf("%d", &b);
    printf("O valor a mudou para %d\n", b);

    //Lendo letra
    char c = 'd';
    printf("O valor de a é = %d \n", c);
    fflush(stdin); //limpeza buffer (memória temporária de leitura) qnd utilizar o char
    scanf("%d", &c);
    printf("O valor a mudou para %d \n ", c);

    return 0;
}
