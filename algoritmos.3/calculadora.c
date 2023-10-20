#include "libprg/libprg.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    Pilha pilhacalc;
    cria_pilha(&pilhacalc, 4);

    int x1, x2, x3, x4;
    char operador;


    printf("entre com os valores para calcular:\n");
    scanf("%d", &x1);
    scanf("%d", &x2);

    push(&pilhacalc, x1);
    push(&pilhacalc, x2);

    printf("digite a operacao desejada: ");
    scanf("%c", &operador);

    switch(operador)
    {
        case '+':
    }


    return 0;
}