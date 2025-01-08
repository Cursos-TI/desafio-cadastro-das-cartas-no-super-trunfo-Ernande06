#include <stdio.h>

int main() {

    char estado;
    char nomecidade[5];
    int pop;
    float area;
    float pib;
    int pt;

    printf("========SUPER TRUNFO =========\n");
    printf("           ***              \n");
    printf("   CADASTRE SUA CARTA\n");
    
    printf("\nDigite seu: \n");

    printf("\nEstado: ");    
    scanf("%c", &estado);

    printf("Cidade: ");
    scanf("%s", &nomecidade);
        
    printf("População: ");
    scanf("%d", &pop);

    printf("Área em Km²: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &pt);

    printf("=========================================\n");
    printf("\n*Brasil*\n");
    printf("\nCarta %c%s\nPopulação: %d milhões\nÁrea em Km²: %.3f\nPIB: %.3f milhões\nPontos Turisticos: %d aproximadamente. \n", estado, nomecidade, pop, area, pib, pt);
    printf("\n=======================================\n");



}