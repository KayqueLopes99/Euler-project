
/*Um pal�ndromo � um n�mero que n�o muda quando seus d�gitos s�o invertidos.
 O maior pal�ndromo feito a partir do produto de dois n�meros de 2 d�gitos � 9009 = 91 � 99.

Encontre o maior pal�ndromo feito a partir do produto de dois n�meros de 3 d�gitos.*/

#include <stdio.h>

// Fun��o para verificar se um n�mero � pal�ndromo.
int Verifica_palindromo(int num) {
    int Armazenador_original = num; // Armazena para compara��o posterior.
    int reverso_algarismo = 0;

    while (num > 0) {
        int digito;
        /* Tipo temos um n�mero 123321, ele vai ver se � um palindromo,
        primeiro -> 12321/ 10, resto (1), logo 0 * 10 + 1, logo 12321/ 10 = 1232.
        */   
       digito = (num % 10);
        reverso_algarismo = ((reverso_algarismo * 10) + digito);
        num /= 10;
    }

    return Armazenador_original == reverso_algarismo; // Retorna pal�ndromo.
}

void funcion_final() {
    int Big_Palindromo = 0;
    int i, j, produto;

	
    // Loop para os dois n�meros de tr�s d�gitos.
    for (i = 100; i <= 999; i++) {
        for (j = 100; j <= 999; j++) {
            produto = (i * j); // Calcula o produto.
            if (Verifica_palindromo(produto) && produto > Big_Palindromo) {
                Big_Palindromo = produto; // Atualiza.
            }
        }
    }

    printf("O maior pal�ndromo: %d\n", Big_Palindromo);
}

int main() {
    funcion_final();
    return 0;
}

