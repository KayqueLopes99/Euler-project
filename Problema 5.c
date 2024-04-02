// O problema 5 do Projeto Euler � o seguinte:
// 2520 � o menor n�mero que pode ser dividido por cada um dos n�meros de 1 a 10 sem deixar resto.
// Qual � o menor n�mero positivo que � divis�vel por todos os n�meros de 1 a 20?"

#include <stdio.h> 
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "portuguese"); 

	int i, divisor; 

	int resultado = 1; // Inicializa com 1, pois � o menor n�mero que � divis�vel por todos os n�meros.

	for(i = 1; i <= 20; i++) // Loop que percorre os n�meros de 1 a 20. 
	{
       divisor = resultado; // Atribui��o do resultado obtido at� agora.
       
	   // Enquanto divisor n�o for divis�vel por i.
		while (divisor % i != 0) 
		{
			// Adiciona resultado ao divisor at� que seja divis�vel por i
			divisor += resultado;
		}

      resultado = divisor; // Atualiza o valor de resultado para divisor. No fim temos o MMC.

	}

	printf("%d\n", resultado); 

	return 0; 
}

