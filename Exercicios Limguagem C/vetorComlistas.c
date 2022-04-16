#include <stdio.h>

int main(void)
{
    //declarando e atribuindo valores ao vetor
    int i;

    //inicializando vetor com lista de valores
    int vetor[10] = {10, 40, 89, 39, 45, 64, 98, 57, 78, 90, 87, 98, 86}; //{} preenche o valore do vetor

    //imprimindo valor do vetor
    for (i = 0; i <= 10; i++)
    {
        printf("Vetor [%d] = %d\n", i, vetor[i]); //exibindo valoress
    }

    return 0;
}