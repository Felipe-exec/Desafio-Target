#include<stdlib.h>
#include <stdio.h>

//1) Observe o trecho de código abaixo:
//Ao final do processamento, qual será o valor da variável SOMA?


int main() {
   int INDICE = 13, SOMA = 0, K = 0;

   while (K < INDICE) {
      K = K + 1;
      SOMA = SOMA + K;
   }

   printf("%d", SOMA); // resposta = a variável SOMA será 91, 
   // tendo em vista que o algoritmo se trata de um loop com indice 13, então: 1 + 2 + 3 + 4 + ... + 13 = 91
   
   return 0;
}
