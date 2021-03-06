#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia o salário de um funcionário, calcule e mostre o seu novo salário, com 10% de aumento.

int main(){

    int a;

    printf("---------------Aumento de Salrio---------------");
    printf("\n\nPor favor, informe o seu salário: ");
    scanf("%i", &a);
    a = a*10/100 +a;
    printf("O seu salário com 10  porcento de aumento é: %i", a);



    return 0;
}
