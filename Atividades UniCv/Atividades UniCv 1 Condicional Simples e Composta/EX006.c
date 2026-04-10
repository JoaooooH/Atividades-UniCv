/*
Autor: João Henrique da Luz
Data: 07/04/2026
Objetivo: Ordenação de Números
*/

#include <stdio.h>
int main(){
    //Variaveis
    int num1;
    int num2;
    int num3;
    int temp;

    //Pedir informcao
    printf("Digite o primeiro numero..:");
    scanf("%d", &num1);
    printf("Digite o segundo numero...:");
    scanf("%d", &num2);
    printf("Digite o terceiro numero..:");
    scanf("%d", &num3);

    if (num1 > num2){
        temp = num1; num1 = num2; num2 = temp;
    }
    if (num1 > num3){
        temp = num1; num1 = num3; num3 = temp;
    }
    if (num2 > num3){
        temp = num2; num2 = num3; num3 = temp;
    }

    //Resultado
    printf("---------------------------\n");
    printf("Em ordem..................: %d, %d, %d\n", num1, num2, num3);

    return 0;
}