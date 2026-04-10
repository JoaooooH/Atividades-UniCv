/*
Autor: João Henrique da Luz
Data: 19/03/2026
Objetivo: Comprimento de fio
*/

#include <stdio.h>
#include <math.h>

int main(){
    float Base = 11.5;
    float Altura = 6.3;
    float Diagonal;

    Diagonal = sqrt(pow(Base, 2)+(pow(Altura, 2)));

    printf("O valor da Diagonal em metros e de: %.2f\n", Diagonal);
    printf("O valor da Diagonal em cm e de:%.0f\n", Diagonal * 100);

return 0;
}
