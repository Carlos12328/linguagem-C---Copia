/*Desenvolver um programa:

Solicitar o LOGIN: �adm�
Solicitar a Senha: �123�
(0,5 pto)

 

Se o Login n�o for correto, limpar a tela, solicitar o Login novamente.
(0,5 pto)

 

Ap�s Logar, receber 3 valores (tipo de vari�vel: reais);
Limpe a tela;
(0,5 pto)

 

Verifique os valores e informe nesta ordem:
MAIOR valor;
Valor intermedi�rio;
MENOR valor.
[caso tenham valores iguais, informar quais s�o iguais]

(1,0 pto)*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

char login[5];
int senha;

int main (void){
	
	setlocale(LC_ALL, "");
	
	printf("Digite seu login: ");
		fflush(stdin);
		fgets(login, 4, stdin);
	
	printf("Digite sua senha: ");
		scanf("%i", &senha);
		
	//Se as duas strings forem iguais, strcmp retorna 0
	while (strcmp(login, "adm") != 0){
	
		system("cls");	
		
		printf("Tente novamente, digite seu login: ");
			fflush(stdin);
			fgets(login, 4, stdin);		
		
	}
	
	//teste impress�o login e senha
	printf("%s", login);
	printf("%s", login);
}
 



