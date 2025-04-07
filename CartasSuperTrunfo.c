#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
int main(){
//Declarando as váriaveis que estruturam as cartas das cidades
//carta1
char estado[3],nome_cidade[20],cod_carta[4];
int pts_turisticos;
double area,pib;
float densidade,pib_pct;
long unsigned int superPower,populacao;

//carta2
char estado2[3],nome_cidade2[20],cod_carta2[4];
int pts_turisticos2;
double area2,pib2;
float densidade2,pib_pct2;
unsigned long int superPower2,populacao2;

 // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
 printf("Cadastramento de cartas:\n");

 //Cadastramento da primeira carta
 printf("\nPreencha os dados da primeira carta: \n");
 printf("Digite o estado da cidade: 'S = São Paulo'\n");
 scanf("%2s", estado);

 printf("Digite o código da cidade: 'Estado + número de 01 a 04\n");
 scanf("%s", cod_carta);

 getchar();

 printf("Digite o nome da cidade:\n");
 scanf("%20[^\n]", nome_cidade);

 printf("Digite quantidade populacional da cidade:\n");
 scanf("%i", &populacao);

 printf("Digite a área total da cidade, em km²:\n");
 scanf("%lf", &area);

 printf("Digite o PIB da cidade:\n");
 scanf("%lf", &pib);

 printf("Digite a quantidade de pontos turísticos:\n");
 scanf("%i", &pts_turisticos);

//Cadastramento da segunda carta
printf("\nPreencha os dados da segunda carta: \n");
 printf("Digite o estado da cidade: 'S = São Paulo'\n");
 scanf("%2s", estado2);

 printf("Digite o código da cidade: 'Estado + número de 01 a 04\n");
 scanf("%s", cod_carta2);

 getchar();
 
 printf("Digite o nome da cidade:\n");
 scanf("%20[^\n]", nome_cidade2);

 printf("Digite quantidade populacional da cidade:\n");
 scanf("%i", &populacao2);

 printf("Digite a área total da cidade, em km²:\n");
 scanf("%lf", &area2);

 printf("Digite o PIB da cidade:\n");
 scanf("%lf", &pib2);

 printf("Digite a quantidade de pontos turísticos:\n");
 scanf("%i", &pts_turisticos2);

//Realizando o cálculo da densidade populacional das cartas
densidade = (float) populacao/area;
densidade2 = (float) populacao2/area2;

//Realizando o cálculo do PIB per Capita das cartas
pib_pct = pib/populacao;
pib_pct2 = pib2/populacao2;

//Realizando o cálculo do Super Poder das cartas
superPower = (float) (populacao+area+pib+pts_turisticos+pib_pct+(1/densidade));
superPower = (float) (populacao2+area2+pib2+pts_turisticos2+pib_pct2+(1/densidade2));

// Exibição dos Dados das Cartas:
// Carta 1
printf("\nDados da primeira carta:\n");
printf("\nCodigo da Carta: %s\n", cod_carta);
printf("Estado: %s\n", estado);
printf("Nome da Cidade: %s\n", nome_cidade);
printf("Populacao Total: %lu\n", populacao);
printf("Area Total: %.2lf km²\n", area);
printf("PIB Total: %.2lf\n", pib);
printf("Total de Pontos Turisticos: %i\n", pts_turisticos);
printf("Densidade Populacional: %.2f\n", densidade);
printf("PIB per Capita: %.2f\n", pib_pct);
printf("Super Poder: %lu\n", superPower);

//Carta 2
printf("\nDados da segunda carta:\n");
printf("\nCodigo da Carta: %s\n", cod_carta2);
printf("Estado: %s\n", estado2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("Populacao Total: %lu\n", populacao2);
printf("Area Total: %.2lf km²\n", area2);
printf("PIB Total: %.2lf\n", pib2);
printf("Total de Pontos Turisticos: %i\n", pts_turisticos2);
printf("Densidade Populacional: %.2f\n", densidade2);
printf("PIB per Capita: %.2f\n", pib_pct2);
printf("Super Poder: %lu\n", superPower2);

//Comparação das cartas
printf("\nComparacao das cartas: (Resultado 1 para verdadeiro e 0 para falso)\n");

printf("Populacao: Carta 1 venceu? %i\n", populacao>populacao2);
printf("Area Total: Carta 1 venceu? %i\n", area>area2);
printf("PIB Total: Carta 1 venceu? %i\n", pib>pib2);
printf("Pontos Turisticos: Carta 1 venceu? %i\n", pts_turisticos>pts_turisticos2);
printf("Densidade Populacional: Carta 1 venceu? %i\n", densidade<densidade2);
printf("PIB per Capita: Carta 1 venceu? %i\n", pib_pct>pib_pct2);
printf("Super Poder: Carta 1 venceu? %i\n", superPower>superPower2);

    return 0;
};



