#include <stdio.h>

// --------- Constantes para controle de movimentos ---------
const int TORRE_MOV = 5;
const int BISPO_LINHAS = 3;
const int BISPO_COLUNAS = 3;
const int RAINHA_MOV = 8;
const int CAVALO_LINHAS = 3;
const int CAVALO_COLUNAS = 3;

// --------- Função recursiva para a Torre (movimento em linha reta) ---------
void moverTorre(int casas) {
    if (casas <= 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// --------- Função recursiva para o Bispo, com loops aninhados ---------
void moverBispo(int linhaAtual) {
    if (linhaAtual >= BISPO_LINHAS)
        return;

    for (int coluna = 0; coluna < BISPO_COLUNAS; coluna++) {
        printf("Cima Direita\n"); // Diagonal
    }

    moverBispo(linhaAtual + 1);
}

// --------- Função recursiva para a Rainha ---------
void moverRainha(int casas) {
    if (casas <= 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// --------- Função com loops complexos para o Cavalo ---------
void moverCavalo() {
    for (int i = 0; i < CAVALO_LINHAS; i++) {
        for (int j = 0; j < CAVALO_COLUNAS; j++) {
            // Movimento válido em "L": duas casas para cima e uma para a direita
            if (i == 0 && j == 0) {
                printf("Cima\n");
                continue; // pula para próxima iteração
            }

            if (i == 1 && j == 0) {
                printf("Cima\n");
                continue;
            }

            if (i == 2 && j == 0) {
                printf("Direita\n");
                break; // finaliza o movimento do cavalo
            }
        }
    }
}

// --------- Função principal ---------
int main() {
    // ---------- Torre ----------
    printf("Movimento da Torre:\n");
    moverTorre(TORRE_MOV);

    // ---------- Bispo ----------
    printf("\nMovimento do Bispo:\n");
    moverBispo(0);

    // ---------- Rainha ----------
    printf("\nMovimento da Rainha:\n");
    moverRainha(RAINHA_MOV);

    // ---------- Cavalo ----------
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
