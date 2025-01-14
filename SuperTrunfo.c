#include <stdio.h>

int main() {

    char estado;
    char cod[10];
    char nomecidade[50];
    int pop;
    float area;
    double pib;
    int pt;

    printf("========SUPER TRUNFO =========\n");
    printf("           ***              \n");
    printf("   CADASTRE SUA CARTA\n");
    
    printf("\nEstado: ");    
    scanf("%c", &estado);
    
    printf("Digite o Código da Carta: ");
    scanf("%s", cod);
    
    printf("Cidade: ");
    scanf(" %[^\n]", nomecidade);
        
    printf("População: ");
    scanf("%d", &pop);

    printf("Área em Km²: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%lf", &pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &pt);

    printf("=========================================\n");
    printf("\nEstado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea em Km²: %.3f\nPIB: %.2f milhões\nPontos Turisticos: %d aproximadamente. \n", estado, cod, nomecidade, pop, area, pib, pt);
    printf("\n=======================================\n");

}