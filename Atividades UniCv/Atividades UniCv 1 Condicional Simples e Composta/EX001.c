/*
Autor: João Henrique da Luz
Data: 06/04/2026
Objetivo: Diferença ou Soma entre Dois Números
*/

#include <stdio.h>
int main(){
    //Variaveis
    int a;
    int b;
    int y;

    //Pedir informacao
    printf("O valor de A sera: ");
    scanf("%d", &a);
    printf("O valor de B sera: ");
    scanf("%d", &b);

    if (a < b){
        y = b - a;
        printf("O valor de A e: %d\n", a);
        printf("O valor de B e: %d\n", b);
        printf("O resultado de B menos A, sera: %d", y);
    }else if (a > b){
        y = a - b;
        printf("O valor de A e: %d\n", a);
        printf("O valor de B e: %d\n", b);
        printf("O resultado de A menos B, sera: %d", y);
    }else{
        y = a + b;
        printf("O valor de A e: %d\n", a);
        printf("O valor de B e: %d\n", b);
        printf("O resultado de A mais B, sera: %d", y);
    }
    return 0;
}