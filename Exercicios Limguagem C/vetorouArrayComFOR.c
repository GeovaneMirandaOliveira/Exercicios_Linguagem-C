#include <stdio.h>
#include <conio.h>
int main(void)
{
    int i;
    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    // declarando e inicializando o vetor notas

    printf("Exibindo os Valores do Vetor \n\n");

    for (i = 0; i <= 4; i++)
    {
        printf("notas[%d] = %.1f\n", i, notas[i]);
    }

    getch();
    return 0;
}