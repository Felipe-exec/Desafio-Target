#include <stdio.h>

//2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
//escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e 
//retorne uma mensagem avisando se o número informado pertence ou não a sequência.

int main() {
    int num, a = 0, b = 1, c;

    printf("Digite um número: ");
    scanf("%i", &num);

    printf("Sequência de Fibonacci até %d:\n", num);

    printf("%d, %d, ", a, b);

    while (b < num) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}