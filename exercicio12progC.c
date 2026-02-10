/* Escreva um algoritmo que conta a quantidade de números pares existentes numa matriz
NxN contendo números inteiros. A Matriz deve ser inicializada com números aleatórios e ter
seu conteúdo mostrado na tela para conferência.*/
#include <stdio.h>

int main(void) {
	int n = 100;
    int matriz[n][n]; // Declara uma matriz NxN
    int l, c; // Variáveis para percorrer as linhas (l) e colunas (c) da matriz.

    //(l=linha c=coluna)
    int contPar = 0; 
  
    srand(time(NULL));//função para colocar números aleatórios.// Inicializa a semente do gerador de números aleatórios para que os valores mudem a cada execução.
	 // Preenche a matriz com números aleatórios:
    for(l=0; l<n; l++)
    {
    	for(c=0; c<n; c++)
    	{
    		matriz[l][c] = rand() % 100;//devolve numero entre 0 a 1, %100 transformar em inteiro 
		}
	}
  
    
    for(l = 0; l < n; l++) {
        for(c = 0; c < n; c++) {
            if(matriz[l][c]%2 == 0) { // Se o número da posição atual da matriz for divisível por 2, ele é par.
                contPar++; // Incrementa no contador os números pares,armazena na memória.
            }
        }
    }
    
    printf("Matriz digitada:\n");
    for(l = 0; l < n; l++) {
        for(c = 0; c < n; c++) {
           	printf(" %2d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    	
    printf("Elementos pares: %d\n", contPar);
    
}

