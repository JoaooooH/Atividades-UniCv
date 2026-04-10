/*
Autor: João Henrique da Luz
Data: 06/04/2026
Objetivo: Cálculo de INSS 
*/

#include <stdio.h>

int main(){
    //Variaveis
    float Salario;
    float Desconto;

    //Pedir informacao
    printf("Digite o valor do salario: R$ ");
    scanf("%f", &Salario);

    //
    if (Salario <= 1570.00) {
        Desconto = Salario * 0.08;
    } 
    else {
        Desconto = Salario * 0.09;
    }

    //Resultado
    printf("Desconto: R$ %.2f\n", Desconto);
    return 0;
}