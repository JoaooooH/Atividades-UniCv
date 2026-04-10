/*
Autor: João Henrique da Luz
Data: 18/03/2026
Objetivo: Tempo livre
*/

#include <stdio.h>

int main(){
    //Tempo disponivel
    int Horas = 1;
    int Minutos = 40;
    int TotalMinutos = (1*60) + Minutos;

    //Disciplinas
    int NumerosDeDisciplina = 6;

    //Tempo para cada disciplina
    int TempoIgual = TotalMinutos / NumerosDeDisciplina;

    //Tempo Restante
    int TempoRestante = TotalMinutos % NumerosDeDisciplina;

    //Saída esperada
    printf("Tempo total de estudo: %d\n", TotalMinutos);
    printf("Tempo para cada disciplina: %d\n", TempoIgual);
    printf("Tempo livre para descanso: %d\n", TempoRestante);


return 0;
}