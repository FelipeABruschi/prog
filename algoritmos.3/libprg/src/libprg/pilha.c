#include <libprg/libprg.h>
#include <stdlib.h>
#include <stdio.h>

void cria_pilha(Pilha *pilha, int capacidade)
{
    pilha->valores = malloc(capacidade * (sizeof(int)));

    pilha->topo = -1;
    pilha->capacidade = capacidade;
}

void imprime_pilha(Pilha *pilha)
{
    for(int i = 0; i <= pilha->topo; i++)
        printf("%d ", pilha->valores[i]);
    printf("\n");
}

void push(Pilha *pilha, int x)
{
    if(pilha->topo >= pilha->capacidade - 1)
    {
        printf("sua pilha esta cheia\n");
        exit(1);
    }

    pilha->topo++;
    pilha->valores[pilha->topo] = x;
}

int pop(Pilha *pilha)
{
    if(empty(pilha) == 1)
    {
        printf("pilha vazia\n");
        exit(1);
    }

    int valor_retirado = pilha->valores[pilha->topo];
    pilha->valores[pilha->topo] = 0;
    (pilha->topo)--;

    return valor_retirado;
}

int empty(Pilha *pilha)
{
    //return 1 se pilha vazia for true e 0 se for false
    if(pilha->topo < 0)
        return 1;
    return 0;
}

int size(Pilha *pilha)
{
    return pilha->topo + 1;
}

