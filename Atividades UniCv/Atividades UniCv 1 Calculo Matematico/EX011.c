/*
Autor: João Henrique da Luz
Data: 19/03/2026
Objetivo: Funções matemáticas
*/

#include <stdio.h>
#include <math.h>

int main(){
    int RaizQuadrada = 169;
    int Potencia = 17;
    int Cosseno = 0;
    float Redondo = 1.65;

    int ResultadoRaiz = sqrt(RaizQuadrada);
    int ResultadoPotencia = pow(Potencia, 2);
    int ResultadoCosseno = cos(Cosseno);
    int ResultadoRedondo = round(Redondo);

    printf("Raiz quadrade de %d: %d:\n", RaizQuadrada, ResultadoRaiz);
    printf("%d quadrado: %d:\n", Potencia, ResultadoPotencia);
    printf("Cosseno de %d: %d:\n", Cosseno, ResultadoCosseno);
    printf("Arrendondamento de %.2f: %d:\n", Redondo, ResultadoRedondo);
    return 0;
}
