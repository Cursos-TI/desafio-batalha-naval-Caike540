#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    printf("Desafio Batalha Naval!\n");

    printf("Posicionamento dos navios:\n");

    int tabuleiro[5][5] = {
        {0, 3, 0, 0, 0},
        {0, 3, 0, 0, 0},
        {0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 3, 3, 3}
    };

    printf("  A,B,C,D,E\n");



    for (int i = 0, linha = 1; i < 5, linha < 6; i++, linha++) {


        printf("%d ", linha);

    
    for (int j = 0; j < 5; j++) {
        printf("%d ", tabuleiro[i][j]);
    }


    printf("\n");

    }

    return 0;
}
