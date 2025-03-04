#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // definindo variáveis e atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1,estado2;
    char codigo1[3],codigo2[3];
    char nome1[50],nome2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int turismo1,turismo2;
    
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //cadastro da primeira cidade
        printf("Insira as informações da primeira cidade: \n");
        printf("Nome da cidade : ");
        scanf("%s", &nome1);
        printf("Estado: ");
        scanf("%c", &estado1);
        printf("Codigo da cidade: ");
        scanf("%s", &codigo1);
        printf("População: ");
        scanf("%d", &populacao1);
        printf("PIB da cidade:");
        scanf("%f", &pib1);
        printf("Área da cidade em M²: ");
        scanf("%f", &area1);
        printf("Quantos pontos turinsticos tem na cidade? ");
        scanf("%d", &turismo1);
    
//imprimindo informações da primeira carta
            printf("Carta 1: \nEstado: %c \n",estado1);
            printf("Código: %s \n",codigo1);
            printf("Nome da Cidade: %s \n",nome1);
            printf("Populção: %d \n",populacao1);
            printf("Área: %f \n",area1);
            printf("PIB: %f \n"pib1);
            printf("Número de pontos Turíscos: %d \n",turismo1);

    //cadastro da segunda cidade
        printf("Agora insira as informações da segunda cidade: ");
        printf("Nome da cidade : ");
        scanf("%s", &nome2);
        printf("Estado; ");
        scanf("%c", &estado2);
        printf("Codigo da cidade: ");
        scanf("%s", &codigo2);
        printf("População: ");
        scanf("%d", &populacao2);
        printf("PIB da cidade: ");
        scanf("%f", &pib2);
        printf("Área da cidade em M²: ");
        scanf("%f", &area2);
        printf("Quantos pontos turinsticos tem na cidade? ");
        scanf("%d", &turismo2);
    
    //imprimindo informações da segunda carta
            printf("Carta 2: \nEstado: %c \n",estado2);
            printf("Código: %s \n",codigo2);
            printf("Nome da Cidade: %s \n",nome2);
            printf("Populção: %d \n",populacao2);
            printf("Área: %f \n",area2);
            printf("PIB: %f \n"pib2);
            printf("Número de pontos Turíscos: %d \n",turismo2);

    return 0;
}
