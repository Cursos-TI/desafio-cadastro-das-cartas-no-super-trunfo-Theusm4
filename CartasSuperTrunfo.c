#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
struct Cidade {

char estado[3],nome_cidade[20];
int pts_turisticos,cod_carta;
double area,pib;
float densidade,pib_pct;
long unsigned int superPower,populacao;

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
    scanf("%lu", &cidade->populacao);

    printf("Digite a área total da cidade, em km²:\n");
    scanf("%lf", &cidade->area);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &cidade->pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%i", &cidade->pts_turisticos);
}

void calcularDados(struct Cidade* cidade){
//Realizando o cálculo da densidade populacional
    cidade->densidade = cidade->populacao / cidade->area;

//Realizando o cálculo do PIB per Capita
    cidade->pib_pct = cidade->pib/cidade->populacao;

//Realizando o cálculo do super poder
    cidade->superPower = cidade->populacao + cidade->area + cidade->pib + cidade->pts_turisticos;
}

void comparaCartas(struct Cidade* carta1, struct Cidade* carta2){
//Realizando comparação entre as cartas
//Iniciando com a comparação em população
    if(carta1->populacao > carta2->populacao)
        printf("%s tem mais população que %s\n", carta1->nome_cidade, carta2->nome_cidade);
    else if(carta1->populacao < carta2->populacao)
        printf("%s tem mais população que %s\n", carta2->nome_cidade, carta1->nome_cidade);
    else
        printf("As duas cartas tem a mesma população.\n");

//Comparando a área
    if(carta1->area > carta2->area)
        printf("%s tem a área maior que %s\n", carta1->nome_cidade, carta2->nome_cidade);
    else if(carta1->area < carta2->area)
        printf("%s tem a área maior que %s\n", carta2->nome_cidade, carta1->nome_cidade);
    else
        printf("Ambas possuem a mesma área!\n");

//Comparando o PIB
    if(carta1->pib > carta2->pib)
        printf("%s tem o PIB maior que %s\n", carta1->nome_cidade, carta2->nome_cidade);
    else if(carta1->pib < carta2->pib)
        printf("%s tem o PIB maior que %s\n", carta2->nome_cidade, carta1->nome_cidade);
    else
        printf("Ambas possuem o mesmo PIB!\n");
        
//Comparando os pontos turísticos
    if(carta1->pts_turisticos > carta2->pts_turisticos)
        printf("%s tem mais pontos turísticos que %s\n", carta1->nome_cidade, carta2->nome_cidade);
    else if(carta1->pts_turisticos < carta2->pts_turisticos)
        printf("%s tem mais pontos turísticos que %s\n", carta2->nome_cidade, carta1->nome_cidade);
    else
        printf("Ambas possuem a mesma quantidade de pontos turísticos!\n");

//Comparando a densidade populacional
    if(carta1->densidade > carta2->densidade)
        printf("%s tem maior densidade populacional que %s\n", carta1->nome_cidade, carta2->nome_cidade);
    else if(carta1->densidade < carta2->densidade)
        printf("%s tem maior densidade populacional que %s\n", carta2->nome_cidade, carta1->nome_cidade);
    else
        printf("Ambas possuem a mesma densidade populacional!\n");

//Comparando o PIB per Capita
    if(carta1->pib_pct > carta2->pib_pct)
        printf("%s tem o PIB per Capita maior que %s\n", carta1->nome_cidade, carta2->nome_cidade);
    else if(carta1->pib_pct < carta2->pib_pct)
        printf("%s tem o PIB per Capita maior que %s\n", carta2->nome_cidade, carta1->nome_cidade);
    else
        printf("Ambas possuem o mesmo PIB per Capita!\n");

//Comparando o Super Poder
    if(carta1->superPower > carta2->superPower)
        printf("%s tem o Super Poder maior que %s\n\n", carta1->nome_cidade, carta2->nome_cidade);
    else if(carta1->superPower < carta2->superPower)
        printf("%s tem o Super Poder maior que %s\n\n", carta2->nome_cidade, carta1->nome_cidade);
    else
        printf("Ambas possuem o mesmo valor em Super Poder!\n\n");
}

void exibirDados(struct Cidade* cidade){
    // Exibição dos Dados das Cartas:
    printf("\nCodigo da Carta: %c%02d\n", cidade->estado[0],cidade->cod_carta);
    printf("Estado: %s\n", cidade->estado);
    printf("Nome da Cidade: %s\n", cidade->nome_cidade);
    printf("Populacao Total: %lu\n", cidade->populacao);
    printf("Area Total: %.2lf km²\n", cidade->area);
    printf("PIB Total: %.2lf\n", cidade->pib);
    printf("Total de Pontos Turisticos: %i\n", cidade->pts_turisticos);
    printf("Densidade Populacional: %.2f\n", cidade->densidade);
    printf("PIB per Capita: %.2f\n", cidade->pib_pct);
    printf("Super Poder: %lu\n", cidade->superPower);
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

//Exibindo a comparação entre as cartas
    printf("\n=== Disputa de valores entre as cartas ===\n\n");
    comparaCartas(&carta1,&carta2);

    return 0;
}



