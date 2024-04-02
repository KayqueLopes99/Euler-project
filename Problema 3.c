/*"Os fatores primos de 13195 são 5, 7, 13 e 29. Qual é o maior fator primo do número 600851475143*/
#include <stdio.h>

int main()
{
    // Declaração de uma variável do tipo long long para armazenar o número
    long long numero;

    // Solicita ao usuário que informe um número
    printf("Informe:\n");
    scanf("%lld", &numero);

    // Declaração de uma variável do tipo long para o loop
    long i;

    // Loop que começa em 2 (o menor número primo) e continua enquanto i for menor que o número informado
    for (i = 2; i < numero; i++)
    {
        // Enquanto o número informado for divisível por i
        while (numero % i == 0)
        {
            // Divide o número por i
            numero = numero / i;
        }
    }

    // Imprime o maior fator primo do número
    printf("O maior fator primo do numero: %ld\n", i);

    return 0;
}
