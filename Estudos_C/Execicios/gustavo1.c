#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 99
#define MAX_NOME 50
#define MAX_PEDIDOS 100

typedef struct {
    char nome[MAX_NOME];
    float valor;
    int quantidade;
} Produto;

typedef struct {
    int id;
    Produto produtos[MAX_PRODUTOS];
    float total;
} Pedido;

int main() {
    Pedido pedidos[MAX_PEDIDOS];
    int numPedidos = 0;
    int opcao;

    do {
        printf("Escolha uma opção:\n1. Fazer um pedido\n2. Listar pedidos\n3. Sair\n");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1: {
                Pedido novoPedido;
                novoPedido.id = numPedidos + 1;
                novoPedido.total = 0;
                int i = 0;

                while (i < MAX_PRODUTOS) {
                    printf("Nome do produto: ");
                    fgets(novoPedido.produtos[i].nome, MAX_NOME, stdin);
                    novoPedido.produtos[i].nome[strcspn(novoPedido.produtos[i].nome, "\n")] = 0; 

                    printf("Valor do produto: ");
                    scanf("%f", &novoPedido.produtos[i].valor);
                    printf("Quantidade: ");
                    scanf("%d", &novoPedido.produtos[i].quantidade);
                    getchar(); // Limpa o buffer

                    novoPedido.total += novoPedido.produtos[i].valor * novoPedido.produtos[i].quantidade;
                    i++;

                    char continuar[4];
                    printf("Adicionar mais um produto? (sim/nao): ");
                    fgets(continuar, sizeof(continuar), stdin);
                    continuar[strcspn(continuar, "\n")] = 0; // Remove a nova linha

                    if (strcmp(continuar, "nao") == 0) {
                        break;
                    }
                }

                pedidos[numPedidos] = novoPedido;
                numPedidos++;
                printf("Pedido ID %d criado com sucesso!\n", novoPedido.id);
                break;
            }
            case 2:
                if (numPedidos == 0) {
                    printf("Nenhum pedido foi feito ainda.\n");
                } else {
                    for (int i = 0; i < numPedidos; i++) {
                        printf("Pedido ID: %d, Total: %.2f\n", pedidos[i].id, pedidos[i].total);
                    }
                }
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}