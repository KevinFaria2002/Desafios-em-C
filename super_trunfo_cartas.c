#include <stdio.h>
#include <string.h>

// Infelizmente não consegui implementar uma função de limeza de buffer que funcionasse corretamente sem uma variável de repetição.

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    // Variáveis para armazenar os dados das cartas e nome do jogador.

    // Nome do jogador.
    char nome[100];

    // Primeira carta.
    char estado[50];
    char codigo[10];
    char cidade[80];
    int populacao;
    int turisticos;
    float area_km2;
    float pib;

    // Segunda carta.
    char estado2[50];
    char codigo2[10];
    char cidade2[80];
    int populacao2;
    int turisticos2;
    float area_km22;
    float pib2;

    // Lê o nome do jogador.
    printf("Digite o seu nome (Ate 99 caracteres): ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = 0; 

    // Lê os dados da primeira carta

    // Estado.
    printf("Agora vamos cadastrar a primeira carta.\n");
    printf("Escolha um dos oito estados a seguir: 1 Goias, 2 Minas Gerais, 3 Sao Paulo, 4 Rio de Janeiro, 5 Parana, 6 Santa Catarina, 7 Rio Grande do Sul, 8 Bahia.\n");
    printf("Estado: ");
    fgets(estado, 50, stdin);
    estado[strcspn(estado, "\n")] = 0;

    // Código da carta.
   printf("Digite o codigo da carta de acordo com o numero do seu estado escolhido. EX: GO01.\n");
   printf("Digite o codigo da carta: ");
   scanf("%9s", codigo);
   limparBuffer();

    // Cidade.
    printf("Agora vamos cadastrar a cidade de acordo com o estado que voce escolheu.\n");
    printf("Nome da cidade (Ate 79 caracteres):");
    fgets(cidade, 80, stdin);
    cidade[strcspn(cidade, "\n")] = 0;
    
    // População.
    printf("Agora vamos cadastrar a populacao da cidade.\n");
    printf("Populacao: ");
    scanf("%d", &populacao);
    limparBuffer();

    // Área em km².
    printf("Agora vamos cadastrar a area da cidade em km2.\n");
    printf("Área em km2: ");
    scanf("%f", &area_km2);
    limparBuffer();

    // PIB.
    printf("Agora vamos cadastrar o PIB da cidade.\n");
    printf("PIB: ");
    scanf("%f", &pib);
    limparBuffer();

    // Turísticos.
    printf("Agora vamos cadastrar o numero de pontos turisticos da cidade.\n");
    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos);
    limparBuffer();

    // Lê os dados da segunda carta

    printf("Agora vamos cadastrar a segunda carta.\n");
    // Estado.
    printf("Escolha um dos oito estados a seguir: 1 Goias, 2 Minas Gerais, 3 Sao Paulo, 4 Rio de Janeiro, 5 Parana, 6 Santa Catarina, 7 Rio Grande do Sul, 8 Bahia.\n");
    printf("Estado: ");
    fgets(estado2, 50, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    // Código da carta.
    printf("Digite o codigo da carta de acordo com o numero do seu estado escolhido. EX: GO01.\n");
    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo2);
    limparBuffer();

    // Cidade.
    printf("Agora vamos cadastrar a cidade de acordo com o estado que voce escolheu.\n");
    printf("Nome da cidade (Ate 79 caracteres): ");
    fgets(cidade2, 80, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    // População.
    printf("Agora vamos cadastrar a populacao da cidade.\n");
    printf("Populacao: ");
    scanf("%d", &populacao2);
    limparBuffer();

    // Área em km².
    printf("Agora vamos cadastrar a area da cidade em km2.\n");
    printf("Área em km2: ");
    scanf("%f", &area_km22);
    limparBuffer();

    // PIB.
    printf("Agora vamos cadastrar o PIB da cidade.\n");
    printf("PIB: ");
    scanf("%f", &pib2);
    limparBuffer();

    // Pontos turísticos.
    printf("Agora vamos cadastrar o numero de pontos turisticos da cidade.\n");
    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos2);
    limparBuffer();

    // Exibe os dados das cartas cadastradas

    // Exibe a primeira carta.
    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Área em km2: %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", turisticos);

    // Exibe a segunda carta.
    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Área em km2: %.2f\n", area_km22);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);

    printf("Obrigado por jogar! %s.\n", nome);

    return 0;
}
// Fim do código.
