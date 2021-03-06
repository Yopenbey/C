#include  <stdio.h>
#include  <stdlib.h>

/*Escreva um programa que leia o número de questões que um candidato acertou em
uma prova, calcule e exiba o percentual de acertos. Considerando que a prova possuía
50 questões.*/


int main(){


    int  certas;
    int porcent;

    printf("---------Percentual das Questões-----------");
    printf("\n\nPOr favor, informe o número de questões que o candidato acertou: ");
    scanf("%i", &certas);
    if(certas<=50 & certas>=0){
        porcent = certas*100/50;
        printf("A porcentagem de acerto é: %i porcento", porcent);
        }
    else{
        printf("Número de acertos inválido.");
    }

    return 0;
}
