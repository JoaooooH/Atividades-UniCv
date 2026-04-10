/*
Autor: João Henrique da Luz
Data: 19/03/2026
Objetivo: Otimização de corte
*/

#include <stdio.h>

int main(){
    int Tabua3 = 3;
    int Tabua4 = 4;
    int Tabua5 = 5;

    int Tabua300 = Tabua3 * 100;
    int Tabua400 = Tabua4 * 100;
    int Tabua500 = Tabua5 * 100;

    printf("Tabua de 3 Metros\n");
    printf("Quantidade de pedaço de madeira cortados: %d\n", Tabua300 / 45);
    printf("Quantidade em centimetro de madeira que sobrou: %d\n", Tabua300 % 45);

    printf("Tabua de 4 Metros\n");
    printf("Quantidade de pedaço de madeira cortados: %d\n", Tabua400 / 45);
    printf("Quantidade em centimetro de madeira que sobrou: %d\n", Tabua400 % 45);

    printf("Tabua de 5 Metros\n");
    printf("Quantidade de pedaço de madeira cortados: %d\n", Tabua500 / 45);
    printf("Quantidade em centimetro de madeira que sobrou: %d\n", Tabua500 % 45);

return 0;
}



