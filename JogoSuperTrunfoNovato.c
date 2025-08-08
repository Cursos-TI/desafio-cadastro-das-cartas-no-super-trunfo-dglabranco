#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    char estado1[2], estado2[2]; //para inserir a letra que representa o estado
    char carta1[4], carta2[4]; //para inserir o código da carta
    char cidade1[50], cidade2[50]; //para inserir o nome da cidade
    int populacao1, populacao2; //para inserir a população da cidade
    float area1, area2; //para inserir a área da cidade
    float PIB1, PIB2; //para inserir o pib da cidade
    int pontos1, pontos2; //para inserir o numero de pontos turisticos da cidade

    printf("----- Bem vindo ao jogo Super Trunfo Países! ---------- \n\n");
    printf("Para começar o jogo, precisaremos de algumas informações. Responda conforme as instruções abaixo: \n\n");

    printf("Para cadastrar a primeira carta, preciso que digite a letra que representa o seu estado (Utilize as letras de A até H): \n");
    scanf("%s", &estado1);

    printf("\nAgora, digite o código que representa a sua carta\n(Lembrando que precisa seguir a regra de preenchimento com a letra do estado, em seguida um número de 01 a 04, ex: A01),: \n");
    scanf("%s", &carta1);

    printf("\nÓtimo!\nSeguindo...\nDigite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("\nAgora digite a população da cidade: \n");
    scanf("%i", &populacao1);

    printf("\nBooaa!\n Agora digite a área da cidade: \n");
    scanf("%e", &area1);

    printf("\nVocê está indo bem!\n Me conta qual o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("\nÚltima pergunta, prometo ;D\n Digita agora o número de pontos turísticos que tem na cidade: \n");
    scanf("%i", &pontos1);

    //Preenchimento da segunda carta - seguindo os dados.

    printf("\n\nOK\nAgora vamos para a segunda carta. Vamos ao preenchimento: \n"); //Início do preenchimento da segunda carta

    printf("\nNa segunda carta, preciso que digite a letra que representa o seu estado (Utilize as letras de A até H): \n"); //Estado da segunda carta
    scanf("%s", &estado2);

    printf("\nAgora, digite o código que representa a sua carta\n(Lembrando que precisa seguir a regra de preenchimento com a letra do estado, em seguida um número de 01 a 04, ex: A01),: \n");
    scanf("%s", &carta2);

    printf("\nÓtimo!\nSeguindo...\nDigite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("\nAgora digite a população da cidade: \n");
    scanf("%i", &populacao2);

    printf("\nBooaa!\n Agora digite a área da cidade: \n");
    scanf("%e", &area2);

    printf("\nVocê está indo bem!\n Me conta qual o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("\nÚltima pergunta, prometo ;D\n Digita agora o número de pontos turísticos que tem na cidade: \n");
    scanf("%i", &pontos2);

    return 0;
}

