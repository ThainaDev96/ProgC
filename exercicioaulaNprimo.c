/*Crie um programa que diga quais são os números primos no intervalo de até 20*/
#include <stdio.h>
#include <stdbool.h>

bool ehprimo(int nro,int*cont)
{
	bool resp = true;
	int i;
	for (i=nro-1;i>1;i--)
	{
		(*cont)++;//operacao cast conversão 
		if(nro%i==0)
		{
			resp=false;
		}
	}
	return(resp);

}
void main()
{
	int i,x=20;
	int cont=0;
	for(i=2; i<=x; i++)
	{
		cont=0;
		if(ehprimo(i, &cont));
		{
			printf("%3d  : %2d \n",i,cont);
		}
	}
	
}
