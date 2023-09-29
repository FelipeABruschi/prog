#include <stdio.h>
#include "libprg/libprg.h"
#include <stdlib.h>

int main()
{
    /*Lista minha_lista;
    cria_lista(&minha_lista, 1000);

    minha_lista.valores[0] = 10;
    minha_lista.valores[1] = 20;
    minha_lista.valores[2] = 25;
    minha_lista.n_elementos = 3;

    imprime_lista(&minha_lista);

    printf("%d\n", busca_linear(&minha_lista, 10));

    inserir_n(&minha_lista, 12);

    imprime_lista(&minha_lista);*/

    Fila minha_fila;
    cria_fila(&minha_fila, 10);

    imprime_fila(&minha_fila);

    return 0;
}
