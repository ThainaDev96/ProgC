#include <stdio.h> // Biblioteca para entrada e saída de dados
#include <stdbool.h>// Biblioteca para usar valores booleanos (true e false)
#include <stdlib.h>   // Biblioteca para usar funções como rand() e srand()
#include <time.h>     // Biblioteca para usar a função time() na geração de números aleatórios

#define _LINHAS_    10
#define _COLUNAS_   10
#define _BOMBA_     9
#define _BANDEIRA_  20
#define _QT_BOMBAS_ 20
#define _ABERTA_    true
#define _FECHADA_   false
#define _VAZIA_     0

// Função que exibe o tabuleiro na tela
void MostraTabuleiro(int Tab[_LINHAS_][_COLUNAS_])
{
    int L, C;

    for(L=0; L < _LINHAS_; L++)
    {
        for(C=0; C < _COLUNAS_; C++)
        {
            printf(" %2d ", Tab[L][C]);// Imprime cada elemento da matriz, percorre linhas e colunas
        }
        printf("\n");
    }
}
// Função que preenche o tabuleiro inicializando com zeros e distribuindo bombas aleatoriamente
void PreencheTabuleiro(int Tab[_LINHAS_][_COLUNAS_])
{
    int L, C;

    for(L=0; L < _LINHAS_; L++)
    {
        for(C=0; C < _COLUNAS_; C++)
        {
            Tab[L][C] = _VAZIA_;//Inicializa a célula do tabuleiro como vazia, ou seja, sem bombas ou números ao redor
        }
    }    

    int qtBombasPosicionadas = 0; 
    //bool ocupada = true;
    while(qtBombasPosicionadas < _QT_BOMBAS_)
    {
        L = rand() % (_LINHAS_  - 1);// Gera uma posição aleatória dentro das linhas
        C = rand() % (_COLUNAS_ - 1);// Gera uma posição aleatória dentro das colunas

        if(Tab[L][C] != _BOMBA_)// Verifica se a posição já não contém uma bomba, se nao houver bomba , for diferente de bomba
        {
            Tab[L][C] = _BOMBA_;// Insere uma bomba na posição
            qtBombasPosicionadas++;// Incrementa o contador de bombas posicionadas
        }
    }

    for(L=0; L < _LINHAS_; L++)
    {
        for(C=0; C < _COLUNAS_; C++)
        {
         
         if(Tab[L][C] == _BOMBA_)
         {

         }
         else
         {
         
            int cont = 0;
 			// Verifica cada uma das 8 direções possíveis ao redor da célula
            // para cima
            if(L > 0) if(Tab[L-1][C] == _BOMBA_) cont++;
            /*if(L>0)
            {
                if(Tab[L-1][C] == _BOMBA_)
                {
                    cont++;
                }
            } */
            // para baixo
            if(L < (_LINHAS_ - 1)) if(Tab[L+1][C] == _BOMBA_) cont++;

            // para direita
            if(C < (_COLUNAS_ - 1)) if(Tab[L][C+1] == _BOMBA_) cont++;
            
            // para esquerda
            if(C > 0) if(Tab[L][C-1] == _BOMBA_) cont++;

            // diagonal sup dir
            // diagonal sup esq
            // diagonal inf dir
            // diagonal inf esq
			    // diagonal superior direita
                if(L > 0 && C < (_COLUNAS_ - 1) && Tab[L-1][C+1] == _BOMBA_) cont++;
                
                // diagonal superior esquerda
                if(L > 0 && C > 0 && Tab[L-1][C-1] == _BOMBA_) cont++;
                
                // diagonal inferior direita
                if(L < (_LINHAS_ - 1) && C < (_COLUNAS_ - 1) && Tab[L+1][C+1] == _BOMBA_) cont++;
                
                // diagonal inferior esquerda
                if(L < (_LINHAS_ - 1) && C > 0 && Tab[L+1][C-1] == _BOMBA_) cont++;
                
            Tab[L][C] = cont; // Armazena o número de bombas ao redor na célula
         }            
        }
    }    


}


int main()
{

    srand(time(NULL));

    int TabConteudo[_LINHAS_][_COLUNAS_];// Inicializa o gerador de números aleatórios com base no tempo atual

    PreencheTabuleiro(TabConteudo);// Chama a função para preencher o tabuleiro
    MostraTabuleiro(TabConteudo); // Exibe o tabuleiro na tela

    return(0);
}

