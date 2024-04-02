#include <stdio.h>
/*Se listarmos todos os n�meros naturais menores do que 10 que s�o
m�ltiplos de 3 ou 5, temos: 3, 5, 6 e 9. A soma desses m�ltiplos � 23.
Seu desafio � encontrar a soma de todos os m�ltiplos de 3 e 5 que s�o
menores do que 1000*/ 

1  int main() // Fun��o principal do programa
2  {
3      int k; // Vari�vel para o loop
4      int soma = 0; // Vari�vel para armazenar a soma
5      for (k = 1; k < 1000; k++) // Loop de 1 a 999
6      {
7          if(k % 3 == 0 || k % 5 == 0) // Verifica se o n�mero � m�ltiplo de 3 ou 5
8          {
9              printf("Multiplo: %d \n", k); // Imprime o m�ltiplo
10             soma += k; // Adiciona o m�ltiplo � soma
11         }
12     }
	printf("Soma de todos: %d \n", soma);
	return 0;
}
