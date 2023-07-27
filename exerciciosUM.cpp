#include <stdio.h>
#include <stdlib.h>
void contaLetras(char *p){
	int qtdElementos= tam(*p);
	int contador = 0, i = 0, j = 0, teste = 0;
	char charVerificaAtual, vetorPalavraDois[quantidadeElementos];

	for(i=0;i<quantidadeElementos;i++){
    	vetorPalavraDois[i] = '\0';
	}
	for(i=0;vetorPalavra[i]!='\0';i++){
    	charVerificaAtual = vetorPalavra[i];
    	verificarExistencia(vetorPalavraDois,charVerificaAtual,&teste);
    	if(teste == 1){

    }else if(teste == 0){
        for(j=0;vetorPalavra[j]!='\0';j++){
            if(charVerificaAtual == vetorPalavra[j]){
                contador++;
            }
        }
    vetorPalavraDois[i]=charVerificaAtual;
    printf("%c Ocorreu %d.\n", charVerificaAtual,contador);
    contador = 0;
    teste = 0;
    }
	}
}

int tam (char *s){
	int n=0;
	for(int i=0; s[i]!=‘\0’; i++)
		n++;
	return n;
}

int main(){
	char nome[];
	char *p;
	int resp;
	do{
		system ("cls");
		printf("Digite o nome: ");
		scanf("%s", &nome);
		p=nome;
		contaLetras(p);
		printf("Digite s para continuar: ");
		//fflush(stdin);
		scanf(" %c",&resp);
	}while (resp=='s');
}
