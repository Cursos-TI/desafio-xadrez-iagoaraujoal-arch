#include <stdio.h>

// Definindo constantes para as movimentações das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8


int main() {
    printf("--- Simulacao de Movimento das Pecas ---\n\n");

    // Movimentacao do Bispo (utilizando 'for') 
    printf("Movimentacao do Bispo (5 casas na diagonal superior direita):\n");
    
    // A movimentacao do Bispo é uma combinacao de 'Cima' e 'Direita'
    // O loop 'for' é ideal para um número fixo de repetições
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n"); 

    //  Movimentacao da Torre (utilizando 'while')
    printf("Movimentacao da Torre (5 casas para a direita):\n");
    
    // O loop 'while' é usado para um número de repetições que pode ser variável
    int contador_torre = 0;
    while (contador_torre < MOVIMENTO_TORRE) {
        printf("Direita\n");
        contador_torre++; // Incrementa o contador para evitar um loop infinito
    }
    printf("\n");

    // Movimentacao da Rainha (utilizando 'do-while')
    printf("Movimentacao da Rainha (8 casas para a esquerda):\n");
    
    // O loop 'do-while' garante que o bloco de codigo seja executado pelo menos uma vez,
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador
    } while (contador_rainha < MOVIMENTO_RAINHA);
    printf("\n");

    return 0; 
}


    
