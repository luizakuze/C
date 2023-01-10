#include <stdio.h>
#include <string.h>

struct palavra {
    int ordem;
    char letra;
    char texto[255];
};

int main ()
{
    // Criar uma palavra
    struct palavra primeira_palavra;

    // Modificando os campos
    primeira_palavra.ordem = 10;
    primeira_palavra.letra = 'c';
    strcpy(primeira_palavra.texto, "palavrinha");

    // Resgatando valores do struct
    printf("Ordem: %d, Letra: %c, Palavra: %s\n", primeira_palavra.ordem, primeira_palavra.letra, primeira_palavra.texto);

    // Fazendo uma lista de structs
    struct palavra lista_palavras[3];

    // Modificando os campos
    lista_palavras[0].ordem = 0;
    lista_palavras[1].ordem = 1;
    lista_palavras[2].ordem = 2;
    lista_palavras[0].letra = 'a';
    lista_palavras[1].letra = 'b';
    lista_palavras[2].letra = 'c';
    strcpy(lista_palavras[0].texto, "primeiro");
    strcpy(lista_palavras[1].texto, "segundo");
    strcpy(lista_palavras[2].texto, "terceiro");

    // Percorrendo vetor
    int i;
    for (i = 0; i < 3; i++)
        printf("Ordem: %d, Letra: %c, Palavra: %s\n", lista_palavras[i].ordem, lista_palavras[i].letra, lista_palavras[i].texto);
    
    return 0;
}
