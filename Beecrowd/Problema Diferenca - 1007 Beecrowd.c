/*
Problema 1007 Beecrowd

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um
espaço em branco antes e depois da igualdade.
*/



#include <stdio.h>
 
 int A,B,C,D, diferenca;
 
int main() {
 
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);
    
    diferenca = (A*B-C*D);
    
    printf("DIFERENCA = %i\n", diferenca);
    
    return 0;
}
