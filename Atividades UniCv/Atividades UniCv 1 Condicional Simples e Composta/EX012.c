/*
Autor: João Henrique da Luz
Data: 08/04/2026
Objetivo: Identificação de Números Primos 
*/

#include <stdio.h>

int main(){
    //Variaveis
    int Numero;
    int i;
    int Divisores = 0;

    //Pedir informacao
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &Numero);

    if (Numero < 2) {
        printf("Nao e primo\n");
    } else {
        for (i = 1; i <= Numero; i++) {
            if (Numero % i == 0) {
                Divisores++;
            }
        }

        if (Divisores == 2) {
            printf("Primo\n");
        } else {
            printf("Nao e primo\n");
        }
    }
    return 0;
}