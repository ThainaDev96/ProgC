 /*Escreva um algoritmo que leia uma temperatura em graus Celsius e apresente-a convertida
em graus Fahrenheit. A fórmula de conversão é: F=(9*C+160) / 5, sendo F a temperatura em
Fahrenheit e C a temperatura em Celsius.
A fórmula de conversão de Celsius para Fahrenheit é:
F=9×C+160/5*/
#include <stdio.h>

int main(void)
{
    float celsius = 0, fahrenheit = 0;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("A temperatura em Fahrenheit eh: %.2f\n", fahrenheit);

    return 0;
}



