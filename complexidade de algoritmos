ALGORITMO 1:

#include <stdio.h>
#include <math.h>

/* Esse programa pede para o usuario escolher a quantidade
de numeros que ele vai digitar, em seguida, quando começar
a digitar os numeros, o programa ira verificar o maior 
numero digitado e quantas vezes esse numero foi digitado */

int main()
{
    int qtd, cont = 1, maior = -INFINITY, n;

    printf("digite a quantidade de numeros: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++) //instrução principal O(n)
    {
        printf("digite um numero: ");
        scanf("%d", &n);
        if(n == maior)
            cont++;
        if(n > maior)
            maior = n;
    }

    printf("maior numero: %d\n", maior);
    printf("maior numero foi lido %d vezes.\n", cont);

 /* Esse programa é de complexidade linear, tem apenas
 um comando for que varia conforme o numero digitado
 pelo usuario, aumentando linearmente o tempo de execução.
 Função da complexidade no tempo na notaçao big O: f(n) = O(n). */

    return 0;
}

ALGORITMO 2:

#include <stdio.h>
#include <math.h>

/*  Esse programa verifica o maior valor
de uma matriz e printa o valor e a posicao
dele na matriz  */

void maior(int linha, int coluna)
{
    int matriz[linha][coluna]; // entrada de dados que vai definir o tamanho da matriz
    int maior = matriz[0][0] = -INFINITY; // definindo o maior sendo a posicao [0][0]
    int x, y; // variaveis auxiliares para mostrar os indices da posicao do maior valor

    for (int i = 0; i < linha; i++) //operaçao principal O(n)
        for (int j = 0; j < coluna; j++) //operacao principal O(n)
        {
            printf("entre com um valor na posicao [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
                x = i;
                y = j;
            }
                
        }
    printf("maior valor = %d, na posicao [%d][%d]\n", maior, x, y);

    return 0;
}
int main()
{
    /*funcao f(n) = O(n²), algoritmo de complexidade quadrática, com um for
    dentro de outro, cada loop de 'linha' é executado 'coluna' vezes,
    aumentando muito o numero de repetições com pouca variação da 
    quantidade de dados da entrada, sendo inutilizavel para valores muito altos*/

    maior(3, 2); //execucao rapida

    maior(100, 200); // execucao media

    maior(50000, 9000000); //execucao inviavel
    
    return 0;
}
