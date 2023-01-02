/* O programa recebe 3 notas de alunos e calcula a media entre elas, se a nota do aluno
 for maior que a media encontrada o aluno estara aprovado. */

#include <stdio.h>


int calcula_aprovacao (float nota_x, float media)
{
    int resultado;

    if (nota_x >= media)
        return 1;
    else
        return -1;
}

int main()
{
    float nota1, nota2, nota3, media, nota_x; int situacao;

    printf("Entre com a nota dos 3 alunos:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    // teste para aluno1 com a nota1
    situacao = calcula_aprovacao(nota1, media);
    if (situacao > 0)
        printf("O aluno1 foi aprovado\n");
    else
        printf("O aluno1 foi reprovado\n");

    // teste para aluno2 com nota2
    situacao = calcula_aprovacao(nota2, media);
    if (situacao > 0)
        printf("O aluno2 foi aprovado\n");
    else
        printf("O aluno2 foi reprovado\n");

    // teste para aluno3 com nota3
    situacao = calcula_aprovacao(nota3, media);
    if (situacao > 0)
        printf("O aluno3 foi aprovado\n");
    else
        printf("O aluno3 foi reprovado\n");
    
    return 0;
}
