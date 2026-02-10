#include <stdio.h> // Biblioteca para funções de entrada e saída (ex: printf)
#include <stdlib.h> // Biblioteca para alocação de memória dinâmica (ex: malloc, free)
#include <stdbool.h> // Biblioteca para usar o tipo bool (true ou false)
#include <time.h> // Biblioteca para medir tempo (clock, time)

// Função que exibe o vetor 
void MostrarVetor(int v[], int qt) {
    for (int i = 0; i < qt; i++) { // Percorre todo o vetor
        printf(" %d ", v[i]); // Imprime cada elemento
    }
    printf("\n"); // Quebra a linha ao final
}

// Função que implementa o algoritmo de ordenação Bubble Sort
void BubbleSort(int v[], int n) {
    bool troquei = true; // Variável para verificar se houve troca na iteração

    while (troquei) { // Continua enquanto houver troca
        troquei = false; // Começa a iteração assumindo que não houve troca

        for (int i = 0; i < n - 1; i++) { // Percorre o vetor até o penúltimo elemento
            if (v[i] > v[i + 1]) { // Compara elemento atual com o próximo
                int aux = v[i]; // Salva o valor atual em uma variável auxiliar
                v[i] = v[i + 1]; // Troca o valor atual pelo próximo
                v[i + 1] = aux; // Coloca o valor salvo na posição seguinte
                troquei = true; // Marca que houve uma troca
            }
        }
    }
}

// Função para preencher o vetor no melhor caso
void PreencherMelhorCaso(int v[], int n) {
    for (int i = 0; i < n; i++) { // Para cada posição do vetor
        v[i] = i; // Coloca o número crescente 
    }
}

// Função para preencher o vetor no pior caso 
void PreencherPiorCaso(int v[], int n) {
    for (int i = 0; i < n; i++) { // Para cada posição do vetor
        v[i] = n - 1 - i; // Coloca números decrescentes 
    }
}

// Função para preencher o vetor no caso médio 
void PreencherCasoMedio(int v[], int n) {
    for (int i = 0; i < n; i++) { // Para cada posição do vetor
        v[i] = rand() % (n * 10); // Gera valores aleatórios de 0 até n*10
    }
}

// Função para medir o tempo de execução de uma ordenação
void MedirTempo(void (*PreencherFunc)(int*, int), int n, const char* descricao) {
    int* v = (int*) malloc(sizeof(int) * n); // Aloca memória para um vetor de tamanho n

    if (v == NULL) { // Verifica se a alocação deu certo
        printf("Erro ao alocar memória\n"); // Mensagem de erro
        exit(1); // Encerra o programa
    }

    PreencherFunc(v, n); // Preenche o vetor usando a função passada (melhor, médio ou pior caso)

    clock_t inicio = clock(); // Marca o tempo inicial
    BubbleSort(v, n); // Ordena o vetor usando Bubble Sort
    clock_t fim = clock(); // Marca o tempo final

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // Calcula o tempo total em segundos

    printf("%s - Tamanho: %d - Tempo: %.2f segundos\n", descricao, n, tempo); // Exibe o tempo gasto

    free(v); // Libera a memória do vetor
}

int main(void) {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios

    int tamanhos[] = {10000, 50000, 100000, 200000}; // Vetor com os tamanhos a serem testados

    for (int i = 0; i < 4; i++) { // Para cada tamanho definido
        int n = tamanhos[i]; // Pega o tamanho atual

        MedirTempo(PreencherMelhorCaso, n, "Melhor caso"); // Mede e mostra o tempo no melhor caso
        MedirTempo(PreencherCasoMedio, n, "Caso médio"); // Mede e mostra o tempo no caso médio
        MedirTempo(PreencherPiorCaso, n, "Pior caso"); // Mede e mostra o tempo no pior caso

        printf("\n"); // Imprime uma linha em branco para separar os resultados
    }

    return 0; // Finaliza o programa
}

