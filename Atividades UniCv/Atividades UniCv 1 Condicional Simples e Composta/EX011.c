/*
Autor: João Henrique da Luz
Data: 08/04/2026
Objetivo: Calculo de IMC (Índice de Massa Corporal) 
*/

#include <stdio.h>

int main(){
    //Variaveis
    float Peso;
    float Altura;
    float Imc;

    //Pedir informacao
    printf("Digite o peso k...: ");
    scanf("%f", &Peso);
    printf("Digite a altura m.: ");
    scanf("%f", &Altura);

    //Calculo do IMC
    Imc = Peso / (Altura * Altura);

    printf("IMC: %.1f\n", Imc);

    //Tabela de Classificação
    if (Imc < 18.5) {
        printf("Abaixo do peso\n");
    } 
    else if (Imc >= 18.5 && Imc <= 24.9) {
        printf("Peso normal\n");
    } 
    else if (Imc >= 25.0 && Imc <= 29.9) {
        printf("Sobrepeso\n");
    } 
    else {
        printf("Obesidade\n");
    }
    return 0;
}