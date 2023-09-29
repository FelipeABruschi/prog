#include <libprg/libprg.h>
#include <stdlib.h>
#include <stdio.h>

void cria_fila(Fila *fila, int capacidade)
{
    fila->valores = malloc(capacidade * (sizeof(int)));

    fila->inicio = 0;
    fila->fim = 0;
    fila->capacidade = capacidade;
}

void imprime_fila(Fila *fila)
{
    for(int i = 0; i < fila->valores; i++)
        printf("%d ", fila->valores[i]);
    printf("\n");
}

void enfileirar(Fila *fila, int x)
{

}