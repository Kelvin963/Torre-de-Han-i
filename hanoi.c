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