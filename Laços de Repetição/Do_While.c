// Do While : Faça enquanto

#include <stdio.h>

int main()
{
    int a = 1;

    //Primeiro confere a condição, depois repete o bloco
    while(a <= 10){
        printf("\n%d", a);
        a++;     //a = a + 1;
    }

    //Primeiro executa uma vez, depois confere a condição
    do {
        printf("\n%d", a);
        a++;
    } while (a<=19);

    return 0;
}
