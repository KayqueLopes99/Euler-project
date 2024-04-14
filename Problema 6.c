#include <stdio.h>
#include <locale.h>
#include <math.h>
/*
Problema 6 do Projeto Euler: A diferen�a entre a soma dos quadrados dos 
primeiros dez n�meros naturais e o quadrado da soma � 3025 - 385 = 2640.

Encontre a diferen�a entre a soma dos quadrados dos primeiros cem n�meros
naturais e o quadrado da soma.
*/

// Fun��o para calcular a soma dos quadrados dos n�meros de 1 a 100
void soma_quadratica (float *resulta, float *soma_quadrados)
{
	int i;
	for(i = 0; i <= 100; i++) // Loop de 0 a 100
	{
		*resulta = pow(i, 2); // Calcula o quadrado do n�mero atual
		printf("N�mero %d\n", i); // Imprime o n�mero atual
		printf("Pot�ncia: %.2f\n", *resulta); // Imprime o quadrado do n�mero atual
		*soma_quadrados += *resulta; // Adiciona o quadrado do n�mero atual � soma total
	}
	printf("Soma dos quadrados dos n�mero de 1 - 100 �: %.2f", *soma_quadrados); // Imprime a soma total dos quadrados
}

// Fun��o para calcular o quadrado da soma dos n�meros de 1 a 10
void quadrado_somas (float *resultado, float *quadradinhos)
{
	int i;
	for(i = 0; i <= 100; i++) // Loop de 0 a 10
	{
		*resultado += i; // Adiciona o n�mero atual � soma
		*quadradinhos = pow(*resultado, 2); // Calcula o quadrado da soma atual
	}
	printf("\nResultado do quadrado da soma �: %.2f\n", *quadradinhos); // Imprime o quadrado da soma
}

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	float resulta = 0;
	float soma_quadrados = 0;
	float resultado = 0;
	float quadradinhos = 0;
	float quadradao = 0;
	soma_quadratica(&resulta, &soma_quadrados); // Chama a fun��o para calcular a soma dos quadrados
	quadrado_somas(&resultado, &quadradinhos); // Chama a fun��o para calcular o quadrado da soma

	quadradao = soma_quadrados - quadradinhos; // Calcula a diferen�a entre o quadrado da soma e a soma dos quadrados
	printf("O resultado da soma dos dois ser�: %.2f", quadradao); // Imprime o resultado
	return 0;
}
