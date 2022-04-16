#include <stdio.h>
#include <conio.h>
int main(void)
{
    float notas[4];
    // declarando e inicializando o vetor notas
    int i;

    //entrada de dados
    for (i = 0; i <= 3; i++)
    {
        printf("Digite a nota do Aluno:");
        scanf("%f", &notas[i]);
    }

    //saida de dados
    for (i = 0; i <= 3; i++)
    {
        printf("Valor da nota %d %.2f\n", i, notas[i]);
    }
    getch();
    return 0;
}