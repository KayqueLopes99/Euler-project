#include <stdio.h>
// Trig�meo Pitag�rico Especial e suuas condi��es.
int main(void)
{
	int numero_a, numero_b, numero_c; // Vari�veis do trig�meo pitag�rico.
	int pitagorico = 0; // Vari�vel inicializada com zero do trig�meo pitag�rico.

	// LOOP Poss�veis valores para o lado A.
	for(numero_a = 1; numero_a < 500; numero_a++)
	{
		// LOOP Poss�veis valores para o lado B que s�o maiores a A.
		for(numero_b = numero_a; numero_b < 500; numero_b++)
		{
			// Calcula o valor de C com base nos valores atuais de A B.
			numero_c = (1000 - numero_a - numero_b);

			// Verifica se 'c' � maior que 'b' e se 'a^2 + b^2 = c^2'.
			if((numero_c > numero_b) && ((numero_a * numero_a) +(numero_b * numero_b) == (numero_c * numero_c)))
			{
				// Se a condi��o for verdadeira, imprime "Atendido!" e calcula o produto.
				printf("Atendido!\n");
				pitagorico = (numero_a * numero_b * numero_c);
				printf("Resultado da multiplicacao: %d", pitagorico);
				printf("\n A = %d\n B = %d\n C = %d\n", numero_a, numero_b, numero_c);
			}
		}
	}

	return 0;
}
