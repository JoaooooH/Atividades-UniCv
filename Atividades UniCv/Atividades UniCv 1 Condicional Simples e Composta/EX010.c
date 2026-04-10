/*
Autor: João Henrique da Luz
Data: 08/04/2026
Objetivo: Verificação de Idade para Habilitação 
*/

#include <stdio.h>

int main(){
    //Variaveis
    int Idade;

    //Pedri infromação
    printf("Digite a sua idade: ");
    scanf("%d", &Idade);

    //Verificar a idade
    if (Idade >= 18) {
        printf("Pode tirar habilitacao\n");
    } else {
        printf("Nao pode tirar habilitacao\n");
    }
    return 0;
}