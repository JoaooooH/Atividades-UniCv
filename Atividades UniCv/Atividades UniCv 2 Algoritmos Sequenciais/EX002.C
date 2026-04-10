/*
Autor: João Henrique da Luz
Data: 26/03/2026
Objetivo: Litros de combustível gasto e os quilômetros percorridos por um automóvel
*/

#include <stdio.h>

int main() {
    // Variáveis
    float Litros;
    float Km;
    float LitroCusta = 5.24;
    float TotalGasto;
    float ConsumoMedio;

    printf("Digite os litros de combustivel gastos.: ");
    scanf("%f", &Litros);
    printf("Digite os quilometros percorridos......: ");
    scanf("%f", &Km);

    //Total Gasto
    TotalGasto = Litros * LitroCusta;
    //Consumo Medio
    ConsumoMedio = Km / Litros;

    //Imprimir resultado
    printf("----------------------------------------\n");
    printf("Litros de Combustivel Gasto............: %.2f\n", Litros);
    printf("Total de Quilometros Percorridos.......: %.2f\n", Km);
    printf("Total gasto de combustivel em Real.....: %.2f\n", TotalGasto);
    printf("Consumo Medio de Combustivel...........: %.2f\n", ConsumoMedio);

    return 0;
}