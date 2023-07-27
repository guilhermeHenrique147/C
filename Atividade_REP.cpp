#include <stdio.h>
#include <stdlib.h>
/*Este programa lê o nome e 3 notas de um aluno.
Calcula as duas maiores notas e mostra a média aritimética apartir delas informando se está aprovado, 
em recuperação ou reprovado*/
float media(float n1, float n2){		
	return (n1+n2)/2;
}
void criterio(float m){
	if (m>=7)
	   printf("Aprovado(a)\n");
	if (m<7 && m>=4)
	   printf("Aluno(a) em Recuperacao\n");
	if (m<4)
		printf("Reprovado(a)\n");
}
main(){
	char nome[20], resp;
	float a,b,c,med;
	do{
		system ("cls");
		printf("Digite o nome: ");
		scanf("%s", &nome);
		do{
        	printf("Digite a primeira nota: ");
        	scanf("%f", &a);
        }while(a < 0 || a > 10);
        		do{
        	printf("Digite a segunda nota: ");
        	scanf("%f", &b);
        }while(b < 0 || b > 10);
        		do{
        	printf("Digite a terceira nota: ");
        	scanf("%f", &c);
        }while(c < 0 || c > 10);
		if (a>b && a<c)
	   		med=media(a,c);	
		if (b>a && b<c)
	   		med=media(b,c);
		if (c>a && c<b)
	   		med=media(c,b);
		else
	  		med=media(a,b);
		printf("\n%s, sua media eh %.2f\n",nome, med);
		criterio(med);
		printf("Digite s para continuar: ");
		//fflush(stdin);
		scanf(" %c",&resp);
	}while (resp=='s');
}
