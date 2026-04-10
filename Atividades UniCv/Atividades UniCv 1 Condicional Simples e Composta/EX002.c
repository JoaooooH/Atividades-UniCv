/*
Autor: João Henrique da Luz
Data: 06/04/2026
Objetivo: Média Aritmética de Notas Pares
*/

#include <stdio.h>
int main(){
    //Variaveis
    int N1;
    int N2;
    int N3;
    int SomaPares = 0;
    int ContadorPares = 0;
    int Media;

    //Pedir informacao
    printf("Digite a primeira nota.: ");
    scanf("%d", &N1);
    printf("Digite a segunda nota..: ");
    scanf("%d", &N2);
    printf("Digite a terceira nota.: ");
    scanf("%d", &N3);

    if (N1 % 2 == 0) {
        SomaPares += N1;
        ContadorPares++;
    }
    if (N2 % 2 == 0) {
        SomaPares += N2;
        ContadorPares++;
    }
    if (N3 % 2 == 0) {
        SomaPares += N3;
        ContadorPares++;
    }

    //Resultado
    if (ContadorPares > 0) {
        Media = SomaPares / ContadorPares;
        printf("Media das notas pares: %d\n", Media);
    } else {
        printf("Nenhuma Nota Par\n");
    }
    return 0;
}