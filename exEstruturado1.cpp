#include <stdio.h>
#include <stdlib.h>
typedef struct produto{
	int codigo;
	char nome[20];
	float preco;
	int qtde;
	}Produto;
//criar ponteiro para 3 produtos
//prencher typedef no scanf
//mostrar codigo,nome,preco,qtde,subtotal e o total no final
int main(){
	float subtotal, total;
	Produto *P, *Pa;
	P=(Produto*)malloc(sizeof(Produto)*3);
	Pa=P;
	for(int i=0; i<3; i++,P++){
		printf("\nDigite o codigo do produto: ");
		scanf("%d", P->codigo);
		printf("\nDigite o nome do produto: ");
		scanf("%s", P->nome);
		printf("\nDigite o preco do produto: ");
		scanf("%f", P->preco);
		printf("\nDigite a quantidade do produto: ");
		scanf("%d", P->qtde);
	}
	for(i=0,P=Pa;i<3;i++,P++){
		subtotal = P->preco * P->qtde;
		printf("\nCodigo: %d - Nome= %s - Preco= %f - Quantidade: %d - Subtotal: %f \n", P->codigo, P->nome, P->preco, P->qtde, subtotal);
		total = total + subtotal;
	}
	printf("\n Valor Total: %f", total);
	return 0;
} 