## Strelen
#### Retorna o tamanho de uma string
```
#include <stdio.h>
#include <string.h>

int main()
{
    char string[10] = "lulu";

    // Primeira forma
    int tamanho;
    tamanho = strlen(string);
    printf("O tamanho da string %s eh %d\n", string, tamanho);

    // Segunda forma
    printf("O tamanho da string %s eh %d\n", string, strlen(string));

    return 0;
}
```
## Strcpy
#### Copia a string de um vetor fonte para um vetor destino
```
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[10] = "lulu";
    char string2[10] = "luluzinha";

    strcpy(string1, string2);

    printf("A primeira string eh %s\n", string1);

    return 0;
}
```
## Strcat
#### Concatena duas strings
```
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[10] = "lulu";
    char string2[10] = "lulu";

    strcat (string1, string2);

    printf("A concatenacao eh %s\n", string1);

    return 0;
}
```
## Strcmp
#### Compara duas strings
- **menor que 0** -> string1 é menor que string2
- **0** -> string1 == string2
- **maior que 0** -> string1 é maior que string2
```
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[10] = "alulu";
    char string2[10] = "alulu";
    char string3[10] = "blulu";
    int retorno;

    // Strings iguais (retorno 0)
    retorno = strcmp (string1, string2);
    printf("string1 e string 2:\n");
    printf("%d\n", retorno);

    // Primeira string maior que a segunda string (retorno -1)
    retorno = strcmp (string1, string3);
    printf("string1 e string 3:\n");
    printf("%d\n", retorno);
    
    // Segunda string maior que a primeira string (retorno 1)
    retorno = strcmp (string3, string1);
    printf("string2 e string 3:\n");
    printf("%d\n", retorno);

    return 0;
}
```
