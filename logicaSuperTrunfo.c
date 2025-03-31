#include <stdio.h>

// Definindo a estrutura de Cidade com os atributos necessários
typedef struct {
    char estado[3];            // Sigla do estado
    char codigo[10];           // Código da carta
    char nome[50];             // Nome da cidade
    int populacao;             // População da cidade
    float area;                // Área da cidade em km²
    float pib;                 // PIB da cidade
    int pontos_turisticos;     // Número de pontos turísticos
} Cidade;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(Cidade cidade) {
    return cidade.populacao / cidade.area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(Cidade cidade) {
    return cidade.pib / cidade.populacao;
}

// Função para comparar duas cidades por um atributo específico (aqui, a população)
void compararCartas(Cidade cidade1, Cidade cidade2) {
    // Exibindo as populações das duas cidades
    printf("Comparação de cartas (Atributo: População):\n");
    printf("%s (%s): %d habitantes\n", cidade1.nome, cidade1.estado, cidade1.populacao);
    printf("%s (%s): %d habitantes\n", cidade2.nome, cidade2.estado, cidade2.populacao);

    // Comparando as populações e determinando o vencedor
    if (cidade1.populacao > cidade2.populacao) {
        printf("Resultado: %s venceu!\n", cidade1.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("Resultado: %s venceu!\n", cidade2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    // Definindo duas cidades
    Cidade cidade1 = {"SP", "001", "São Paulo", 12300000, 1521.11, 699000000000, 20};
    Cidade cidade2 = {"RJ", "002", "Rio de Janeiro", 6000000, 1182.3, 415000000000, 15};

    // Calculando e exibindo a densidade populacional para as duas cidades
    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade1.nome, calcularDensidadePopulacional(cidade1));
    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade2.nome, calcularDensidadePopulacional(cidade2));

    // Calculando e exibindo o PIB per capita para as duas cidades
    printf("PIB per capita de %s: %.2f\n", cidade1.nome, calcularPibPerCapita(cidade1));
    printf("PIB per capita de %s: %.2f\n", cidade2.nome, calcularPibPerCapita(cidade2));

    // Comparando as cidades com base na população
    compararCartas(cidade1, cidade2);

    return 0;
}
