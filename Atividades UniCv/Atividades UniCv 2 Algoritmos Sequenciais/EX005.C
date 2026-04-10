/*
Autor: João Henrique da Luz
Data: 28/03/2026
Objetivo: O salário final de cada empregado e o lucro (líquido) da loja
*/

#include <stdio.h>

int main(){
    //Variaveis
    int NumEmpregados;
    int NumBicicleta;
    float SalarioMinimo;
    float PrecoCusto;
    float LucroLoja;
    float SalarioFinal;
    float PrecoVenda;
    float Comissao;
    float ComissaoPorEmpregado;
    float TotalVendas;
    
    //Pedir informacao
    printf("Digite o numero de empregados..........: ");
    scanf("%d", &NumEmpregados);
    printf("Digite o numero de bicicletas vendidas.: ");
    scanf("%d", &NumBicicleta);
    printf("Digite o valor do salario minimo.......: R$");
    scanf("%f", &SalarioMinimo);
    printf("Digite o preco de custo da bicicleta...: R$");
    scanf("%f", &PrecoCusto);

    //Calculos
    PrecoVenda = PrecoCusto + (PrecoCusto * 0.5);
    TotalVendas = PrecoVenda * NumBicicleta;
    Comissao = PrecoCusto * 0.15 * NumBicicleta;
    ComissaoPorEmpregado = Comissao / NumEmpregados;
    SalarioFinal = (2 * SalarioMinimo) + ComissaoPorEmpregado;
    LucroLoja = TotalVendas - (PrecoCusto * NumBicicleta) - Comissao;

    //Imprimir resultado
    printf("----------------------------------------\n");
    printf("Salario final de cada empregado........: R$%.2f\n", SalarioFinal);
    printf("Lucro liquido da loja..................: R$%.2f\n", LucroLoja);

    return 0;
}