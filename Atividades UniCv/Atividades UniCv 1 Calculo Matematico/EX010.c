/*
Autor: João Henrique da Luz
Data: 19/03/2026
Objetivo: Devagar se vai ao longe
*/

#include <stdio.h>

int main(){
    int Distancia = 800;
    int Dias = 5;
    int Semanas = 45;

    int IdaVolta = Distancia * 2;
    int Anual = Dias * Semanas;
    float Km = IdaVolta / 1000.0;

    int AndoNoAno = Anual * Km;
    printf("Andou %dkm no ano", AndoNoAno);

    return 0;
}