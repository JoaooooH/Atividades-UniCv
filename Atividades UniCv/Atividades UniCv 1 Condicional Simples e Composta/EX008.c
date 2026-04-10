/*
Autor: João Henrique da Luz
Data: 07/04/2026
Objetivo: Desconto de INSS e IR no Salário 
*/

#include <stdio.h>

int main(){
    //Variaveis
    float SalarioBruto;
    float Inss;
    float Ir;
    float SalarioLiquido;

    //Pedir infromacao
    printf("Digite o valor do salario bruto: R$ ");
    scanf("%f", &SalarioBruto);

    //Calculo do INSS
    if (SalarioBruto <= 1570.00) {
        Inss = SalarioBruto * 0.08;
    } else {
        Inss = SalarioBruto * 0.09;
    }

    //Calculo do IR
    if (SalarioBruto <= 2000.00) {
        Ir = 0;
    } else if (SalarioBruto <= 3000.00) {
        Ir = SalarioBruto * 0.075;
    } else {
        Ir = SalarioBruto * 0.15;
    }

    //Calculo do Salario Liquido
    SalarioLiquido = SalarioBruto - Inss - Ir;

    //Resultados
    printf("---------------------------------\n");
    printf("Salario Bruto...................: R$ %.2f\n", SalarioBruto);
    printf("Desconto Inss...................: R$ %.2f\n", Inss);
    printf("Desconto Ir.....................: R$ %.2f\n", Ir);
    printf("Salario Liquido.................: R$ %.2f\n", SalarioLiquido);
    return 0;
}