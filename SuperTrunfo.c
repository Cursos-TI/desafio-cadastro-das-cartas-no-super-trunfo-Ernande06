#include <stdio.h>

int main() {

    char estado;
    char cod[10];
    char nomecidade[50];
    int pop;
    float area;
    double pib, densidade, pibper;
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
    
    densidade = (double)(pop / area); 

    pibper = (double)(pib / pop);

    printf("=========================================\n");
    printf("\nEstado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea em Km²: %.3f\nDensidade Populacional: %.2f pessoas/Km²\nPIB: R$ %.2f milhões\nPIB per capta: R$ %.2f reais\nPontos Turisticos: %d aproximadamente. \n", estado, cod, nomecidade, pop, area, densidade, pib, pibper, pt);
    printf("\n=======================================\n");

}