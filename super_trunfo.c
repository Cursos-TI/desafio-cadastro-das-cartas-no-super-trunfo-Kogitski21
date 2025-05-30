#include <stdio.h>

// Definição da estrutura para armazenar os dados da carta
typedef struct {
    char estado;                    // Letra de 'A' a 'H'
    char codigo[4];                 // Exemplo: A01
    char nomeCidade[50];           // Nome da cidade
    int populacao;                 // Número de habitantes
    float area;                    // Área em km²
    float pib;                     // PIB da cidade em bilhões
    int pontosTuristicos;          // Número de pontos turísticos
} CartaSuperTrunfo;

void lerCarta(CartaSuperTrunfo *carta, int numero) {
    printf("Digite os dados da Carta %d:\n", numero);
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado); // Espaço antes de %c para ignorar o Enter anterior
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nomeCidade); // Lê string com espaços
    
    printf("População: ");
    scanf("%d", &carta->populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    printf("\n"); // Linha em branco após cada carta
}

void exibirCarta(CartaSuperTrunfo carta, int numero) {
    printf("Carta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n\n", carta.pontosTuristicos);
}

int main() {
    CartaSuperTrunfo carta1, carta2;

    printf("=== Cadastro de Cartas do Super Trunfo ===\n\n");

    // Leitura dos dados das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Exibição das cartas cadastradas
    printf("=== Cartas Cadastradas ===\n\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
