/*
Autor: João Henrique da Luz
Data: 08/04/2026
Objetivo: Cálculo da Área de Figuras Geométricas
*/

#include <stdio.h>

int main(){
    //Variaveis
    int Opcao;
    float Lado;
    float Base;
    float Altura;
    float Area;

    //Pedir informacaoa
    printf("Escolha a figura geometrica:\n");
    printf("1 - Quadrado\n");
    printf("2 - Retangulo\n");
    printf("3 - Triangulo\n");
    printf("Opcao: ");
    scanf("%d", &Opcao);

    switch (Opcao) {
        case 1:
            printf("Informe o valor do lado: ");
            scanf("%f", &Lado);
            Area = Lado * Lado;
            printf("Area do Quadrado = %.2f\n", Area);
            break;

        case 2:
            printf("Informe a base: ");
            scanf("%f", &Base);
            printf("Informe a altura: ");
            scanf("%f", &Altura);

            Area = Base * Altura;
            printf("Area do Retangulo = %.2f\n", Area);
            break;

        case 3:
            printf("Informe a base: ");
            scanf("%f", &Base);
            printf("Informe a altura: ");
            scanf("%f", &Altura);

            Area = (Base * Altura) / 2;
            printf("Area do Triangulo = %.2f\n", Area);
            break;

        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}