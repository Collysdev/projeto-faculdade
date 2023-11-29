#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "obra.h"



int main()
{
    int opcao = 0;
    bool sair = false;
    int opcaoForms = 0;

    struct Obra obras[4];
    inicializarObras(obras);

    int numObras = 4;

    printf("Bem-vindo ao nosso Cinema multitematico!\n\n");

    while (!sair) {
        printf("Escolha uma opcao:\n");
        printf("1 - Venda de Ingressos\n");
        printf("2 - Gerenciamento de Obras\n");
        printf("3 - Visualizar como Visitante\n");
        printf("4 - Ver Respostas dos Formularios\n");
        printf("5 - Sair\n");

        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                compraDeIngresso();
                break;

            case 2:

                break;

            case 3:
                exibirOpcoes(obras);
                scanf("%d", &opcao);
                system("cls");

                if (opcao >= 1 && opcao <= 4) {
                    realizarQuestionario(obras, opcao, &numObras);
                } else {
                    printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
                }
                break;

                if (opcao >= 1 && opcao <= 4) {

                } else {
                    printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
                }
                break;

            case 4:
                mostrarRespostasCSV();
                break;

            case 5:
                printf("Obrigado por visitar nosso museu!\n");
                sair = true;
                break;

            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    }
    return 0;
}
