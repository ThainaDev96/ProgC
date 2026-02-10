/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem
do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e
depois a percentagem do distribuidor sobre o resultado). Supondo que a percentagem do
distribuidor seja de 28% e os impostos 45%. Escreva um algoritmo que leia o custo de fábrica
de um carro e informe o custo ao consumidor do mesmo. nao esqueca de converter as porcentsagens na declaracao da variavel*/
#include <stdio.h>
int main(void)
{
    float custoFabrica = 0, custoFinal = 0;
    float percentualImpostos = 0.45;  // 45% de impostos
    float percentualDistribuidor = 0.28;  // 28% de percentual do distribuidor

    printf("Informe o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    // Calculando o custo com impostos
    float custoComImpostos = custoFabrica + (custoFabrica * percentualImpostos);

    // Calculando o custo final com o percentual do distribuidor
    custoFinal = custoComImpostos + (custoComImpostos * percentualDistribuidor);

    printf("O custo final ao consumidor do carro é: R$ %.2f\n", custoFinal);

    return 0;
}

