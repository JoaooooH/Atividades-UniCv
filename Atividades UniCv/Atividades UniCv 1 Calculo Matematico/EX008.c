/*
Autor: João Henrique da Luz
Data: 18/03/2026
Objetivo: Imposto
*/

#include <stdio.h>

int main(){

    int Valor;
    printf("Qual o Valor?\n");
    scanf("%d", &Valor);

    if (Valor <= 1200){
        printf("Voce e isento!\n");

    }else if (Valor >= 1201 && Valor <= 5000){
        float Imposto10 = Valor * 0.1;
        printf("Voce pagara 10 porcento de imposto R$%.2f\n", Imposto10);

    }else if (Valor >= 5001 && Valor <= 10000){
        float imposto15 = Valor * 0.15;
        printf("Voce pagara 15 porcento de imposto R$%.2f\n", imposto15);

    }else if (Valor > 10000){
        float imposto20 = Valor * 0.20;
        printf("Voce pagara 20 porcento de imposto R$%.2f\n", imposto20);
    }

    return 0;
}