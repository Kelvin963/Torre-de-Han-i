#include <stdio.h>
#include <stdlib.h> 
#include "hanoi.h"

int main(){
    Pilha A, B, C;
    int n;
    char origem, destino;

    printf("Digite o numero de discos: ");
    scanf("%d", &n);
    system("cls");

    while(n > MAX_DISCOS){
        printf("Numero maximo de discos eh %d\n", MAX_DISCOS);
        printf("Digite o numero de discos: ");
        scanf("%d", &n);
        system("cls");
    }

    inicializarPilha(&A);
    inicializarPilha(&B);
    inicializarPilha(&C);

    reiniciarJogo(&A, &B, &C, n);
    exibirTorres(&A, &B, &C, n);

    while (1) {
        printf("\nDigite o movimento (ex: A B) ou 'R' para reiniciar: ");//EX: Disco de A para B
        scanf(" %c", &origem);
        system("cls");

        if (origem == 'R') {
            reiniciarJogo(&A, &B, &C, n);
            exibirTorres(&A, &B, &C, n);
            continue;
        }
        system("cls");
        scanf(" %c", &destino);

        switch (origem) {
            case 'A':
                switch (destino) {
                    case 'B':
                        moverDisco(&A, &B, 'A', 'B');
                        break;
                    case 'C':
                        moverDisco(&A, &C, 'A', 'C');
                        break;
                    default:
                        printf("Torre destino invalida!\n");
                }
                break;
            case 'B':
                switch (destino) {
                    case 'A':
                        moverDisco(&B, &A, 'B', 'A');
                        break;
                    case 'C':
                        moverDisco(&B, &C, 'B', 'C');
                        break;
                    default:
                        printf("Torre destino invalida!\n");
                }
                break;
            case 'C':
                switch (destino) {
                    case 'A':
                        moverDisco(&C, &A, 'C', 'A');
                        break;
                    case 'B':
                        moverDisco(&C, &B, 'C', 'B');
                        break;
                    default:
                        printf("Torre destino invalida!\n");
                }
                break;
            default:
                printf("Torre origem invalida!\n");
        }

        exibirTorres(&A, &B, &C, n);
    }

    return 0;
}
