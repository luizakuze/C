#include <stdio.h>
#include <stdlib.h>
 
//Função principal do programa
int main ()
{
    //Definindo Variáveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Número par ou impar ====> Utilizar o operador de RESTO da divisão
    if(a % 2 == 1){
        printf("\n A variável a é impar");
    }else{
        printf("\n A variável a é par");
    }

  //Condicional Simples
    if(a == 5){
        printf("\n A variável a = 5");
    }
    if(b == 2.5){
        printf("\n A variável b = 2.5");
    }
    if(c == 'x'){
        printf("\n A variável c = letra x");
    }
 
    //Condicional Composta
    if(opcao == 1){
        printf("\nA opcao = 1");
    }else if(opcao == 2){
         printf("\nA opcao = 2");
    }else{
        printf("\nA opcao nao eh igual a 1 e nem 2");
    }
 
    return 0;
 
}
