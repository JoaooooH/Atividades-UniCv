/*
Autor: João Henrique da Luz
Data: 06/04/2026
Objetivo: Menor e Maior Número 
*/

#include <stdio.h>
int main(){
    //Variaveis
    int num1;
    int num2;
    int num3;
    int maior;
    int menor;

    //Pedir informacao
    printf("Digite o primeiro numero..:");
    scanf("%d", &num1);
    printf("Digite o segundo numero...:");
    scanf("%d", &num2);
    printf("Digite o terceiro numero..:");
    scanf("%d", &num3);

    menor = num1;
    maior = num1;

    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    //Resultado
    printf("---------------------------\n");
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}