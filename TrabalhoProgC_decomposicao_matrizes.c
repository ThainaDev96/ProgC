/*Implemente um código capaz de comprimir em formato RLE uma matriz dada e realizar a sua 
posterior descompressão. Cada célula da matriz de entrada será formada por um número 
inteiro com valores entre 0 e 255.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int matriz[5][5];
    int i, j;
    int val_inicial = 0;
    int val_atual = 0;
    int cont = 0;
	
	srand(time(NULL));
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
        	matriz[i][j] = rand() % 2;
            /*do {
                printf("Digite os valores (entre 0 e 1): ");
                scanf("%d", &matriz[i][j]);
                if(matriz[i][j] == 0 && matriz[i][j] == 1) {
                    printf("Valor fora do intervalo permitido (0 e 1). Tente novamente.\n");
                }
            } while(matriz[i][j] == 0 && matriz[i][j] == 1);*/
        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    val_inicial = matriz[0][0];
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
        	val_atual = matriz[i][j];
        	if(val_inicial == val_atual){
        		cont++;
			} else {
				printf("%d %d\n", val_inicial, cont);
				val_inicial = val_atual;
				cont = 1;
			}
        }
    }
    printf("%d %d", val_inicial, cont);
    

}

