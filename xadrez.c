#include <stdio.h>

void MovimentoTorre(int casas){

    if (casas > 0){
        printf("Direita\n");
        MovimentoTorre(casas-1);
    }
}
void MovimentoRainha(int casas){

    if (casas > 0){
        printf("Esquerda\n");
        MovimentoRainha(casas-1);
    }
}
void MovimentoBispo(int casas){
    if (casas > 0){

        int bispo = 0;
        int cima = 5;
    
        while (cima--){
            do {
                printf("cima, ");
            } while (bispo != 0);
            printf("Direita \n");}
    }
}



int main() {

    printf("TORRE:\n");

    MovimentoTorre(5);

    printf("\n");

    printf("RAINHA:\n");

    MovimentoRainha(8);

    printf("\n");

    printf("BISPO:\n");

    MovimentoBispo(5);
    printf("\n");

    printf("CAVALO:\n");

    int direita;

    while (direita < 2){

        for (int cima = 0; cima < 2, direita < 2; cima++, direita++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    
    return 0;
}
