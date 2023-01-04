/* O programa faz a contagem regressiva de 10 a 0.
O programa foi contruído com 3 alternativas: "While", "Do While" ou com o "For".
 Basta escolher 1 deles e comentar os outros 2 para ver o funcionamento. */

#include <stdio.h>

int main()
{
    int a = 10;

    /* 1
    printf("Com o comando WHILE\n");
    while (a != 0) {
        printf("%d\n", a);
        a--;
    }

    // 2
    printf("Com o comando DO WHILE\n");
    do {
        printf("%d\n", a);
        a--;
    } while (a != 0); */

    // 3
    printf("Com o comando FOR\n");
    for (int i = 0; a != i; a--) {
        printf("%d\n", a);
    }

    return 0;
}
