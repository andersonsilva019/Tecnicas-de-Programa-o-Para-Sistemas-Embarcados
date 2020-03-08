#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define N 10

struct fila{
   int v[N]; //vetor2
   int fim;
};

Fila* criar(){
   Fila *f = (Fila*) malloc(sizeof(Fila));
    f->fim = -1; 
    return(f);
}

int cheia(Fila *f){
   if(f->fim == N-1) return 1;
   else return(0);
}

void inserir_fim(Fila *f, int valor){
   if(cheia(f)) printf("A fila está cheia");
   else{
       f->fim = f->fim+1;
      f->v[f->fim] = valor;
   }
}

void inserir_inicio(Fila *f, int valor){
   int vl,i;
   if(cheia(f)) printf("A fila está cheia");
   else{
      if(f->fim==-1){
         f->fim += 1;
         f->v[f->fim] = valor;
      }else{
         vl = f->v[f->fim];
         for(i=f->fim;i >= 1; i--)
         f->v[i] = f->v[i-1];
         f->v[0] = valor;
         inserir_fim(f,vl);
      }
   }
}

int vazia(Fila *f){
  if(f->fim == -1) return 1;
  else return 0;
}

int remover_inicio(Fila *f){
   int i, valor;
   if(vazia(f)){ 
	printf("A fila está vazia, não é possivel fazer remoção\n");
    exit(1);
   }
   valor = f-> v[0]; 
   for(i=1;i <=f->fim; i++)
       f->v[i-1] = f->v[i];
   
    f->fim = f->fim-1;
    
   return(valor); 
}

int remover_fim(Fila *f){
   int i, valor;
   if(vazia(f)){ printf("A fila está vazia, não é possivel fazer remoção");
    exit(1);
   }
   valor = f-> v[f->fim]; 
   f->fim = f->fim-1;
    
   return(valor); 
}

void imprimir(Fila *f){
    
    if(!vazia(f))
        printf("\nO elemento  do inicio da Fila é %d\n", f->v[0]);
}

void liberar(Fila *f){
  free(f);
}
