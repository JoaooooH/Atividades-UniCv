/*
Autor: João Henrique da Luz
Data: 07/04/2026
Objetivo: Cálculo de Gratificação por Vendas 
*/

#include <stdio.h>

int main(){
    //Variaveis
    float SalarioFixo;
    float TotalVendas;
    float Comissao;
    float SalarioFinal;
    float Gratificacao = 0;

    //Entrada de dados
    printf("Informe o salário fixo.....: R$ ");
    scanf("%f", &SalarioFixo);
    printf("Informe o total de vendas..: R$ ");
    scanf("%f", &TotalVendas);

    //Cálculo da comissao
    Comissao = TotalVendas * 0.05;

    //Verificação da gratificação
    if (TotalVendas > 1000) {
        Gratificacao = 150.00;
    }

    //Calculo do salário final
    SalarioFinal = SalarioFixo + Comissao + Gratificacao;

    //Exibição do resultado
    printf("----------------------------\n");
    printf("Comissão...................: R$ %.2f\n", Comissao);
    printf("Gratificação...............: R$ %.2f\n", Gratificacao);
    printf("Salário Final..............: R$ %.2f\n", SalarioFinal);
    return 0;
}