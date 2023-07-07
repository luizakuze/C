#include <stdio.h>
#include <stdbool.h>

bool retorna_booleana () {
    return true;
}

int main ()
{
    // Definindo variáveis
    bool var_bool;

    // Variável recebendo valor booleano
    var_bool = retorna_booleana ();

    // Se for verdadeiro executa o primeiro bloco
    if(var_bool) {
        printf("Eh verdadeiro\n");
    } // Senão, executa o segundo bloco
    else {
        printf("Eh falso\n");
    }
