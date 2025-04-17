#include <stdio.h>

int main() {
    int torre = 0;
    int rainha = 0;
    int bispo = 0;

    printf("TORRE:\n");
    for (torre = 0; torre < 5; torre++) {
        printf("Direita\n");
    }

    printf("\n");

    printf("RAINHA:\n");
    while (rainha < 8) {
        printf("Esquerda\n");
        rainha++;
    }

    printf("\n");

    printf("BISPO:\n");
    bispo = 0;
    do {
        printf("Cima - Direita\n");
        bispo++;
    } while (bispo < 5);

    int esquerda = 1;

    printf("\n");

    printf("CAVALO:\n");

    while (esquerda--){

        for (int baixo = 0; baixo < 2; baixo++)
        {
            printf("baixo\n");
        }
        printf("Esquerda\n");
    }
    
    return 0;
}
