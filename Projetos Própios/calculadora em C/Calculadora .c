#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");
   
   float numero1, numero2, resultado;
   int tipoDeConta;

   printf("Bem vindo a calculadora!!\n");

   printf("Digite o primeiro número: ");
   scanf("%f", &numero1);

   printf("Digite o segundo número: ");
   scanf("%f", &numero2);

   printf("Selecione o operador:\n");
   printf("1 - Adição\n");
   printf("2 - Subtração\n");
   printf("3 - Multiplicação\n");
   printf("4 - Divisão\n");

   scanf("%d", &tipoDeConta);

//switch é a mesmo coisa de escolha, os casos irão acontecer caso a regra nele ser verdadeira referente a variavél
// break para o codigo
//default é a mesma coisa de "outrocaso"
   switch (tipoDeConta) {
      case 1:
         resultado = numero1 + numero2;
         printf("Resultado: %.2f\n", resultado);
         break;
      case 2:
         resultado = numero1 - numero2;
         printf("Resultado: %.2f\n", resultado);
         break;
      case 3:
         resultado = numero1 * numero2;
         printf("Resultado: %.2f\n", resultado);
         break;
      case 4:
         if (numero2 != 0) {
            resultado = numero1 / numero2;
            printf("Resultado: %.2f\n", resultado);
         } else {
            printf("Divisão por zero não é permitida.\n");
         }
         break;
      default:
         printf("Operador inválido.\n");
         break;
   }

   return 0;
}