/*Escreva um algoritmo que efetue a apresentação do valor da conversão em real (R$) de um
valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também a
quantidade de dólares disponíveis com o usuário.*/

#include<stdio.h>
int main(void)
{
	float quantDolar,valorCotacao,real;
	
	printf("informe a quantidade de dolares que voce tem : ");
	scanf("%f", &quantDolar);
	
	printf("informe o valor da cotacao : ");
	scanf("%f", &valorCotacao);
		
	real= (quantDolar*valorCotacao);
	
	printf("o valor convertido para reais eh: %.2f\n", real);
	return 0;
	
}
