#include <stdio.h>

int main() {
    // ---------- Torre ----------
    // A Torre se move em linha reta horizontalmente ou verticalmente
    int i;
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ---------- Bispo ----------
    // O Bispo se move na diagonal. Vamos simular 5 movimentos na diagonal para cima e à direita
    int contador = 0;
    printf("\nMovimento do Bispo:\n");
    while (contador < 5) {
        printf("Cima Direita\n");
        contador++;
    }

    // ---------- Rainha ----------
    // A Rainha pode se mover em qualquer direção. Aqui simulamos 8 movimentos para a esquerda
    int passos = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        passos++;
    } while (passos < 8);

    return 0;
}
