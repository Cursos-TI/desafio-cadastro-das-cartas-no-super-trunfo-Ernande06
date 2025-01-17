#include <stdio.h>

int main() {

    char estado1 = 'A';
    char estado2 = 'B';
    char cod1[10]; 
    char cod2[10];
    char nomecidade1[50]; 
    char nomecidade2[50];
    int pop1, pop2;
    float area1,area2, pib1, pib2;
    double densidade1, densidade2, pibper1, pibper2;
    int pt1,pt2;

    printf("========SUPER TRUNFO =========\n");
    
    printf("CADASTRE 1ª CARTA\n");
    
    printf("Digite o Código da Carta 1: ");
    scanf("%s", cod1);
    
    printf("Cidade: ");
    scanf(" %[^\n]", nomecidade1);
        
    printf("População: ");
    scanf("%d", &pop1);

    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pt1);
    
    densidade1 = (double)(pop1 / area1); 

    pibper1 = (double)(pib1 / pop1);

    printf("\n   ***     \n");
    printf("CADASTRE 2ª CARTA\n");
    
    printf("Digite o Código da Carta 2: ");
    scanf("%s", cod2);

    printf("Cidade: ");
    scanf(" %[^\n]", nomecidade2);
        
    printf("População: ");
    scanf("%d", &pop2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pt2);
    
    densidade2 = (double)(pop2 / area2); 

    pibper2 = (double)(pib2 / pop2);

    printf("============= CARTA 1 ===================\n");
    printf("\nEstado: %c\nCódigo da Carta: %c%s\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea em Km²: %.3f\nDensidade Populacional: %.2f pessoas/Km²\nPIB: R$ %.2f milhões\nPIB per capta: R$ %.2f reais\nPontos Turisticos: %d aproximadamente. \n", estado1, estado1, cod1, nomecidade1, pop1, area1, densidade1, pib1, pibper1, pt1);
    printf("\n=======================================\n");
    printf("\n========== CARTA 2 ====================\n");
    printf("\nEstado: %c\nCódigo da Carta: %c%s\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea em Km²: %.3f\nDensidade Populacional: %.2f pessoas/Km²\nPIB: R$ %.2f milhões\nPIB per capta: R$ %.2f reais\nPontos Turisticos: %d aproximadamente. \n", estado2, estado2, cod2, nomecidade2, pop2, area2, densidade2, pib2, pibper2, pt2);
    printf("\n=======================================\n");

    return 0;
    

}