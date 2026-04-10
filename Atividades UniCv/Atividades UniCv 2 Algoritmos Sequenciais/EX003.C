/*
Autor: João Henrique da Luz
Data: 26/03/2026
Objetivo: Calcular o rendimento de seu carro na praça
*/

#include <stdio.h>

int main(){
    //Variaveis
    float KmInicial;
    float KmFinal;
    float PrecoDoCombustivel = 5.24;
    float KmRodados;
    float ConsumoMedio;
    float LucroLiquido;
    float CombustivelGasto;
    float LitrosGasto;
    float RecebidoPassageiro;

    //Pedir informações
    printf("Qual a marcacao do Odometro Inicial..........: ");
    scanf("%f", &KmInicial);
    printf("Qual a marcacao do Odometro Final............: ");
    scanf("%f", &KmFinal);
    printf("Qual a quantidade de litros gasto............: ");
    scanf("%f", &LitrosGasto);
    printf("Qual o valor total recebido dos passageiros..: ");
    scanf("%f", &RecebidoPassageiro);

    //Calculos
    KmRodados = KmFinal - KmInicial;
    CombustivelGasto = LitrosGasto * PrecoDoCombustivel;
    LucroLiquido = RecebidoPassageiro - CombustivelGasto;
    ConsumoMedio = KmRodados / LitrosGasto;

    //Imprimir resultado
    printf("----------------------------------------------\n");
    printf("A marcacao do Odometro Inicial e.............: %.2f\n", KmFinal);
    printf("A marcacao do Odometro Final e...............: %.2f\n", KmFinal);
    printf("Quantidade de Quilometros Percorridos no Dia.: %.2f\n", KmRodados);
    printf("Lucro (liquido) do Dia e.....................: %.2f\n", LucroLiquido);
    printf("Media do Consumo em Km/L e...................: %.2f\n", ConsumoMedio);

    return 0;
}