#include <stdio.h>
#include <conio.h>

/*Matriz bidimencional */

int main(void)
{
    int matriz[3][3], i, j;

    printf("\nDigite valor para os elementos da matriz\n\n");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }

    printf("\n\n******************* Saida de Dados ********************* \n\n");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\nElemento[%d][%d] = %d\n", i, j, matriz[i][j]);
        }

    getch();
    return (0);
}