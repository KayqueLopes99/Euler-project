// O problema 5 do Projeto Euler é o seguinte:
// 2520 é o menor número que pode ser dividido por cada um dos números de 1 a 10 sem deixar resto.
// Qual é o menor número positivo que é divisível por todos os números de 1 a 20?"

#include <stdio.h> 
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "portuguese"); 

	int i, divisor; 

	int resultado = 1; // Inicializa com 1, pois é o menor número que é divisível por todos os números.

	for(i = 1; i <= 20; i++) // Loop que percorre os números de 1 a 20. 
	{
       divisor = resultado; // Atribuição do resultado obtido até agora.
       
	   // Enquanto divisor não for divisível por i.
		while (divisor % i != 0) 
		{
			// Adiciona resultado ao divisor até que seja divisível por i
			divisor += resultado;
		}

      resultado = divisor; // Atualiza o valor de resultado para divisor. No fim temos o MMC.

	}

	printf("%d\n", resultado); 

	return 0; 
}

