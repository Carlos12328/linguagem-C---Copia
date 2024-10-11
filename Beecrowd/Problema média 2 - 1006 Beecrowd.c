#include<stdio.h>

/*
beecrowd | 1006 - Média 2

Este programa lê três notas de um aluno, calcula a média 
ponderada com pesos 2, 3 e 5, e imprime o resultado no 
formato “MEDIA = X.X”*/

double a, b, c, x;

main(void){
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	a = a * 2;
	b = b * 3;
	c = c * 5;
	
	x = (a + b + c)/ 10;
	
	printf("MEDIA = %.1lf\n", x);
}
