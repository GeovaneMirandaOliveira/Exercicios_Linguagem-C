#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pont_arq;
    int r;

    //Abrindo o arquivo para gravação
    pont_arq = fopen("arquivo2.txt", "w");

    //Gravando string noarquivo
    fputs("Programa em linguagem C.", pont_arq);

    //fechando arquivo
    fclose(pont_arq);

    system("pause");
    return 0;
}
