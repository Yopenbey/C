#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia o curso que o aluno está matriculado e mostre uma
mensagem de boas-vindas para ele, no seguinte formato:
O curso de Engenharia de Controle e Automação é um excelente curso.*/

int main(){

    char curso[90] ;
    printf("--------------Boas Vindas--------------");

    printf("\n\nPor favor, informe o nome do seu curso: ");
    gets(curso);
    printf("\nBoas vindas! O curso de %s", curso);
    printf(" é um excelente curso.");

    getch();

    return 0;
}
