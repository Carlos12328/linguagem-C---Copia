#include <stdio.h>
int A, nota[7], resto;

/*
nota[0] � a nota de 100
nota[1] � a nota de 50
nota[2] � a nota de 20
nota[3] � a nota de 10
nota[4] � a nota de 5
nota[5] � a nota de 1
*/
 
int main() {
 
    scanf ("%i", &A);
    printf("%i\n", A);
    
    //nota [0] � igual a 576 / 100 = 5,76, mas como a variavel � inteira pega s� o cinco
    nota[0] = A /100; 
    printf("%i nota(s) de R$ 100,00\n", nota[0]);
    
    /*resto[0] � igual a sobra da divis�o entre 576 e 100 que � 76, e a nota[1]
	recebe 76/50 que � 1,52 mas como � inteiro pega s� o 1 */
	resto = (A % 100); 
    nota[1] = resto / 50;
    
    printf("%i nota(s) de R$ 50,00\n", nota[1]);
    
    //nota 20
	resto = (resto % 50); 
	nota[2] = resto / 20; 

    printf("%i nota(s) de R$ 20,00\n", nota[2]);
    
    //nota 10
    resto = (resto % 20); 
	nota[3] = resto / 10; 

    printf("%i nota(s) de R$ 10,00\n", nota[3]);
    
    //nota 5
    
    resto = (resto % 10); 
	nota[4] = resto / 5; 

    printf("%i nota(s) de R$ 5,00\n", nota[4]);
    
    // nota 2
    
    resto = (resto % 5); 
	nota[5] = resto / 2;

    printf("%i nota(s) de R$ 2,00\n", nota[5]);
    
 
    //nota 1
    
    resto = resto % 2;
	nota[6] = resto;

    printf("%i nota(s) de R$ 1,00\n", nota[6]);
    
 
    return 0;
}
