#include <stdio.h>
#include <locale.h>

char pai[30], mae[30], crianca[30];

void cadastro_crianca(){
	printf("Digite o nome da criança: ");
		fflush(stdin);
		fgets(crianca,30,stdin);
}

void cadastro_pais(){
	printf("Digite o nome da mae: ");
		fflush(stdin);
		fgets(mae,30,stdin);
	printf("Digite o nome do pai: ");
		fflush(stdin);
		fgets(pai,30,stdin);
	
}

void impressao(){
	
	printf("Nome da criança: %s\n", crianca);
	printf("Nome da mãe: %s\n", mae);
	printf("Nome da pai: %s\n", pai);
}


int main(){
	setlocale(LC_ALL, "");
	cadastro_crianca();
	cadastro_pais();
	system("cls");
	impressao();
	
	
}
