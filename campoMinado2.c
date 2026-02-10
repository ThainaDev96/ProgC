#include <stdio.h>
#include <stdbool.h>

#define _LINHAS_    10
#define _COLUNAS_   10
#define _BOMBA_     5
#define _BANDEIRA_  20
#define _QT_BOMBAS_ 3
#define _ABERTA_    true
#define _FECHADA_   false
#define _VAZIA_     0

void MostraTabuleiro(int Tab[_LINHAS_][_COLUNAS_])
{
    int L, C;

    for(L=0; L < _LINHAS_; L++)
    {
        for(C=0; C < _COLUNAS_; C++)
        {
            printf(" %2d ", Tab[L][C]);
        }
        printf("\n");
    }
}

void PreencheTabuleiro(int Tab[_LINHAS_][_COLUNAS_])
{
    int L, C;

    for(L=0; L < _LINHAS_; L++)
    {
        for(C=0; C < _COLUNAS_; C++)
        {
            Tab[L][C] = _VAZIA_;
        }
    }    

    int qtBombasPosicionadas = 0;
    while(qtBombasPosicionadas < _QT_BOMBAS_)
    {
        L = rand() % (_LINHAS_  - 1);
        C = rand() % (_COLUNAS_ - 1);

        if(Tab[L][C] != _BOMBA_)
        {
            Tab[L][C] = _BOMBA_;
            qtBombasPosicionadas++;
        }

    }
}

int main()
{

    srand(time(NULL));
    int TabConteudo[_LINHAS_][_COLUNAS_];

    PreencheTabuleiro(TabConteudo);
    MostraTabuleiro(TabConteudo);

    return(0);
}
