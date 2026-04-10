/*
Autor: João Henrique da Luz
Data: 27/03/2026
Objetivo: Numero de horas trabalhadas e numero de dependentes de um funcionário
*/

#include <stdio.h>

int main(){
    //Variaveis
    char Nome[20];
    int NumeroHoras;
    int NumeroDependente;
    int ValorHora = 12;
    int ValorDependente = 40;
    float SalarioBruto;
    float SalarioLiquido;
    float DescontoInss;
    float DescontoIr;

    //Pedir informações
    printf("Digite seu nome......................: ");
    scanf("%s", &Nome);
    printf("Digite o numero de horas trabalhadas.: ");
    scanf("%d", &NumeroHoras);
    printf("Digite o numero de dependentes.......: ");
    scanf("%d", &NumeroDependente);

    //Calculos
    SalarioBruto = (NumeroHoras * ValorHora) + (NumeroDependente * ValorDependente);
    DescontoInss = SalarioBruto * 0.085;
    DescontoIr = SalarioBruto * 0.05;
    SalarioLiquido = SalarioBruto - DescontoInss - DescontoIr;

    //Imprimir resultado
    printf("--------------------------------------\n");
    printf("Salario Bruto........................: %.2f\n", SalarioBruto);
    printf("Desconto INSS (8.5%%).................: %.2f\n", DescontoInss);
    printf("Desconto IR (5%%).....................: %.2f\n", DescontoIr);
    printf("Salario Liquido......................: %.2f\n", SalarioLiquido);

    return 0;
}