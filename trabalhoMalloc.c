#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

void MostrarVetor(int v[] , int qt)
{
	for(int i =0; i<qt; i++ )
	{
		//printf("Lista ordenada: %d\n",v[i]);
		printf(" %d ",v[i]);
	}
	printf("\n");
}

int main(void)
{
	srand(time(NULL));//inicia a semente do sorteador
	
	int n=100;
	int * v =(int * )malloc(sizeof(int) * n);//malloc:função que aloca a memoria sizeof:função que verifica o tamanho do tipo ex:int
	if(v == NULL)
	{
		printf("\erro ao alocar a  memoria\n");
		exit(-1);
	}
	for(int i= 0; i<n; i++)
	{
		//v[i]= um numero entre 0 e n*n
		v[i] = rand() % n*n; //n-i-1;
	}

	printf("\ndesordenado\n");
	MostrarVetor(v,n);
	
	bool troquei = true;
	while(troquei)
	{
		troquei=false;
		
		for (int i=0; i<n-1 ; i++)
		{
			if(v[i] > v[i+1])
			{
				int aux = v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				troquei = true;
		
			}
		}
	}
	
	printf("\nordenado\n");
	MostrarVetor(v,n);

}
