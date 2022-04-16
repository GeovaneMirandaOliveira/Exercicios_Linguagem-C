#include <stdio.h>
#define ICMS 0.18; // declaração da constante

int main(void)
{
    float preco_produto, valor_icms, valor_total;
    //outro modo de declarar constante
    //const tipo nome_da_constante = valor_da_constante
    const float frete = 10.50;

    printf("Informe o valor do produto:");
    scanf("%f", &preco_produto);

    valor_icms = preco_produto * ICMS;

    printf("Valor de impsoto a ser pago : R$ %.2f\n", valor_icms);

    valor_total = preco_produto + valor_icms + frete;

    printf("valor total a pagar : %.2f", valor_total);

    return 0;
}
