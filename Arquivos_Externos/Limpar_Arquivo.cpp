#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main ()
{
    // Cria o objeto do arquivo
    ofstream meu_arquivo;
    
    // Abre o arquivo
    meu_arquivo.open("Texto.txt");

    // Esvazia o arquivo
    meu_arquivo << " ";

    // Fecha o arquivo
    meu_arquivo.close();

    return 0;
}
