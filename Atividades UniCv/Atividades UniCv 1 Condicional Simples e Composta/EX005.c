/*
Autor: João Henrique da Luz
Data: 07/04/2026
Objetivo: Par ou Ímpar 
*/

#include <stdio.h>

int main(){
    //Variavel
    int numero;

    //Pedir informacao
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero e Par\n");
    } 
    else {
        printf("O numero e Impar\n");
    }
    return 0;
}