
/***********************************************************************

	*	Filename: main.c

	*	Description: 

	*	Created: 20/02/2020

	*	Author: Anderson Silva Souza, andersonsilva015@gmail.com

***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
  int op1 = 0;
  int op2 = 0;
  int valor;

  Fila *f;

  do{
	printf("========== Menu ===========\n");
	printf("+		1- Criar fila       \n");
	printf("+	    2- Inserir          \n");
	printf("+	    3- Remover          \n");
	printf("+	    4- Imprime          \n");
	printf("+	    5- vazia?           \n");
	printf("+	    6- Destruir         \n");
	printf("============================+\n"); //testettetet
    scanf("%d", &op1);
	
	switch(op1){
	  case 1:
            system("clear");
	        f = criar();
            printf("Fila criada com sucesso!!\n");
 	     break;
	  case 2:
        system("clear");
 	    printf("Digite o valor a ser inserido na fila\n");
 		scanf("%d", &valor);
		printf("Pretende inserir no inicio ou fim?\n1-inicio\n2-fim");
		scanf("%d",&op2);
		if(op2 == 2){
	     		inserir_fim(f, valor);
			printf("Valor inserido no final da fila\n");
		}else{
  			inserir_inicio(f, valor);
			printf("Valor inserido no inicio da fila!\n");
		}
	     break;
	  case 3:
        system("clear");
		printf("Digite a opção para remover \n1 - Remover do inicio \n2 - Remover do fim");
		scanf("%d", &op2);
		if(op2 == 1)
	  	    valor = remover_inicio(f);
		else
		    valor = remover_fim(f);

	    printf("Valor removido: %d\n", valor);
	   break;
	  case 4:
	    system("clear");
            imprimir(f);
	    break;
	  case 5:
        system("clear");
	
		
  	 	  if(vazia(f))
            printf("A fila está vazia\n");
  		  else 
            printf("A fila não está vazia\n");
		
		break;
	  case 6:
        system("clear");
        liberar(f);
		printf("Encerrado com sucesso");
		break;
          default: printf("Opção Inválida!");
	}
  }while(op1 != 6);
  return(0);
}