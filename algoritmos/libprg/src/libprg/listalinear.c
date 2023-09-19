#include <libprg/libprg.h>
#include <stdlib.h>
#include <stdio.h>

void cria_lista(Lista *lista, int tam_max)
{
    lista->valores = malloc(tam_max * (sizeof(int)));
    if(lista->valores == NULL)
    {
        printf("erro na alocação.\n");
        exit(1);
    }
    lista->tam_max = tam_max;
    lista->n_elementos = 0;
}

void imprime_lista(Lista *lista)
{
    for(int i = 0; i < lista->n_elementos; i++)
        printf("%d ", lista->valores[i]);
    printf("\n");
}

int busca_linear(Lista *lista, int x)
{
    //retorna 1 se o elemento x pertence a lista,
    //  ou 0 caso contrario.
    for(int i = 0; i < lista->n_elementos; i++)
        if(x == lista->valores[i])
            return 1;
    return 0;
}

void inserir_n(Lista* lista, int x)
{
    for(int i = 0; i < lista->n_elementos; i++)
        if(x == lista->valores[i])
            exit(1);

}