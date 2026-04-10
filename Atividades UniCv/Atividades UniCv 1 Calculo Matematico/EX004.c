/*
Autor: João Henrique da Luz
Data: 18/03/2026
Objetivo: Média de notas
*/

#include <stdio.h>

int main(){

    //Declaração das variáveis
    int Matematica1, Matematica2, Matematica3, Matematica4;
    int Geografia1, Geografia2, Geografia3, Geografia4;
    int Historia1, Historia2, Historia3, Historia4;
    int Portugues1, Portugues2, Portugues3, Portugues4;
    int Ingles1, Ingles2, Ingles3, Ingles4;

    //Dados
    printf("Quais sao suas notas em Matematica?\n");
    scanf("%d %d %d %d", &Matematica1, &Matematica2, &Matematica3, &Matematica4);

    printf("Quais sao suas notas em Geografia?\n");
    scanf("%d %d %d %d", &Geografia1, &Geografia2, &Geografia3, &Geografia4);

    printf("Quais sao suas notas em Historia?\n");
    scanf("%d %d %d %d", &Historia1, &Historia2, &Historia3, &Historia4);

    printf("Quais sao suas notas em Portugues?\n");
    scanf("%d %d %d %d", &Portugues1, &Portugues2, &Portugues3, &Portugues4);

    printf("Quais sao suas notas em Ingles?\n");
    scanf("%d %d %d %d", &Ingles1, &Ingles2, &Ingles3, &Ingles4);

    //Media de cada materia
    float MediaMatematica = (Matematica1 + Matematica2 + Matematica3 + Matematica4) / 4;
    float MediaGeografia = (Geografia1 + Geografia2 + Geografia3 + Geografia4) / 4;
    float MediaHistoria = (Historia1 + Historia2 + Historia3 + Historia4) / 4;
    float MediaPortugues = (Portugues1 + Portugues2 + Portugues3 + Portugues4) / 4;
    float MediaIngles = (Ingles1 + Ingles2 + Ingles3 + Ingles4) / 4;

    //Tabela das Medias
    printf("+-------------------------------------+\n");
    printf("|        Suas Medias São De           |\n");
    printf("+-------------------------------------+\n");
    printf("| Media de Matematica   | %.2f          |\n", MediaMatematica);
    printf("+-------------------------------------+\n");
    printf("| Media de Geografia    | %.2f          |\n", MediaGeografia);
    printf("+-------------------------------------+\n");
    printf("| Media de Historia     | %.2f          |\n", MediaHistoria);
    printf("+-------------------------------------+\n");
    printf("| Media de Portugues    | %.2f          |\n", MediaPortugues);
    printf("+-------------------------------------+\n");
    printf("| Media de Ingles       | %.2f          |\n", MediaIngles);
    printf("+-------------------------------------+\n");

return 0;
}
