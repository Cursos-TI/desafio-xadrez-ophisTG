// Xadrez

#include <stdio.h>

int main() {
    // Define e inicializa variaveis:
    int opcao, bispo = 1, rainha = 1;
    
    // Imprime opções do jogador:
    printf("===== TABULEIRO =====\n");
    printf("[1] TORRE\n");
    printf("[2] BISPO\n");
    printf("[3] RAINHA\n");
    printf("[0] SAIR\n");
    printf("=====================\n");

    // Escolha do jogador: 
    printf("Escolha a peça que deseja mover: ");
    scanf("%d", &opcao);

    // Verifica se a opção escolhida é valida(apenas números inteiros.):
    while(opcao < 0 || opcao > 3){
        printf("Opção inválida, tente novamente: ");
        scanf("%d", &opcao);
    }

    // Estrutura de decisão baseada na escolha do jogador:
    switch(opcao){
        case 1:
            //Movimenta a torre 5 casas para a direita:
            printf("-----------------------------\n");
            for (int torre = 1; torre <=5; torre++){
                printf("Torre se move para direita...\n");
                printf("Direita...\n");
                printf("%s: %d\n", (torre ==1) ? "Casa movida" : "Casas movidas", torre);
            }
            break;
        case 2:
            // Movimenta o bispo 5 casas na diagonal:
            printf("-----------------------------\n");
            while (bispo <= 5) {
                printf("Bispo se move para diagonal direita acima: \n");
                printf("Cima\n");
                printf("Direita\n");
                printf("%s: %d\n", (bispo ==1) ? "Casa movida" : "Casas movidas", bispo);
                bispo++;
            }
            break;
        case 3:
            // Movimenta a rainha 8 casas para a esquerda
            printf("-----------------------------\n");
            do {
                printf("Rainha se movimenta para esquerda: ");
                printf("Esquerda...\n");
                printf("%s: %d\n", (rainha ==1) ? "Casa movida" : "Casas movidas", rainha);
                rainha++;
            } while (rainha <= 8);
            break;
        case 0:
            printf("-----------------------------\n");
            printf("Saindo do programa...\n");
            break;
        default:
            printf("-----------------------------\n");
            printf("Opção inválida, tente novamente: ");
            break;
    }

    return 0;
}