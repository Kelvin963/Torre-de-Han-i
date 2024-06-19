#ifndef HANOI_H
#define HANOI_H

#define MAX_DISCOS 10

typedef struct {
    int discos[MAX_DISCOS];
    int topo;
} Pilha;

void inicializarPilha(Pilha *p);
int pilhaVazia(Pilha *p);
int pilhaCheia(Pilha *p);