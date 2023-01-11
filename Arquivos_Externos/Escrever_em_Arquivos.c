#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main ()
{
    // Cria o objeto de arquivo
    ofstream arquivo_saida;

    // Abre o arquivo ou cria caso não exista
    arquivo_saida.open("Texto.txt", std::ios_base::app);

    // Escreve algo
    arquivo_saida << "Oi";

    // Fecha o arquivo
    arquivo_saida.close();

    return 0;
}
