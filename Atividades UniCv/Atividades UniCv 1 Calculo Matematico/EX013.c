/*
Autor: João Henrique da Luz
Data: 19/03/2026
Objetivo: Cálculo de notas
*/

#include <stdio.h>

int main(){
    float n1 = 8.0;
    float n2 = 7.5;
    float n3 = 10.0;
    float n4 = 9.0;
    float media;

    media = (n1 + n2 * 2 + n3 * 3 + n4 * 4) / 10;

    printf("Notas:\n");
    printf("Nota da Primeira Avaliação = %.1f\n", n1);
    printf("Nota da Segunda Avaliação = %.1f\n", n2);
    printf("Nota da Terceira Avaliação = %.1f\n", n3);
    printf("Nota da Quarta Avaliação = %.1f\n", n4);
    printf("Media das Avaliações = %.1f\n", media);

    return 0;
}
