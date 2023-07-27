#include <stdio.h>
#include <stdlib.h>
/*Este programa lê o nome e 3 notas de um aluno.
Calcula e mostra a média informando se está aprovado 
ou não*/
float media(float n1, float n2, float n3){
	return (n1+n2+n3)/3;
}
void criterio(float m){
	if (m>=6)
	   printf("Aprovado(a)\n");
	else
		printf("Reprovado(a)\n");
}
main(){
	char nome[20], resp;
	float a,b,c,med;
	do{
		system ("cls");
		printf("Digite o nome: ");
		scanf("%s", &nome);
		printf("Digite 3 notas: ");
		scanf("%f %f %f",&a,&b,&c);
		med=media(a,b,c);
		printf("\n%s, sua media eh %.2f\n",nome, med);
		criterio(med);
		printf("Digite s para continuar: ");
		//fflush(stdin);
		scanf(" %c",&resp);
	}while (resp=='s');
}
