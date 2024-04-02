#include <stdio.h>
/*Se listarmos todos os números naturais menores do que 10 que são
múltiplos de 3 ou 5, temos: 3, 5, 6 e 9. A soma desses múltiplos é 23.
Seu desafio é encontrar a soma de todos os múltiplos de 3 e 5 que são
menores do que 1000*/ 

1  int main() // Função principal do programa
2  {
3      int k; // Variável para o loop
4      int soma = 0; // Variável para armazenar a soma
5      for (k = 1; k < 1000; k++) // Loop de 1 a 999
6      {
7          if(k % 3 == 0 || k % 5 == 0) // Verifica se o número é múltiplo de 3 ou 5
8          {
9              printf("Multiplo: %d \n", k); // Imprime o múltiplo
10             soma += k; // Adiciona o múltiplo à soma
11         }
12     }
	printf("Soma de todos: %d \n", soma);
	return 0;
}
