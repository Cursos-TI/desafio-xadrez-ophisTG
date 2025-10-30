// Xadrez

#include <stdio.h>


// Recursividade da torre:
void movimento_torre(int direcao, int casas_restante, int contagem){
    // Define o encerramento:
    if (casas_restante == 0) return;

    // Imprime as casas:
    switch (direcao){
        case 1:
            printf("Frente\n");
            break;
        case 2:
            printf("Direita\n");
            break;
        case 3:
            printf("Trás\n");
            break;
        case 4:
            printf("Esquerda\n");
            break;
        default:
            printf("Direção inválida\n");
            return;
        }
    contagem++;
    printf("%s: %d\n", (contagem == 1) ? "Casa movida" : "Casas movidas", contagem);

    // Loop recursivo:
    movimento_torre(direcao, casas_restante - 1, contagem);
}

// Define as escolhas do usuário para a peça:
void peca_torre() {
    int direcao, casas;
    printf("Escolha a direção do movimento: \n");
    printf("-----------------------------\n");
    printf("[1] Frente\n");
    printf("[2] Direita\n");
    printf("[3] Trás\n");
    printf("[4] Esquerda\n");
    printf("Direção: ");
    scanf("%d", &direcao);

    printf("Quantas casas deseja mover: ");
    scanf("%d", &casas);

    movimento_torre(direcao, casas, 0);
}

// Recursividade do Bispo:
void movimento_bispo(int direcao, int casas_restante, int contagem){
    // Define saída:
    if (casas_restante == 0) return;
    
    switch (direcao){
            case 1:
                // Loop externo vertical:
                for (int i = 0; i < 1; i++){
                    printf("Cima\n");
                    // Loop interno diagonal:
                    for (int direita = 0; direita < 1; direita++){
                        printf("Direita\n");
                    }
                }
                break;
            case 2:
                // Loop externo vertical:
                for (int i = 0; i < 1; i++){
                    printf("Cima\n");
                    // Loop interno diagonal:
                    for (int esquerda = 0; esquerda < 1; esquerda++){
                        printf("Esquerda\n");
                    }
                }
                break;
            case 3:
                // Loop externo vertical:
                for (int i = 0; i < 1; i++){
                    printf("Baixo\n");
                    // Loop interno diagonal:
                    for (int direita = 0; direita < 1; direita++){
                        printf("Direita\n");
                    }
                }
                break;
            case 4:
                // Loop externo vertical:
                for (int i = 0; i < 1; i++){
                    printf("Baixo\n");
                    // Loop interno diagonal:
                    for (int esquerda = 0; esquerda < 1; esquerda++){
                        printf("Esquerda\n");
                    }
                }
                break;
            default:
                printf("Direção inválida\n");
                return;
    }
    contagem++;
    printf("%s: %d\n", (contagem == 1) ? "Casa movida" : "Casas movidas", contagem);
    // Loop recursivo:
    movimento_bispo(direcao, casas_restante - 1, contagem);
}

// Define as escolhas do usuário para a peça:
void peca_bispo() {                // Requisito: usar 'break'
    int direcao, casas;
    printf("Escolha a direção do movimento: \n");
    printf("-----------------------------\n");
    printf("[1] Direita para cima\n");
    printf("[2] Esquerda para cima\n");
    printf("[3] Direita para baixo\n");
    printf("[4] Esquerda para baixo\n");
    printf("Direção: ");
    scanf("%d", &direcao);

    printf("Quantas casas deseja mover: ");
    scanf("%d", &casas);

    movimento_bispo(direcao, casas, 0);
}

