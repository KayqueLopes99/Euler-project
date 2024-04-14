#include <stdio.h>
#include <locale.h>
#include <math.h>
/*
Problema 6 do Projeto Euler: A diferença entre a soma dos quadrados dos 
primeiros dez números naturais e o quadrado da soma é 3025 - 385 = 2640.

Encontre a diferença entre a soma dos quadrados dos primeiros cem números
naturais e o quadrado da soma.
*/

// Função para calcular a soma dos quadrados dos números de 1 a 100
void soma_quadratica (float *resulta, float *soma_quadrados)
{
	int i;
	for(i = 0; i <= 100; i++) // Loop de 0 a 100
	{
		*resulta = pow(i, 2); // Calcula o quadrado do número atual
		printf("Número %d\n", i); // Imprime o número atual
		printf("Potência: %.2f\n", *resulta); // Imprime o quadrado do número atual
		*soma_quadrados += *resulta; // Adiciona o quadrado do número atual à soma total
	}
	printf("Soma dos quadrados dos número de 1 - 100 é: %.2f", *soma_quadrados); // Imprime a soma total dos quadrados
}

// Função para calcular o quadrado da soma dos números de 1 a 10
void quadrado_somas (float *resultado, float *quadradinhos)
{
	int i;
	for(i = 0; i <= 100; i++) // Loop de 0 a 10
	{
		*resultado += i; // Adiciona o número atual à soma
		*quadradinhos = pow(*resultado, 2); // Calcula o quadrado da soma atual
	}
	printf("\nResultado do quadrado da soma é: %.2f\n", *quadradinhos); // Imprime o quadrado da soma
}

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	float resulta = 0;
	float soma_quadrados = 0;
	float resultado = 0;
	float quadradinhos = 0;
	float quadradao = 0;
	soma_quadratica(&resulta, &soma_quadrados); // Chama a função para calcular a soma dos quadrados
	quadrado_somas(&resultado, &quadradinhos); // Chama a função para calcular o quadrado da soma

	quadradao = soma_quadrados - quadradinhos; // Calcula a diferença entre o quadrado da soma e a soma dos quadrados
	printf("O resultado da soma dos dois será: %.2f", quadradao); // Imprime o resultado
	return 0;
}
