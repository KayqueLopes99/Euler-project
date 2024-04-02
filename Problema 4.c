
/*Um palíndromo é um número que não muda quando seus dígitos são invertidos.
 O maior palíndromo feito a partir do produto de dois números de 2 dígitos é 9009 = 91 × 99.

Encontre o maior palíndromo feito a partir do produto de dois números de 3 dígitos.*/

#include <stdio.h>

// Função para verificar se um número é palíndromo.
int Verifica_palindromo(int num) {
    int Armazenador_original = num; // Armazena para comparação posterior.
    int reverso_algarismo = 0;

    while (num > 0) {
        int digito;
        /* Tipo temos um número 123321, ele vai ver se é um palindromo,
        primeiro -> 12321/ 10, resto (1), logo 0 * 10 + 1, logo 12321/ 10 = 1232.
        */   
       digito = (num % 10);
        reverso_algarismo = ((reverso_algarismo * 10) + digito);
        num /= 10;
    }

    return Armazenador_original == reverso_algarismo; // Retorna palíndromo.
}

void funcion_final() {
    int Big_Palindromo = 0;
    int i, j, produto;

	
    // Loop para os dois números de três dígitos.
    for (i = 100; i <= 999; i++) {
        for (j = 100; j <= 999; j++) {
            produto = (i * j); // Calcula o produto.
            if (Verifica_palindromo(produto) && produto > Big_Palindromo) {
                Big_Palindromo = produto; // Atualiza.
            }
        }
    }

    printf("O maior palíndromo: %d\n", Big_Palindromo);
}

int main() {
    funcion_final();
    return 0;
}

