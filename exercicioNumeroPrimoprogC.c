/*Crie um programa que diga quais são os números primos no intervalo de até 20*/
#include <stdio.h>
#include <stdbool.h>
int main(void) 
{
	int x=50;
	int j=0;
	int i=0;
	
	for(i=2;i<x; i++)
	{
		bool dividiu= false;
		for (j=i-1; j>1; j--)
		
		{
			if(i%j==0)
			dividiu=true;
		}
	
		if(!dividiu)
		{
			printf(" %d ",i);
		}
	}
}
	
