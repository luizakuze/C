/* O programa calcula o valor absoluto da diferença de duas notas. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1 = 2, nota2= 10;
    int diferenca = nota1 - nota2;

    printf("O valor absoluto e %d", abs(diferenca));

    return 0;
}
