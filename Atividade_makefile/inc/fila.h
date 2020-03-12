#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef struct fila Fila;

Fila* criar();

void inserir_fim(Fila *f, int valor);

void inserir_inicio(Fila *f, int valor);

int remover_inicio(Fila *f);

int remover_fim(Fila *f);

int vazia(Fila *f);

int cheia(Fila *f);

void imprimir(Fila *f);

void liberar(Fila *f);