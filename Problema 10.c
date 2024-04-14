#include <stdio.h>
#include <locale.h>
// Encontre a soma de todos os primos abaixo de dois milhões.
// Função para verificar se é primo
int primos(int num)
{
	int i;
	// Loop que começa em 2 e vai até a raiz quadrada de num
	for (i = 2; i * i <= num; i++)
	{
		// Se num é divisível por i, então num não é primo
		if (num % i == 0) return 0;
	}
	// Sem divisor foi encontrado, num é primo
	return 1;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num = 2000000; // Limite de 2 milhões
	long long soma = 0; // Usaremos long long para a soma
	int i;
	for (i = 2; i < num; i++)
	{
		if (primos(i))
		{
			soma += i;
		}
	}

	printf("Soma de todos os números primos abaixo de 2 milhões: %lld\n", soma);

	return 0;
}
