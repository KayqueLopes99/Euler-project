#include <stdio.h>
/*Considerando os termos da sequ�ncia de Fibonacci cujos valores n�o excedem quatro milh�es, encontre a soma dos termos de valor par.*/
int main(){
    int anterior = 1; // Inicializa a vari�vel com 1
    int resultado = 2; // Inicializa a vari�vel com 2
    int soma = 0; // Inicializa a vari�vel com 0

    while(resultado <= 4000000){ // Enquanto 'resultado' for menor ou igual a 4 milh�es
        if(resultado % 2 == 0){ // Se 'resultado' for par
            soma += resultado; // Adiciona o n�mero par � soma
        }
        resultado += anterior ; // Adiciona 'anterior' ao 'resultado'
        anterior = resultado - anterior; // Atualiza 'anterior' para o valor anterior de 'resultado'
    }	
    printf("Resultado: %d\n", soma);
    return 0;
}
