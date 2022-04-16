#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //criando variavel ponteiro para arquivo
    FILE *pont_arq;

    //Abrindo o arquivo
    pont_arq = fopen("arquivo2.txt", "a");

    //fechando arquivo
    fclose(pont_arq);

    //msg para usuario
    printf("\nO arquivo foi criado com sucesso!\n");

    system("pause");
    return 0;
}
