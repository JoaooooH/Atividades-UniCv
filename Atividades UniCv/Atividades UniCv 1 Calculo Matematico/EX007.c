/*
Autor: João Henrique da Luz
Data: 18/03/2026
Objetivo: Tempo dedicado
*/

#include <stdio.h>

int main(){
    //Variaveis
    int MinutosPorDia = 5;
    int DiasDaSemana = 6;
    int SemanaPorAno = 52;

    //Calculos
    int TotalMinutos = MinutosPorDia * DiasDaSemana * SemanaPorAno;
    float TotalHoras = TotalMinutos / 60;

    //Saida
    printf("Tempo total dedicado ao livro em um ano: %.2f", TotalHoras);

return 0;
}