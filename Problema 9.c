#include <stdio.h>
// Trigêmeo Pitagórico Especial e suuas condições.
int main(void)
{
	int numero_a, numero_b, numero_c; // Variáveis do trigêmeo pitagórico.
	int pitagorico = 0; // Variável inicializada com zero do trigêmeo pitagórico.

	// LOOP Possíveis valores para o lado A.
	for(numero_a = 1; numero_a < 500; numero_a++)
	{
		// LOOP Possíveis valores para o lado B que são maiores a A.
		for(numero_b = numero_a; numero_b < 500; numero_b++)
		{
			// Calcula o valor de C com base nos valores atuais de A B.
			numero_c = (1000 - numero_a - numero_b);

			// Verifica se 'c' é maior que 'b' e se 'a^2 + b^2 = c^2'.
			if((numero_c > numero_b) && ((numero_a * numero_a) +(numero_b * numero_b) == (numero_c * numero_c)))
			{
				// Se a condição for verdadeira, imprime "Atendido!" e calcula o produto.
				printf("Atendido!\n");
				pitagorico = (numero_a * numero_b * numero_c);
				printf("Resultado da multiplicacao: %d", pitagorico);
				printf("\n A = %d\n B = %d\n C = %d\n", numero_a, numero_b, numero_c);
			}
		}
	}

	return 0;
}
