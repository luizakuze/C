### Estudo de String em C

```
#include <stdio.h>

int main()
{
    // Criar a string
    char string [255];

    // Instrução e Leitura de dados pra dentro da string
    printf("Digite uma palavra:\n");
    scanf("%s", &string);

    // Imprimindo a string
    printf("%s\n", string);

    return 0;
}
```

### Em C++
```
#include <iostream>
#include <string>

// Para não precisar escrever "std" sempre que for utilizar a biblioteca:
using namespace std;

int main()
{
    // Utilizando a biblioteca <string> para criar a string "palavra"
    string palavra;

    // Imprimindo na tela
    cout << "Digite uma palavra\n";

    // Lendo uma string
    cin>> palavra;

    // Imprimindo uma variável
    cout << palavra;

    // Concatenar
    cout << "\nA palavra eh: " << palavra;
    
    return 0;
}
```
