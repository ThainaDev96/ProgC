/* Escreva um algoritmo que receba o preço de custo de um produto e mostre o valor de venda.
Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual informado
pelo usuário.*/
#include <stdio.h>
int main(void)
{
    float precoCusto = 0, percentualAcrescimo = 0, valorVenda = 0;

    printf("Informe o preço de custo do produto: ");
    scanf("%f", &precoCusto);

    printf("Informe o percentual de acréscimo: ");
    scanf("%f", &percentualAcrescimo);

    // Calculando o valor de venda
    valorVenda = precoCusto + (precoCusto * percentualAcrescimo / 100);

    printf("O valor de venda do produto é: R$ %.2f\n", valorVenda);

    return 0;
}

