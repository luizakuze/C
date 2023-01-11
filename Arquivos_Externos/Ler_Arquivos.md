## Em C
```
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    // Cursor que irá percorrer cada letra
    int c;

    // Arquivo a ser lido
    FILE *file;

    // Abre o arquivo no diretório escolhido
    file = fopen("Texto.txt", "r");

    // Se o arquivo for encontrado
    if(file) {

        // Enquanto encontra letras(até o fimm do arquivo)
        while ((c = getc(file) != EOF)) {

            printf("%c", c);
        }
    }

    // Fecha o arquivo
    fclose(file);

    return 0;
}
```

## Em C++
```
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main () {

    //Dizer qual arquivo será lido
    ifstream input("Texto.txt");

    //String que receberá o texto lido
    string textoLido;

    //Passa o texto do arquivo para a string
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //Mostrar o conteúdo
    cout << textoLido;

    return 0;
}
```
