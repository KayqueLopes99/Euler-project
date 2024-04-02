/*"Os fatores primos de 13195 s�o 5, 7, 13 e 29. Qual � o maior fator primo do n�mero 600851475143*/
#include <stdio.h>

int main()
{
    // Declara��o de uma vari�vel do tipo long long para armazenar o n�mero
    long long numero;

    // Solicita ao usu�rio que informe um n�mero
    printf("Informe:\n");
    scanf("%lld", &numero);

    // Declara��o de uma vari�vel do tipo long para o loop
    long i;

    // Loop que come�a em 2 (o menor n�mero primo) e continua enquanto i for menor que o n�mero informado
    for (i = 2; i < numero; i++)
    {
        // Enquanto o n�mero informado for divis�vel por i
        while (numero % i == 0)
        {
            // Divide o n�mero por i
            numero = numero / i;
        }
    }

    // Imprime o maior fator primo do n�mero
    printf("O maior fator primo do numero: %ld\n", i);

    return 0;
}
