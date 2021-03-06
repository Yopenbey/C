#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia um número e apresenta o quadrado desse número.


int main(){

    int quadrado;

    printf("---------------Quadrado de Um Número-----------------");
    printf("\n\nPor favor, digite um número interio: ");
    scanf("%i", &quadrado);
    printf("O número apresentado foi: %i", quadrado);
    quadrado = quadrado*quadrado;
    printf("\nO quadradado do número escolhido é: %i", quadrado);

    return 0;
}
