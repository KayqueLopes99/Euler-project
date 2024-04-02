#include <stdio.h>
/*Considerando os termos da sequência de Fibonacci cujos valores não excedem quatro milhões, encontre a soma dos termos de valor par.*/
int main(){
    int anterior = 1; // Inicializa a variável com 1
    int resultado = 2; // Inicializa a variável com 2
    int soma = 0; // Inicializa a variável com 0

    while(resultado <= 4000000){ // Enquanto 'resultado' for menor ou igual a 4 milhões
        if(resultado % 2 == 0){ // Se 'resultado' for par
            soma += resultado; // Adiciona o número par à soma
        }
        resultado += anterior ; // Adiciona 'anterior' ao 'resultado'
        anterior = resultado - anterior; // Atualiza 'anterior' para o valor anterior de 'resultado'
    }	
    printf("Resultado: %d\n", soma);
    return 0;
}
