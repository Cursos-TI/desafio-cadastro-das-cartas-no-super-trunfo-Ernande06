#include <stdio.h>

int main() {

    // declarando as variáveis
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
    double power1, power2;

    //cadastrando as carta 1
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
    
    //cálculo densidade populacional e pib per capta
    densidade1 = (double)(pop1 / area1); 

    pibper1 = (double)(pib1 / pop1);

    power1 = (pop1 + area1 + densidade1 + pt1);

    printf("SPECIAL = %f", power1);

    printf("\n   ***     \n");
 
    //cadastrando a segunda carta
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
    
    densidade2 = (double)(pop2 / area2);   //calculando densidade populacional 

    pibper2 = (double)(pib2 / pop2);     //calculando pib per capta

    power2 = (pop2 + area2 + densidade2 + pt2);     //calculando Special

    printf("SPECIAL = %f", power2);

    //condições para calcular a comparação ( vitória, derrota ou empate )
    if(power1 > power2)
    {
        printf("\nCarta %c%s Venceu!", estado1, cod1); 

    }else if (power1 < power2)
    {
        printf("\nCarta %c%s Venceu!", estado2, cod2); 
    }else
    {
        printf("\nEMPATE");        
    }

    //Exibir na tela as cartas cadastradas
    printf("\n============= CARTA 1 ===================\n");
    printf("\nEstado: %c\nCódigo da Carta: %c%s\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea em Km²: %.3f\nDensidade Populacional: %.2f pessoas/Km²\nPIB: R$ %.2f bilhões\nPIB per capta: R$ %.2f reais\nPontos Turisticos: %d aproximadamente. \nSPECIAL: %f \n", estado1, estado1, cod1, nomecidade1, pop1, area1, densidade1, pib1, pibper1, pt1, power1);
    printf("\n=======================================\n");
    printf("\n========== CARTA 2 ====================\n");
    printf("\nEstado: %c\nCódigo da Carta: %c%s\nNome da Cidade: %s\nPopulação: %d milhões\nÁrea em Km²: %.3f\nDensidade Populacional: %.2f pessoas/Km²\nPIB: R$ %.2f bilhões\nPIB per capta: R$ %.2f reais\nPontos Turisticos: %d aproximadamente. \nSPECIAL: %f \n", estado2, estado2, cod2, nomecidade2, pop2, area2, densidade2, pib2, pibper2, pt2, power2);
    printf("\n=======================================\n");

    printf("\nCARTA 1\nSPECIAL: %f\nDENSIDADE POPULACIONAL: %f", power1, densidade1);
    printf("\n   ***     ");
    printf("\nCARTA 2\nSPECIAL: %f\nDENSIDADE POPULACIONAL: %f\n", power2, densidade2);

    printf("\n=======================================\n");

    if(power1 > power2 && densidade1 < densidade2)
    {
        printf("\n****** Carta %c%s Venceu!******\n", estado1, cod1);
        printf("\n=======================================\n");

    }else if (power1 < power2 && densidade2 < densidade1)
    {
        printf("\n****** Carta %c%s Venceu! ******\n", estado2, cod2); 
        printf("\n=======================================\n");
    }else
    {
        printf("\nDeclarado EMPATE! \nUma carta venceu no Special e perdeu na Densidade Populacional e vice versa. \n");   
        printf("\n=======================================\n");     
    }

 return 0;
    

} 