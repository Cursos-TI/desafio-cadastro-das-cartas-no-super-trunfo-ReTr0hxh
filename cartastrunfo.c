#include <stdio.h>
    int main(){

        char estado[50];
        char codigo[4];
        char nome[50];
        int populacao;
        float area;
        float pib;
        int ponto;
        float densidade;
        float capita;

        char estado2[50];
        char codigo2[50];
        char nome2[50];
        int populacao2;
        float area2;
        float pib2;
        int ponto2;
        float densidade2;
        float capita2;

        printf("Digite as informações da sua primeira carta \n");
        printf("Digite o nome do estado: \n");
        scanf("%s", estado);
        
        printf("Digite o código da carta: \n");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: \n");
        scanf("%s", nome);

        printf("Digite a população: \n");
        scanf("%d", &populacao);

        printf("Digite a área da cidade: \n");
        scanf("%f", &area);

        printf("Digite o pib da cidade: \n");
        scanf("%f", &pib);

        printf("Digite quantos pontos turísticos tem na cidade: \n");
        scanf("%d", &ponto);

        //segunda carta

        printf("Digite as informações da sua segunda carta \n");
        printf("Digite o nome do estado: \n");
        scanf("%s", estado2);

        printf("Digite o código da carta: \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", nome2);

        printf("Digite a população: \n");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade: \n");
        scanf("%f", &area2);

        printf("Digite o pib da cidade: \n");
        scanf("%f", &pib2);

        printf("Digite quantos pontos turísticos tem na cidade: \n");
        scanf("%d", &ponto2);

        //calculos

        densidade = populacao / area;
        capita = (pib * 1000000000)  / populacao;

        densidade2 = populacao2 / area2;
        capita2 = (pib2 * 1000000000) / populacao2;



        //resultado

        printf("Carta 1 \n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", nome);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", ponto);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
        printf("PIB per Capita: %.2f reais\n\n", capita);

        //resultado 2

        printf("Carta 2 \n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nome2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", ponto2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", capita2);
        
        
    
    
        return 0;
        
    }