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
