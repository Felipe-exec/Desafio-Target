#include <stdio.h>
#include <string.h>

//Escreva um programa que inverta os caracteres de um string.
//Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
//Evite usar funções prontas, como, por exemplo, reverse;


int main() {
    char str[100];
    int i, j, len; //len de LENGTH, ou seja, tamanho.
    
    printf("Digite uma string: ");
    scanf("%s", str);
    
    
    len = strlen(str); //com essa função, verificamos o tamanho da string.
    // ------------------------------------------------------
    //uma forma de evitarmos usar a função strlen() seria: 
    int count;
    while (str[i] != '\0') {
        count++;
        i++;
    }
    //assim, saberíamos que count guarda o tamanho da string, da mesma forma que a variável len.
    // ------------------------------------------------------

    j = len - 1;  //ou j = count - 1;
    
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    
    printf("A string invertida e: %s\n", str);
    
    return 0;
}