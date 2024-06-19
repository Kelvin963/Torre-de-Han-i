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
void empilhar(Pilha *p, int disco);
int desempilhar(Pilha *p);
void exibirTorres(Pilha *a, Pilha *b, Pilha *c, int n);
void moverDisco(Pilha *origem, Pilha *destino, char nomeOrigem, char nomeDestino);
void reiniciarJogo(Pilha *a, Pilha *b, Pilha *c, int n);

#endif