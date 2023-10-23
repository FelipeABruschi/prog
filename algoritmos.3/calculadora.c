#include "libprg/libprg.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    Pilha pilhacalc;
    cria_pilha(&pilhacalc, 4);

    char entrada[10];
    int numero, resultado, operando1, operando2;

    while (1)
    {
        imprime_pilha(&pilhacalc);

        printf("digite a operacao desejada: ");
        scanf("%s", entrada);

        if(isdigit(entrada[0]) != 0)
        {
            numero = atoi(entrada);
            push(&pilhacalc, numero);
        } else {
            switch (entrada[0])
            {
                case '+':
                    operando2 = pop(&pilhacalc);
                    operando1 = pop(&pilhacalc);
                    resultado = operando1 + operando2;
                    push(&pilhacalc, resultado);
                    break;

                case '-':
                    operando2 = pop(&pilhacalc);
                    operando1 = pop(&pilhacalc);
                    resultado = operando1 - operando2;
                    push(&pilhacalc, resultado);
                    break;

                case '*':
                    operando2 = pop(&pilhacalc);
                    operando1 = pop(&pilhacalc);
                    resultado = operando1 * operando2;
                    push(&pilhacalc, resultado);
                    break;

                case '/':
                    operando2 = pop(&pilhacalc);
                    operando1 = pop(&pilhacalc);

                    if (operando2 != 0) {
                        resultado = operando1 / operando2;
                        push(&pilhacalc, resultado);
                    } else
                        printf("divisao por 0.\n");
                    break;
            }
        }
    }

    imprime_pilha(&pilhacalc);

    return 0;
}
