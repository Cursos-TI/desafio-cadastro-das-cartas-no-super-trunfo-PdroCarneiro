#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // definindo variáveis e atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[1],estado2[1];
    char codigo1[5],codigo2[5];
    char nome1[50],nome2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int turismo1,turismo2;
    float dencidade,pibpercapita;
//acrescentamos mais dua variveis
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //cadastro da primeira cidade
    printf("Insira as informações da primeira cidade: \n");
        printf("Nome da cidade : ");
        scanf("%s", nome1);
        printf("Estado: ");
        scanf("%s", estado1);
        printf("Codigo da cidade: ");
        scanf("%s", codigo1);
        printf("População: ");
        scanf("%d", &populacao1);
        printf("PIB da cidade: ");
        scanf("%f", &pib1);
        printf("Área da cidade em M²: ");
        scanf("%f", &area1);
        printf("Quantos pontos turinsticos tem na cidade: ");
        scanf("%d", &turismo1);
//sengunda parte do desafio que é calcular a densidade e o pib per capita
             dencidade=populacao1/area1;
             printf("Densidade Populacional: %.2f hab/km²", dencidade);
             pibpercapita=pib1/populacao1;
             printf("PIB per Capita: %.2f reais",pibpercapita);
    
//imprimindo informações da primeira carta
            printf("Carta 1: \nEstado: %s \n",estado1);
            printf("Código: %s \n",codigo1);
            printf("Nome da Cidade: %s \n",nome1);
            printf("Populção: %d \n",populacao1);
            printf("Área: %.2f \n",area1);
            printf("PIB: %.2f \n",pib1);
            printf("Número de pontos Turíscos: %d \n",turismo1);

    //cadastro da segunda cidade
    printf("Insira as informações da segunda cidade: \n");
        printf("Nome da cidade : ");
        scanf("%s", nome2);
        printf("Estado: ");
        scanf("%s", estado2);
        printf("Codigo da cidade: ");
        scanf("%s", codigo2);
        printf("População: ");
        scanf("%d", &populacao2);
        printf("PIB da cidade: ");
        scanf("%f", &pib2);
        printf("Área da cidade em M²: ");
        scanf("%f", &area2);
        printf("Quantos pontos turinsticos tem na cidade: ");
        scanf("%d", &turismo2);
    
    //imprimindo informações da segunda carta
            printf("Carta 1: \nEstado: %s \n",estado2);
            printf("Código: %s \n",codigo2);
            printf("Nome da Cidade: %s \n",nome2);
            printf("Populção: %d \n",populacao2);
            printf("Área: %.2f \n",area2);
            printf("PIB: %.2f \n",pib2);
            printf("Número de pontos Turíscos: %d \n",turismo2);
             dencidade=populacao2/area2;
             printf("Densidade Populacional: %.2f hab/km²", dencidade);
             pibpercapita=pib2/populacao2;
             printf("PIB per Capita: %.2f reais",pibpercapita);
    //agora a soma dos atributos em uma variavel poder
            poder1=(float)populacao1+area1+pib1+(float)turismo1+pibpercapita1+(1/densidade1);
            poder2=(float)populacao2+area2+pib2+(float)turismo2+pibpercapita2+(1/densidade2);
   // comparando as variaveis 
resultado=poder1>poder2;
printf("%.2f",resultado);
resultado=populacao1>populacao2;
printf("%.2f",resultado);
resultado=area1>area2;
printf("%.2f",resultado);
resultado=pib1>pib2;
printf("%.2f",resultado);
resultado=(float)turismo1>(float)turismo2;
printf("%.2f",resultado);
resultado=pibpercapita1>pibpercapita2;
printf("%.2f",resultado);
resultado=(1/densidade1)<(1/densidade2);
printf("%.2f",resultado);
    return 0;

    return 0;
}
