#include  <stdio.h>
#include  <stdlib.h>

/*Escreva um programa que leia um valor em real e apresente o mesmo em dólar.
Considerando que a cotação de 1 dólar = 5,44 R$.*/


int main(){

    int  real;
    float dolar;

    printf("--------------Conversão de Moeda--------------");

    printf("\n\nPor favor, informe um valor em reais: ");
    scanf("%i", &real);
    dolar = real/5.44;
    printf("A conversão do valor informado em reais para o dólar é: %.2f", dolar);

    return 0;
}
