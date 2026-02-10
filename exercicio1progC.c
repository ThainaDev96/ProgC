 /*Escreva um algoritmo que determine o consumo médio de um automóvel sendo fornecida a
distância total percorrida pelo automóvel e o total de combustível gasto.*/

#include <stdio.h>

int main(void)
{
    float consumoMedio = 0, distancia = 0, combustivelTotal = 0;

    printf("Informe a distancia percorrida pelo automovel: ");
    scanf("%f", &distancia); 

    printf("Informe o total de combustivel gasto: ");
    scanf("%f", &combustivelTotal);

    // Verificação para evitar divisão por zero
    if (combustivelTotal > 0) {
        consumoMedio = distancia / combustivelTotal;
        printf("O consumo médio do automóvel é: %.2f km/l\n", consumoMedio);
    } else {
        printf("Erro: O total de combustível deve ser maior que zero.\n");
    }

    return 0;
}