// Recursividade da Rainha:
void movimento_rainha(int direcao, int casas_restante, int contagem){
    // Define saída:
    if (casas_restante == 0) return;

    switch (direcao){
        // CASOS VERTICAIS E HORIZONTAIS:
        case 1:
            printf("Frente\n");
            break;
        case 2:
            printf("Direita\n");
            break;
        case 3:
            printf("Trás\n");
            break;
        case 4:
            printf("Esquerda\n");
            break;
        // CASOS DIAGONAIS:
        case 5:
            // Loop externo vertical:
            for (int i = 0; i < 1; i++){
                printf("Cima\n");
                // Loop interno diagonal:
                for (int direita = 0; direita < 1; direita++){
                    printf("Direita\n");
                }
            }
            break;
        case 6:
            // Loop externo vertical:
            for (int i = 0; i < 1; i++){
                printf("Cima\n");
                // Loop interno diagonal:
                for (int esquerda = 0; esquerda < 1; esquerda++){
                    printf("Esquerda\n");
                }
            }
            break;
        case 7:
            // Loop externo vertical:
            for (int i = 0; i < 1; i++){
                printf("Baixo\n");
                // Loop interno diagonal:
                for (int direita = 0; direita < 1; direita++){
                    printf("Direita\n");
                }
            }
            break;
        case 8:
            // Loop externo vertical:
            for (int i = 0; i < 1; i++){
                printf("Baixo\n");
                // Loop interno diagonal:
                for (int esquerda = 0; esquerda < 1; esquerda++){
                    printf("Esquerda\n");
                }
            }
        default:
            printf("Direção inválida\n");
            return;
    }
    contagem++;
    printf("%s: %d\n", (contagem == 1) ? "Casa movida" : "Casas movidas", contagem);
    // Loop recursivo:
    movimento_rainha(direcao, casas_restante - 1, contagem);
}

// Define as escolhas do usuário para a peça:
void peca_rainha(){
    int direcao, casas;
    printf("Escolha a direção do movimento: \n");
    printf("-----------------------------\n");
    printf("Verticais e horizontais:\n");
    printf("[1] Frente\n");
    printf("[2] Direita\n");
    printf("[3] Trás\n");
    printf("[4] Esquerda\n");
    printf("Diagonais:\n");
    printf("[5] Direita para cima\n");
    printf("[6] Esquerda para cima\n");
    printf("[7] Direita para baixo\n");
    printf("[8] Esquerda para baixo\n");
    printf("Direção: ");
    scanf("%d", &direcao);

    printf("Quantas casas deseja mover: ");
    scanf("%d", &casas);

    movimento_rainha(direcao, casas, 0);

}

int main() {
    // Define e inicializa variaveis:
    int opcao, bispo = 1, rainha = 1, cavalo = 0;
    
    // Imprime opções do jogador:
    printf("===== TABULEIRO =====\n");
    printf("[1] TORRE\n");
    printf("[2] BISPO\n");
    printf("[3] RAINHA\n");
    printf("[4] CAVALO\n");
    printf("[0] SAIR\n");
    printf("=====================\n");

    // Escolha do jogador: 
    printf("Escolha a peça que deseja mover: ");
    scanf("%d", &opcao);

    // Verifica se a opção escolhida é valida(apenas números inteiros.):
    while(opcao < 0 || opcao > 4){
        printf("Opção inválida, tente novamente: ");
        scanf("%d", &opcao);
    }

    // Estrutura de decisão baseada na escolha do jogador:
    switch(opcao){
        case 1:
            //Movimenta a torre na vertical e horizontal:
            peca_torre();
            break;
        case 2:
            // Movimenta o bispo na diagonal:
            peca_bispo();
            break;
        case 3:
            // Movimenta a rainha em qualquer direção:
            peca_rainha();
            break;
        case 4:
            // Movimenta o cavalo em L:
            printf("-----------------------------\n");
            printf("Cavalo se move...\n");

            // Variáveis para controlar os passos
            int passos_verticais = 0;
            int passos_horizontais = 0;
            int total_passos = 3;

            // Loop externo principal para controlar total de passos:
            for (int i = 0; i < total_passos; i++) {
                
                // Loop aninhado:
                for (int j = 0; j < 1; j++) {
                    
                    // Move para Cima:
                    if (passos_verticais < 2) {
                        printf("Cima\n");
                        passos_verticais++;
                        cavalo++;
                        printf("%s: %d\n", (cavalo == 1) ? "Casa movida" : "Casas movidas", cavalo);
                        continue; 
                    }

                    // Move para Direita:
                    if (passos_horizontais < 1) {
                        printf("Direita\n");
                        passos_horizontais++;
                        cavalo++;
                        printf("%s: %d\n", (cavalo == 1) ? "Casa movida" : "Casas movidas", cavalo);
                    }
                }
                // Sai do loop principal:
                if (passos_verticais == 2 && passos_horizontais == 1) {
                    break;
                }
            }
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
