#include <stdio.h>
#include <stdlib.h> 
#include "hanoi.h"

void inicializarPilha(Pilha *p) {
    p->topo = -1;
}

int pilhaVazia(Pilha *p) {
    return p->topo == -1;
}

int pilhaCheia(Pilha *p) {
    return p->topo == MAX_DISCOS - 1;
}

void empilhar(Pilha *p, int disco) {
    if (!pilhaCheia(p)) {
        p->discos[++(p->topo)] = disco;
    }
}

int desempilhar(Pilha *p) {
    if (!pilhaVazia(p)) {
        return p->discos[(p->topo)--];
    }
    return -1;
}

void exibirDisco(int disco, int larguraBase) {//função usada para exibir os discos das torres
    int espacos = larguraBase - disco;
    for (int i = 0; i < espacos; i++) printf(" ");
    for (int i = 0; i < disco; i++) printf("_");
    printf("|");
    for (int i = 0; i < disco; i++) printf("_");
    for (int i = 0; i < espacos; i++) printf(" ");
    //criação da torre com os discos
}

void exibirTorres(Pilha *a, Pilha *b, Pilha *c, int n) {
    int larguraBase = n;
    printf("\nTorres:\n");
    for (int i = n - 1; i >= 0; i--) {
        // Torre A
        if (i <= a->topo) {
            exibirDisco(a->discos[i], larguraBase);
        } else {
            exibirDisco(0, larguraBase);
        }

        printf("  ");

        // Torre B
        if (i <= b->topo) {
            exibirDisco(b->discos[i], larguraBase);
        } else {
            exibirDisco(0, larguraBase);
        }

        printf("  ");

        // Torre C
        if (i <= c->topo) {
            exibirDisco(c->discos[i], larguraBase);
        } else {
            exibirDisco(0, larguraBase);
        }

        printf("\n");
    }
    // Adicionar uma linha em branco para garantir que as letras fiquem alinhadas
    for (int i = 0; i < larguraBase * 2 + 1; i++) printf(" ");
    printf("  ");
    for (int i = 0; i < larguraBase * 2 + 1; i++) printf(" ");
    printf("  ");
    for (int i = 0; i < larguraBase * 2 + 1; i++) printf(" ");
    printf("\n");

    printf("  A");
    for (int i = 0; i < larguraBase * 2; i++) printf(" ");
    printf("  B");
    for (int i = 0; i < larguraBase * 2; i++) printf(" ");
    printf("  C\n");
}

void moverDisco(Pilha *origem, Pilha *destino, char nomeOrigem, char nomeDestino) {
    if (pilhaVazia(origem)) {
        printf("A torre %c esta vazia!\n", nomeOrigem);
        return;
    }
    if (!pilhaVazia(destino) && origem->discos[origem->topo] > destino->discos[destino->topo]) {
        printf("Movimento invalido! Disco maior nao pode ficar sobre disco menor.\n");
        return;
    }
    int disco = desempilhar(origem);
    empilhar(destino, disco);
    printf("Mover disco %d da torre %c para a torre %c\n", disco, nomeOrigem, nomeDestino);
}

void reiniciarJogo(Pilha *a, Pilha *b, Pilha *c, int n) {
    inicializarPilha(a);
    inicializarPilha(b);
    inicializarPilha(c);
    for (int i = n; i >= 1; i--) {
        empilhar(a, i);
    }
}
