#include <libprg/libprg.h>
#include <stdlib.h>
#include <stdio.h>

void adicionar(no_t **inicio, int dado)
{
    no_t *novo = (no_t*) malloc(sizeof(no_t));
    novo->dado = dado;
    novo->proximo = *inicio;
    *inicio = novo;
}

bool remover(no_t **inicio, int dado)
{
    no_t *atual = *inicio;
    no_t *anterior = NULL;
    while (atual != NULL)
    {
        if (atual->dado == dado)
        {
            if (anterior == NULL)
                *inicio = atual->proximo;
            else
                anterior->proximo = atual->proximo;

            free(atual);
            return true;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    return false;
}