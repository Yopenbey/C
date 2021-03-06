#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia dois valores inteiros A e B, realizar a troca dos valores e imprimir o resultado após a troca.

int main(){

    int a, b, c, d;

    printf("--------------Troca de Números----------------");
    printf("\nPor favor, Digite o primeiro número duas vezes: ");
    scanf("%i",&a);
    scanf("%i",&c);
    printf("\n\nDigite o segundo número número: ");
    scanf("%i",&b);
    a = b;
    printf("\nO resultado do primeiro número depois da troca é: %i", a);
    b = c;
    printf("\nO resultado do segundo número depois da troca é: %i", b);

    return 0;
}
