#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
struct Cidade {

char estado[3],nome_cidade[20];
int populacao,pts_turisticos,cod_carta;
double area,pib;
float densidade,pib_pct;

};

void entradaDados(struct Cidade* cidade){
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nDigite o código da carta:\n");
    scanf("%d", &cidade->cod_carta);

    printf("Digite o estado da cidade: 'SP'\n");
    scanf("%2s", cidade->estado);

    printf("Digite o nome da cidade:\n");
    scanf("%19s", &cidade->nome_cidade);

    printf("Digite quantidade populacional da cidade:\n");
    scanf("%i", &cidade->populacao);

    printf("Digite a área total da cidade, em km²:\n");
    scanf("%lf", &cidade->area);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &cidade->pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", &cidade->pts_turisticos);
}

void calcularDados(struct Cidade* cidade){
//Realizando o cálculo da densidade populaciona
    cidade->densidade = cidade->populacao / cidade->area;

//Realizando o cálculo do PIB per Capita
    cidade->pib_pct = cidade->pib/cidade->populacao;
}

void exibirDados(struct Cidade* cidade){
    // Exibição dos Dados das Cartas:
    printf("\nCodigo da Carta: %c%02d\n", cidade->estado[0],cidade->cod_carta);
    printf("Estado: %s\n", cidade->estado);
    printf("Nome da Cidade: %s\n", cidade->nome_cidade);
    printf("Populacao Total: %i\n", cidade->populacao);
    printf("Area Total: %.2lf km²\n", cidade->area);
    printf("PIB Total: %.2lf\n", cidade->pib);
    printf("Total de Pontos Turisticos: %i\n", cidade->pts_turisticos);
    printf("Densidade Populacional: %.2f\n", cidade->densidade);
    printf("PIB per Capita: %.2f\n\n", cidade->pib_pct);
}

int main(){
//criando váriaveis de cada carta
    struct Cidade carta1,carta2;

//cadastrando a primeira carta
    printf("\n=== Cadastre a primeira carta ===\n");
    entradaDados(&carta1);
    calcularDados(&carta1);

//cadastrando a segunda carta
    printf("\n=== Cadastre a segunda carta ===\n");
    entradaDados(&carta2);
    calcularDados(&carta2);

//exibindo as duas cartas cadastradas
    printf("\n=== Primeira carta Cadastrada com Sucesso ===\n");
    exibirDados(&carta1);

    printf("\n=== Segunda Carta Cadastrada com Sucesso ===\n");
    exibirDados(&carta2);

    return 0;
}



