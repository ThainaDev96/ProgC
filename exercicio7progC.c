/*Escreva um algoritmo que receba um valor que foi depositado e exiba o valor com
rendimento após um mês. Considere fixo o juro da poupança em 0,70% a. m.*/

#include <stdio.h>
int main(void)
{
    float valorDeposito = 0, rendimento = 0, valorFinal = 0;
    float jurosMensais = 0.007; // 0,70% ao mês convertido para decimal

    printf("Informe o valor depositado: ");
    scanf("%f", &valorDeposito);

    // Cálculo do rendimento
    rendimento = valorDeposito * jurosMensais;
    valorFinal = valorDeposito + rendimento;

    printf("O valor final após um mes com rendimento é: R$ %.2f\n", valorFinal);

    return 0;
}

