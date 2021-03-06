#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que receba do usuário três números e apresente como resultado a soma dos três números informados.


int main(){

    int soma1, soma2, soma3;

    printf("-----------------Soma de Números-------------------");
    printf("\n\nPor favor, digite o primeiro número: ");
    scanf("%i",&soma1);
    printf("Por favor, digite o segundo número: ");
    scanf("%i",&soma2);
    printf("Por favor, digite o terceiro número: ");
    scanf("%i",&soma3);

    printf("\nA soma dos três números é: %i", soma1+soma2+soma3);
    printf("\n\n");


    return 0;
}
