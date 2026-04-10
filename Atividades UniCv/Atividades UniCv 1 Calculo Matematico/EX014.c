/*
Autor: João Henrique da Luz
Data: 19/03/2026
Objetivo: Funções aninhadas
*/

#include <stdio.h>
#include <math.h>

int main(){
    int Numero = 3;

    float RaizQuadrada = sqrt(Numero);
    int Arredonda = round(RaizQuadrada);
    double Exponencial = exp(Arredonda);
    
    printf("%f", Exponencial);

    return 0;
}
