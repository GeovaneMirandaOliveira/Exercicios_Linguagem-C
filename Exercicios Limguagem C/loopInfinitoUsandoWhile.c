#include <stdio.h>
#include <conio.h>
int main(void)
{
    int n;

    /* while (1) – condição verdadeira
  gerando um loop infinito
  */

    while (1)
    {
        printf("Digite um numero inteiro:");
        scanf("%d", &n);

        if (n == 7)
        {
            printf("Saindo do loop…\n");
            break; //força a saída imediata do loop
        }

        printf("Numero: %d\n", n);
    }

    printf("Fim de programa");
    getch();
    return (0);
}