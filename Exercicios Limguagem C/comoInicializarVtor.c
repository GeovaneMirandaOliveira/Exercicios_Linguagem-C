#include <stdio.h>

int main(void)
{
    //declarando e atribuindo valores ao vetor
    int vetor[20], i;

    //imprimindo valor do vetor
    for (i = 0; i <= 19; i++)
    {
        vetor[i] = 0 ; // armazenando zero nas possicoes do vetor
    }

    for (i = 0; i <= 19; i++)
    {
        printf("Vetor [%d] = %d\n", i, vetor[i]); //exibindo valoress
    }

    
    return 0;
}
