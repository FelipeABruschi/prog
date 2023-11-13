#include <libprg/libprg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void adddupla(nod **inicio, int dado)
{
    nod *novo = (nod*) malloc(sizeof(nod));
    novo->dado = dado;
    if (*inicio == NULL)
    {
        novo->proximo = novo;
        novo->anterior = novo;
    } else
    {
        novo->proximo = *inicio;
        novo->anterior = (*inicio)->anterior;
        novo->proximo->anterior = novo;
        novo->anterior->proximo = novo;
    }
    *inicio = novo;
}

bool removdupla(nod **inicio, int dado)
{
    nod *atual = *inicio;
    while (atual != NULL)
    {
        if (atual->dado == dado)
        {
            if (atual->proximo == atual)
                *inicio = NULL;
            else
            {
                atual->proximo->anterior = atual->anterior;
                atual->anterior->proximo = atual->proximo;
            }
            free(atual);
            return true;
        }
        atual = atual->proximo;
        if (atual == *inicio) break;
    }
    return false;
}

void destroidup(nod **inicio)
{
    nod *atual = *inicio;
    nod *prox;
    while (atual != NULL)
    {
        prox = atual->proximo;
        free(atual);
        atual = prox;
        if (atual == *inicio) break;
    }
    *inicio = NULL;
}

int buscarValorDup(nod **inicio, int valor)
{
    nod *atual = *inicio;
    int idLista = 0;
    while(atual != NULL)
    {
        if (atual->dado == valor)
            return idLista;
        idLista++;
        atual = atual->proximo;
        if (atual == *inicio) break;
    }
    return -1;
}

void imprimirLista(nod **inicio)
{
    nod *atual = *inicio;
    while(atual != NULL)
    {
        printf("%d ", atual->dado);
        atual = atual->proximo;
        if (atual == *inicio) break;
    }
}