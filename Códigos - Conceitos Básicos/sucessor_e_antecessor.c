#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia um número e apresenta o valor do seu sucessor e antecessor.


int main(){

    int numero;

    printf("---------------Sucessor e Antecessor de Um Número-----------------");
    printf("\n\nPor favor, digite um número: ");
    scanf("%i", &numero);
    printf("O número apresentado foi: %i", numero);
    numero = numero+1;
    printf("\nO sucesssor do número escolhido é: %i", numero);
    numero = numero-2;
    printf("\nO antecessor do número escolhido é: %i", numero);

    return 0;
}
