/*
Autor: João Henrique da Luz
Data: 26/03/2026
Objetivo: Calculo de Salário de Funcionário
*/

#include <stdio.h>

int main(){
    //Variaveis
    char Nome[20];
    int Idade;
    char Cargo[20];
    float SalarioBruto;
    float Gratificacao;
    float Desconto;
    float SalarioLiquido;
    float SalarioCorrigido;
    float SalarioTotal;

    //Pedir informações
    printf("Me fale seu nome.............: ");
    scanf("%s", &Nome);
    printf("Me fale sua idade............: ");
    scanf("%d", &Idade);
    printf("Me fale seu cargo............: ");
    scanf("%s", &Cargo);
    printf("Me fale seu salario bruto....: ");
    scanf("%f", &SalarioBruto);

    //Reajuste de 38%
    SalarioCorrigido = SalarioBruto * 1.38;
    //20% salario bruto
    Gratificacao = SalarioCorrigido * 0.20;
    //Salario + Gratificacao
    SalarioTotal = SalarioCorrigido + Gratificacao;
    //15% de imposto de renda
    Desconto = SalarioTotal * 0.15;
    //Salario liquido
    SalarioLiquido = SalarioTotal - Desconto;

    //Imprimir resultado
    printf("------------------------------\n");
    printf("Salario bruto anterior.......: %.2f\n", SalarioBruto);
    printf("Salario bruto corrigido......: %.2f\n", SalarioCorrigido);
    printf("Valor da gratificação........: %.2f\n", Gratificacao);
    printf("Desconto do imposto de renda.: %.2f\n", Desconto);
    printf("Salario liquido..............: %.2f\n", SalarioLiquido);

    return 0;
}