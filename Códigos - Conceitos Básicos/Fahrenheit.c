#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia uma temperatura em graus Célsius e apresente-a
convertida em graus Fahrenheit. Considerando a fórmula: f = (9 * c + 160)/5.*/

int main(){

    int c, f;

    printf("-------------Temperatura-------------");

    printf("\n\nPor favor, informe a temperatura em Célsius: ");
    scanf("%i", &c);
    f= (9 * c + 160)/5;
    printf("\nEssa temperatura convertida para Fahrenheit é: %i", f);


    return 0;
}
