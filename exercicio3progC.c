/*Escreva um algoritmo que leia o nome de um aluno e as notas das três provas que ele
obteve no semestre. No final informar o nome do aluno e a sua média (aritmética).*/

#include <stdio.h>

int main(void)
{
    char nome[50]; // Array para armazenar o nome do aluno
    float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

    printf("Informe o nome do aluno: ");
    scanf("%s", nome); 
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3; // Cálculo da média

    printf("O aluno %s teve uma media de: %.2f\n", nome, media);

    return 0;
}
