#include <stdio.h>

// Definindo que a função existe
int retornaDez();
float retornaQuebrado();

int main ()
{
    // Definindo variáveis
     int a;

     // Passando o retorno de uma função para uma variável
     a = retornaDez();

     // Imprimindo valor de a
     printf("%d\n", a);

     // Definindo um float
     float b;

     // Passando o retorno de uma função para uma variável
     b = retornaQuebrado ();

     // Imprimindo valor de b
     printf("%f\n", b);

    return 0;
}

// Função que retorna 10;
int retornaDez () {
    return 10;
}

// Retorna um número quebrado
float retornaQuebrado (){
    return 2.6;
}
