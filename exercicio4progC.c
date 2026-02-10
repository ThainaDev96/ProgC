/* Escreva um algoritmo que leia dois valores para as variáveis A e B, e efetue as trocas dos
valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a
possuir o valor da variável A. Apresentar os valores trocados.*/


#include <stdio.h>

int main(void)
{
    float a = 0, b = 0, temp = 0;

    printf("Informe o valor de A: ");
    scanf("%f", &a);

    printf("Informe o valor de B: ");
    scanf("%f", &b);

    // Troca de valores
    temp = a;
    a = b;
    b = temp;

    printf("Os valores trocados sao: A = %.2f, B = %.2f\n", a, b);

    return 0;
}
