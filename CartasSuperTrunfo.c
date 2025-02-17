#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int cod_cidade=0;
    char nome_cidade[20]='cidade';
    int populacao=1000;
    double area=1750.32;
    double pib=1548321.90;
    int pts_turisticos=5;
    
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastramento de cartas:\n");

    printf("Digite o código da cidade:\n");
    scanf("%d", cod_cidade);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade);

    printf("Digite quantidade populacional da cidade:\n");
    scanf("%i", populacao);

    printf("Digite a área total da cidade:\n");
    scanf("%.2lf", area);

    printf("Digite o PIB da cidade:\n");
    scanf("%.2lf", pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", pts_turisticos);

    // Exibição dos Dados das Cartas:
    printf("\nCarta cadastrada com sucesso, verifique os dados:\n");

    printf("Nome da cidade:\n", nome_cidade);
    printf("População total:\n", populacao);
    printf("Área total:\n", area);
    printf("PIB total:\n", pib);
    printf("Total de pontos turísticos:\n", pts_turisticos);

    return 0;
}
