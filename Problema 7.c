#include <stdio.h> 
#include <math.h> 
/*
- Listando os primeiros seis números primos: 2, 3, 5, 7, 11, e 13, podemos ver que o 6º primo é 13. 
O que é o 10.001º número primo?   
*/
int primo(int n) { 
    int i;
// Loop de verificação de todos os números primos até a opção desejada.
    for (i = 2; pow(i, 2) <= n; i++) { // Para i de 2 até a raiz quadrada de n.
        if (n % i == 0) { // Se n for divisível por i.
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
