/*Exercicio:
Criar um vetor denominado A com 10 posições do tipo int , preencher o vetor recebendo dados
via teclado e multiplicar o conteudo de cada elemento do vetor A por 10 armazenando
o resultado desta multiplicação em outro vetor denomidado B
*/

#include <stdio.h>
#include <conio.h>
int main(void)
{

    // declarando e inicializando o vetor notas
    int vetA[10], vetB[10];
    int i;

    //entrada de dados
    for (i = 0; i <= 9; i++)
    {
        printf("%d Digite numero para vetor A:", i);
        scanf("%d", &vetA[i]);
    }

    printf("\n-------------------------saida de dados------------------------------\n");
    for (i = 0; i <= 9; i++)
    {
        printf("VetA[%d]=%d\n", i, vetA[i]);
    }

    printf("\n-------------------------saida de dados------------------------------\n");
    //mult para  vetor B
    for (i = 0; i <= 9; i++)
    {
        vetB[i] = vetA[i] * 10;
        printf("vetB[%d] = %d\n", i, vetB[i]);
    }

    getch();
    return 0;
}