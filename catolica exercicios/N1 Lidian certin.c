#include<stdio.h>
#include<locale.h>

float n1,n2,media,alunos[5];

char nome[20];

main(void){
	
	setlocale(LC_ALL,"");

//cadastro
	
	printf("---------- SISTEMA ESCOLA ----------\n");	
	printf("DIGITE A QUANTIDADE DE ALUNOS PARA CADASTRAR: \n");
		scanf("%f",&alunos);
	
	printf("NOME DO ALUNO: \n");
		fflush(stdin);
		fgets(nome,10,stdin);
		
	printf("VALOR DA N1: \n");
		scanf("%f",&n1);
		
	printf("VALOR DA N2:  \n");
		scanf("%f",&n2);
	
//media
	media = n1+n2/2;	
 	if(media>=7){
 		printf("****** APROVADO *******\n");
	 }
	else{
		printf("****** REPROVADO *******\n");
	}
	
	printf("---------------- IMPRESSÃO -----------------\n");		
//impressão
	printf("NOME ALUNO: %s",nome);	
	printf("NOTA 1: %f\n",n1);
	printf("NOTA 2: %f\n",n2);
	printf("MÉDIA: %f\n",media);
	
	
	
	
	
}











