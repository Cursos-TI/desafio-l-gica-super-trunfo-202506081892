#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

// Desafio Super Trintunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste F.Augusto


     
    char estadoA[90], estadoB[90]; // De A a H
    char codigo_cidadeA[90], codigo_cidadeB[90]; //A01
    char nomeA[90], nomeB[90]; // (string)
    int populacaoA, populacaoB;
    float areaA[90], areaB[90];;// KM
    float pibA[90], pibB[90]; // Produto interno Bruto
    int numero_pontos_turisticosA[90], numero_pontos_turisticosB[90];

    int vitoriasA = 0, vitoriasB = 0;

    printf("\n--- Cadastro da Carta 1 ---\n");

        // Leitura do nome do estado
    printf("Insira do estado: ");
    scanf("%s", estadoA);
    printf("Estado: %s\n", estadoA);

        // Leitura do nome da cidade
    printf("Insira o nome da cidadade:");
    scanf("%s", nomeA);
    printf("Nome da cidade: %s\n", nomeA);
        
        // Leitura do código da cidade
    printf("Digite o código da cidade");
    scanf("%s", codigo_cidadeA);
    printf("O codigo da cidade é:  %s\n", codigo_cidadeA);

        // Leitura da população
    printf("Insira o população:");
    scanf("%d", &populacaoA);
    printf("População: %d\n", populacaoA);

        // Leitura da área
    printf("Insira o area:");
    scanf("%f", &areaA[0]);
    printf("Área: %.2f km²\n", areaA[0]);

        // Leitura do PIB
    printf("Insira o pib:");
    scanf("%f", &pibA[0]);
    printf("PIB: %.2f\n", pibA[0]);
        
    // Leitura do número de pontos turísticos
    printf("Insira o número de pontos turísticos:");
    scanf("%d", &numero_pontos_turisticosA[0]); // Lê os pontos turísticos para o array
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticosA[0]); 
    
    printf("\n--- Cadastro da Carta 2 ---\n");

        // Leitura do nome do estado
    printf("Insira do estado: ");
    scanf("%s", estadoB);
    printf("Estado: %s\n", estadoB);

        // Leitura do nome da cidade
    printf("Insira o nome da cidadade:");
    scanf("%s", nomeB);
    printf("Nome da cidade: %s\n", nomeB);
        
        // Leitura do código da cidade
    printf("Digite o código da cidade");
    scanf("%s", codigo_cidadeB);
    printf("O codigo da cidade é %s\n", codigo_cidadeB);

        // Leitura da população
    printf("Insira o população:");
    scanf("%d", &populacaoB);
    printf("População: %d\n", populacaoB);

        // Leitura da área
    printf("Insira o area:");
    scanf("%f", &areaB[0]);
    printf("Área: %.2f km²\n", areaB[0]);

        // Leitura do PIB
    printf("Insira o pib:");
    scanf("%f", &pibB[0]);
    printf("PIB: %.2f\n", pibB[0]);
        
    // Leitura do número de pontos turísticos
    printf("Insira o número de pontos turísticos:");
    scanf("%d", &numero_pontos_turisticosB[0]); // Lê os pontos turísticos para o array
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticosB[0]);   
       
    
    if (populacaoA > populacaoB) {
        printf("Cidade 1 tem maior população.\n");
        vitoriasA++;
    } else {
        printf("Cidade 2 tem maior população.\n");
        vitoriasB++;
    }

    if (areaA > areaB) {
        printf("Cidade 1 tem maior area.\n");
        vitoriasA++;
    } else {
        printf("Cidade 2 tem maior area.\n");
        vitoriasB++;
    }

    if (pibA < pibB) {
        printf("Cidade 1 tem o maior pib.\n");
        vitoriasA++;
    } else {
        printf("Cidade 2 tem  o maior pib.\n");
        vitoriasB++;
    }

    float densidadeA = populacaoA / areaA[0];
    float densidadeB = populacaoB / areaB[0];

    if(densidadeA < densidadeB){
        printf("A densidade da cidade 1 é menor que cidade 2\n");
        vitoriasA++;
    }else{
        printf("A densidade da cidade 2 é menor que a cidade 1\n");
        vitoriasB++;
    }

    if(vitoriasA > vitoriasB){
        printf("Cidade 1 teve mais características positivas");
    } else{
        printf("Cidade 2 teve mais características positivas");
    }

}

