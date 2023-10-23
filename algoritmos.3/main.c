#include <stdio.h>
#include "libprg/libprg.h"
#include <stdlib.h>

/*int main()
{
    Lista minha_lista;
    cria_lista(&minha_lista, 1000);

    minha_lista.valores[0] = 10;
    minha_lista.valores[1] = 20;
    minha_lista.valores[2] = 25;
    minha_lista.n_elementos = 3;

    imprime_lista(&minha_lista);

    printf("%d\n", busca_linear(&minha_lista, 10));

    inserir_n(&minha_lista, 12);

    imprime_lista(&minha_lista);

    Fila minha_fila;
    cria_fila(&minha_fila, 10);

    imprime_fila(&minha_fila);

    Pilha minhapilha;
    cria_pilha(&minhapilha, 12);

    push(&minhapilha, 10);
    push(&minhapilha, 5);
    push(&minhapilha, 2);

    imprime_pilha(&minhapilha);

    printf("%d\n", size(&minhapilha));

    pop(&minhapilha);
    pop(&minhapilha);

    imprime_pilha(&minhapilha);

    int a = 3, b = 1, c, d;


    printf("%d\n", a - b);

    return 0;
}

int main()
{
    Pilha pilhacalc;
    cria_pilha(&pilhacalc, 4);

    int i, x1, x2, x3, x4, aux1, aux2, resultado;
    char op1, op2, op3;

    printf("digite quantas operacoes quer fazer (max 3): ");
    scanf("%d", &i);

    switch (i)
    {
        case 1: printf("digite a operaçao: ");
            scanf("%d%d%c", &x1, &x2, &op1);
            push(&pilhacalc, x1);
            push(&pilhacalc, x2);
            if(op1 == '+')
            {
                resultado = pop(&pilhacalc) + pop(&pilhacalc);
                push(&pilhacalc, resultado);
            } else if (op1 == '-'){
                aux1 = pop(&pilhacalc);
                aux2 = pop(&pilhacalc);
                resultado = aux2 - aux1;
                push(&pilhacalc, resultado);
            } else if(op1 == '*'){
                resultado = pop(&pilhacalc) * pop(&pilhacalc);
                push(&pilhacalc, resultado);
            } else if(op1 == '/'){
                aux1 = pop(&pilhacalc);
                aux2 = pop(&pilhacalc);
                resultado = aux2 / aux1;
                push(&pilhacalc, resultado);
            }

            break;
        case 2: printf("digite a operaçao: ");
            scanf("%d%d%d%c%c", &x1, &x2, &x3, &op1, &op2); break;
        case 3: printf("digite a operaçao: ");
            scanf("%d%d%d%d%c%c%c", &x1, &x2, &x3, &x4, &op1, &op2, &op3); break;
        default: printf("quantidade de operacoes invalida.\n");
    }



    return 0;
}*/