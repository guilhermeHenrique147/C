#include <stdio.h>
#include <stdlib.h>
#include "lista2.h"

typedef struct lista2{
	int codigo;
	float preco;
	struct lista2 *ant;
	struct lista2 *prox;
}Lista 2;

void firstLast(Lista2 *item){
	lista2 *aux;//variável usada para percorrer a lista
	if(item==NULL)//procedimento para ver se a lista esta vazia
		printf("A lista esta vazia !!!\n");
    for(aux=item;aux!=NULL;aux=aux->prox)
     	 if(aux->ant==NULL or aux->prox==NULL)//procedimento para filtrar o primeiro e o ultimo item da lista
         	printf("Codigo: %d   Preco: %2.f\n", aux->codigo , aux->preco);
    printf("\n");
}

void precoMaior(Lista2 *item, float valor){
	lista2 *aux;//variável usada para percorrer a lista
	if(item==NULL)//procedimento para ver se a lista esta vazia
		printf("A lista esta vazia !!!\n");
    for(aux=item;aux!=NULL;aux=aux->prox)
     	 if(aux->preco > valor)//procedimento para filtrar os itens de maior valor que o requisitado
         	printf("Codigo: %d   Preco: %2.f\n", aux->codigo , aux->preco);
    printf("\n");
}
