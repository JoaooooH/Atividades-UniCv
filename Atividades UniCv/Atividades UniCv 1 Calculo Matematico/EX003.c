/*
Autor: João Henrique da Luz
Data: 17/03/2026
Objetivo: Conta telefônica
*/

#include <stdio.h>

int main() {
    //valores fixos
    float assinatura = 17.90;
    float impulsos = 0.04;
    float chamadas = 0.2;
    float interurbanos = 34.29;

    //dados de uso
    int NumImpulsos = 254;
    int NumChamadas = 23;

    //calculo dos impulsos
    float ValorImpulso = (NumImpulsos - 90) * impulsos;

    //calculo das chamadas
    float ValorChamadas = NumChamadas * chamadas;

    //Resultado
    printf("O valor da assinatura e de R$%.2f", assinatura + interurbanos + ValorChamadas + ValorImpulso);


    return 0;
}