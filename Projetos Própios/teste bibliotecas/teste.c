#include <stdio.h>
#include <locale.h>
#include "biblioteca.h"

int main(){
	setlocale(LC_ALL,"");
	cadastro();
	system("cls");
	impressao();
}