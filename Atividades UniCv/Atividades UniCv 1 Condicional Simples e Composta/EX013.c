/*
Autor: João Henrique da Luz
Data: 08/04/2026
Objetivo: Simulador de Caixa Eletrônico 
*/

#include <stdio.h>

int main(){
    //Variaveis
    int Valor;
    int Resto;
    int N1;
    int N2;
    int N5;
    int N10;
    int N20;
    int N50;
    int N100;
    
    //Pedir informacao
    printf("Digite o valor que deseja sacar: R$ ");
    scanf("%d", &Valor);

    Resto = Valor;

    //Calculando nota por nota
    //Notas de 100
    N100 = Resto / 100;
    Resto = Resto % 100;
    //Notas de 50
    N50 = Resto / 50;
    Resto = Resto % 50;
    //Notas de 20
    N20 = Resto / 20;
    Resto = Resto % 20;
    //Notas de 10
    N10 = Resto / 10;
    Resto = Resto % 10;
    //Notas de 5
    N5 = Resto / 5;
    Resto = Resto % 5;
    //Notas de 2
    N2 = Resto / 2;
    Resto = Resto % 2;

    N1 = Resto;

    //Resultados
    printf("Resultado para o saque de R$ %d:\n", Valor);

    if (N100 > 0) printf("%d cedula(s) de R$100\n", N100);
    if (N50 > 0)  printf("%d cedula(s) de R$50\n", N50);
    if (N20 > 0)  printf("%d cedula(s) de R$20\n", N20);
    if (N10 > 0)  printf("%d cedula(s) de R$100\n", N10);
    if (N5 > 0)   printf("%d cedula(s) de R$5\n", N5);
    if (N2 > 0)   printf("%d cedula(s) de R$2\n", N2);
    if (N1 > 0)   printf("%d cedula(s) de R$1\n", N1);
    return 0;
}