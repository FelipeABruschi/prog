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

}

void empty(Pilha *pilha)
{

}

int size(Pilha *pilha)
{
    return ++pilha->topo;
}

