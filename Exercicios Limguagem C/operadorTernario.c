#include <stdio.h>

int main(void)
{

    int numero;
    printf("Digite um numero:");
    scanf("%d", &numero);

    //Condição ? comando para condição verdadeira : comando para condição falsa
    numero >= 0 ? numero++ : numero--;

    printf("O novo valor de numero e : %d", numero);

    return 0;
}

/* O operador ternario usado no programa foi NUMERO >= 0 ? NUMERO++ : NUMERO--;
O comando if else equivalente ao operador ternario acima seria ?

if(numero >= 0)
    numero++;
    else
    numero--

*/
