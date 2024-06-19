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



    return 0;
}