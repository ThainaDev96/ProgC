/*A ACME está vendendo seus produtos em 5 (cinco) prestações sem juros. Escreva um
algoritmo que receba um valor de uma compra e mostre o valor das prestações.*/
#include <stdio.h>
int main(void)
{
    float valorCompra = 0, prestacao = 0;

    printf("Informe o valor da compra: ");
    scanf("%f", &valorCompra);

    // Calculando o valor da prestação
    prestacao = valorCompra / 5;

    printf("O valor de cada prestacao é: R$ %.2f\n", prestacao);

    return 0;
}

