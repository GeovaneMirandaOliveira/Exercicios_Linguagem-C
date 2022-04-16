#include <stdio.h>
#include <conio.h>
int main(void)
{
    int n;

    /*
  laço for vazio gera um loop infinito
  
  pois na prática, como não existe a condição
  ela é considerada verdadeira
  */

    for (;;) //loop infinito
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        if (n == 7)
        {
            printf("Saindo do loop...\n");
            break; //força a saída do loop
        }

        printf("Numero: %d\n", n);
    }

    printf("Fim de programa");
    getch();
    return (0);
}