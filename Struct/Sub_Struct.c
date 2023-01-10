#include <stdio.h>

typedef struct Data {
    int dia, mes, ano;
} Data;

struct Aluno {
    int id;
    Data nascimento;
};

int main ()
{
    // Criando um aluno
    struct Aluno aluno1;

    // Modificando valores
    aluno1.id = 15;
    aluno1.nascimento.ano = 2004;
    aluno1.nascimento.mes = 12;
    aluno1.nascimento.dia = 8;

    // Imprimindo valores
    printf("Nascido em: %d/%d/%d\n", aluno1.nascimento.dia,aluno1.nascimento.mes,aluno1.nascimento.ano);

    return 0;
}
