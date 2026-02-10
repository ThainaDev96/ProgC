/*2)Escreva um algoritmo que leia um nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês(em dinheiro).Sabendo que esse vendedor 
ganha 15% de comissão sobre suas vendas efetuadas , informar  seu nome o salário fixo e o salário final do mês.*/
	
#include<stdio.h>
int main(void)
{
	float salarioFixo=0,comissao=0.15,totalVendas=0,salarioFinal=0;
	char vendedor[10]="         ";
	
	printf("informe o seu nome : ");
	scanf("%s", &vendedor);
	
	printf("informe o seu salário fixo : ");
	scanf("%f", &salarioFixo);
	
	printf("informe o total de vendas do mês : ");
	scanf("%f", &totalVendas);
	
	
	salarioFinal=salarioFixo + (totalVendas * 0.15);

	
	printf("o valor do salario final eh: %.2f\n", salarioFinal);
	
}

