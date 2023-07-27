#include <stdio.h>
#include <stdlib.h>
#include "lista2.h"
#include "pilha.h"
#include "filasmart.h"

int trocaCarac(char *f, char m, char p){
	int cont;
	for(int i=0,f[i];f!= "/0";i++){
		if(f[i] == m){
			f[i] = p;
			cont++;
		}	
	}return cont;
}

typedef struct {
  nome char[31],
  dia int,
  mes int,
  ano int
}Amigo; 

void aniversariantes(Amigo *a, int mes){
	Amigo *aux
	aux=a;	
	for(i=0,a=aux;i<3;i++,P++){
		if(a->mes == mes)
			cont ++;
	}
	printf("Quantidade de anivesariantes no mes escolhido: %d/n", cont);
}

