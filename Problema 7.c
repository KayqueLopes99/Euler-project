#include <stdio.h> 
#include <math.h> 
/*
- Listando os primeiros seis n�meros primos: 2, 3, 5, 7, 11, e 13, podemos ver que o 6� primo � 13. 
O que � o 10.001� n�mero primo?   
*/
int primo(int n) { 
    int i;
// Loop de verifica��o de todos os n�meros primos at� a op��o desejada.
    for (i = 2; pow(i, 2) <= n; i++) { // Para i de 2 at� a raiz quadrada de n.
        if (n % i == 0) { // Se n for divis�vel por i.
            return 0; 
        }
    }
    return 1;
}

int main() {
    int posicao = 10001; // Declara posicao e atribui o valor 10001.
    int numero = 2; 
    int contador_primario = 0; 
    
    while (contador_primario < posicao){ // Enquanto contador_primario for menor que posicao.
		if(primo(numero)){ // Numero for primo.
		contador_primario ++; 
		
	}
	numero++;
	}
    
    printf("O numero primo %d\n",  numero - 1);

    return 0;
}
