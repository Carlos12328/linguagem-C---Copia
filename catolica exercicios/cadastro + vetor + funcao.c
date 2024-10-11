#include <stdio.h>
#include <locale.h>


char nome[3][30];
float n1[4],n2[4],media[4];
int i;

void cadastro(){

		printf("Digite o nome do %iº aluno: ", i);
		fflush(stdin);
		fgets(nome[i],20,stdin);
		
		printf("Digite a N1 do %iº aluno: ", i);
			scanf("%f", &n1[i]);
		printf("Digite a N2 do %iº aluno: ", i);
			scanf("%f", &n2[i]);
			
		media[i] = (n1[i]+n2[i])/2;	
	
}

void impressao(){
		printf("\n\nNome do %iº aluno: %s\n", i, nome[i]);
		printf("N1 do %iº aluno: %.2f\n", i, n1[i]);
		printf("N2 do %iº aluno: %.2f\n", i, n2[i]);
		printf("Média do %iº aluno: %.2f\n",i, media[i]);
		sleep(1);
		printf("-------------------------------------------");
			
	}


int main(){
	for (i=1; i <= 3; i++){
		setlocale(LC_ALL,"");
		cadastro();
		system("cls");
	}
	for (i=1; i <= 3; i++){
		impressao();
	}
}
