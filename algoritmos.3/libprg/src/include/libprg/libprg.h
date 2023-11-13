#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

typedef struct {
    double value;
    int error;
} result_t;

typedef struct
{
    int *valores;
    int tam_max;
    int n_elementos;
}Lista;

typedef struct
{
    int *valores;
    int inicio;
    int fim;
    int capacidade;
}Fila;

typedef struct
{
    int *valores;
    int topo;
    int capacidade;
}Pilha;

typedef struct no
{
    int dado;
    struct no *proximo;
}no;

typedef struct nod {
    int dado;
    struct nod *proximo;
    struct nod *anterior;
} nod;

void cria_lista(Lista *lista, int tam_max);
void imprime_lista(Lista *lista);
int busca_linear(Lista *lista, int x);
void inserir_n(Lista* lista, int x);
void remove_n(Lista *lista, int x);

void cria_fila(Fila *fila, int capacidade);
void imprime_fila(Fila *fila);

void cria_pilha(Pilha *pilha, int capacidade);
void imprime_pilha(Pilha *pilha);
void push(Pilha *pilha, int x);
int pop(Pilha *pilha);
int size(Pilha *pilha);
int empty(Pilha *pilha);

void add(no **inicio, int dado);
bool remover(no **inicio, int dado);
void imprimir(no **inicio);
void destruir(no **inicio);
int buscarValor(no **inicio, int valor);
void addord(no **inicio, int dado);

void adddupla(nod **inicio, int dado);
bool removdupla(nod **inicio, int dado);
void destroidup(nod **inicio);
int buscarValorDup(nod **inicio, int valor);

        typedef enum { SUM, SUB } operation_t;

result_t sub(double a, double b);
result_t sum(double a, double b);
result_t compute(double a, double b, operation_t op);

#endif
