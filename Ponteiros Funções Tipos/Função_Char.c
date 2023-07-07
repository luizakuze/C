#include <stdio.h>

char retornaLetra () {
    return '123'; //tabela ascii; pode ser só a letra também
}

int main ()
{
    // Definindo variáveis
    char letra;

    // Char recebendo valor de uma função
    letra = retornaLetra();

    // Imprimindo novo valor
    printf("%c\n", letra);

    return 0;
}
