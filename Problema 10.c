#include <stdio.h>
#include <locale.h>
// Encontre a soma de todos os primos abaixo de dois milh�es.
// Fun��o para verificar se � primo
int primos(int num)
{
	int i;
	// Loop que come�a em 2 e vai at� a raiz quadrada de num
	for (i = 2; i * i <= num; i++)
	{
		// Se num � divis�vel por i, ent�o num n�o � primo
		if (num % i == 0) return 0;
	}
	// Sem divisor foi encontrado, num � primo
	return 1;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num = 2000000; // Limite de 2 milh�es
	long long soma = 0; // Usaremos long long para a soma
	int i;
	for (i = 2; i < num; i++)
	{
		if (primos(i))
		{
			soma += i;
		}
	}

	printf("Soma de todos os n�meros primos abaixo de 2 milh�es: %lld\n", soma);

	return 0;
}
