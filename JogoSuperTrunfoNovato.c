#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    char estado1[2], estado2[2]; //para inserir a letra que representa o estado
    char codigo1[4], codigo2[4]; //para inserir o código da carta
    char cidade1[50], cidade2[50]; //para inserir o nome da cidade
    int populacao1, populacao2; //para inserir a população da cidade
    float area1, area2; //para inserir a área da cidade
    float PIB1, PIB2; //para inserir o pib da cidade
    int pontos1, pontos2; //para inserir o numero de pontos turisticos da cidade
    float pibpercapita1, pibpercapita2, densidadepop1, densidadepop2; //para calculo do pib e densidade populacional

    printf("----- Bem vindo ao jogo Super Trunfo Países! ---------- \n\n");
    printf("Para começar o jogo, precisaremos de algumas informações. Responda conforme as instruções abaixo: \n\n");

    printf("Para cadastrar a primeira carta, preciso que digite a letra que representa o seu estado (Utilize as letras de A até H): \n");
    scanf("%1s", estado1); // Limitar a 1 caractere

    printf("\nAgora, digite o código que representa a sua carta\n(Lembrando que precisa seguir a regra de preenchimento com a letra do estado, em seguida um número de 01 a 04, ex: A01),: \n");
    scanf("%3s", codigo1); // Limitar a 3 caracteres

    printf("\nÓtimo!\nSeguindo...\nDigite o nome da cidade:\nUtilize '_' para cidades que possuam nomes compostos! \n");
    scanf("%s", cidade1);
;
    printf("\nAgora digite a população da cidade: \n");
    scanf("%i", &populacao1);

    printf("\nBooaa!\n Agora digite a área da cidade (em km²): \n");
    scanf("%f", &area1);

    printf("\nVocê está indo bem!\n Me conta qual o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB1);

    printf("\nÚltima pergunta, prometo ;D\n Digita agora o número de pontos turísticos que tem na cidade: \n");
    scanf("%i", &pontos1);

    //Preenchimento 2 carta

    printf("\n\nOK\nAgora vamos para a segunda carta. Vamos ao preenchimento: \n"); //Início do preenchimento da segunda carta

    printf("\nNa segunda carta, preciso que digite a letra que representa o seu estado (Utilize as letras de A até H): \n"); //Estado da segunda carta
    scanf("%1s", estado2);

    printf("\nAgora, digite o código que representa a sua carta\n(Lembrando que precisa seguir a regra de preenchimento com a letra do estado, em seguida um número de 01 a 04, ex: A01),: \n");
    scanf("%3s", codigo2);

    printf("\nÓtimo!\nSeguindo...\nDigite o nome da cidade:\nUtilize '_' para cidades que possuam nomes compostos! \n");
    scanf("%s", cidade2);

    printf("\nAgora digite a população da cidade: \n");
    scanf("%i", &populacao2);

    printf("\nBooaa!\n Agora digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("\nVocê está indo bem!\n Me conta qual o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &PIB2);

    printf("\nÚltima pergunta, prometo ;D\n Digita agora o número de pontos turísticos que tem na cidade: \n");
    scanf("%i", &pontos2);

    // Calcular PIB per Capita e Densidade Populacional

    densidadepop1 = (float) populacao1 / area1;
    densidadepop2 = (float) populacao2 / area2;
    pibpercapita1 = (float) PIB1 / populacao1;
    pibpercapita2 = (float) PIB2 / populacao2;

// Exibição dos dados da carta 1

    printf("\n\n******Carta 1******\n\n");
    printf("\nEstado: %s \n", estado1);
    printf("\nCódigo: %s \n", codigo1);
    printf("\nCidade: %s \n", cidade1);
    printf("\nPopulação: %i \n", populacao1);
    printf("\nÁrea: %f km²\n", area1);
    printf("\nPIB: %f \n", PIB1);
    printf("\nPontos Turísticos: %i \n", pontos1);
    printf("\nDensidade Populacional: %f hab/km² \n", densidadepop1); //nível aventureiro, com os novos cálculos
    printf("\nPIB per Capita: %.2f reais \n", pibpercapita1);  //nível aventureiro, com os novos cálculos

   // Exibição dos dados da carta 2
   
       printf("\n\n******Carta 2******\n\n");
    printf("\nEstado: %s \n", estado2);
    printf("\nCódigo: %s \n", codigo2);
    printf("\nCidade: %s \n", cidade2);
    printf("\nPopulação: %i \n", populacao2);
    printf("\nÁrea: %f \n", area2);
    printf("\nPIB: %f \n", PIB2);
    printf("\nPontos Turísticos: %i \n", pontos2);
    printf("\nDensidade Populacional: %f hab/km² \n", densidadepop2); //nível aventureiro, com os novos cálculos
    printf("\nPIB per Capita: %.2f reais \n\n\n", pibpercapita2); //nível aventureiro, com os novos cálculos


    return 0;
}


