#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void compraDeIngresso(int opcao, int I, int meia) {
    int maxDia = 50;
    int valor = 40;
    int totalIngressos = 0;  // para rastrear o total de ingressos comprados no dia

    printf("Digite a forma do ingresso\n");
    printf("Digite 1 para inteira\n");
    printf("Digite 2 para meia\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("O valor  do ingresso e R$40.00\n");
        printf("Digite a quantidade de ingresso: ");
        scanf("%d", &I);

        // Verifica se excede o limite m�ximo de ingressos por dia
        if (totalIngressos + I > maxDia) {
            printf("Desculpe, excedeu o limite de ingressos disponiveis para hoje.\n");
        } else {
            totalIngressos += I;
            I = I * valor;
            printf("Valor do seu pedido: %d\n", I);
        }
    } else if (opcao == 2) {
        printf("O valor  do ingresso e R$20.00\n");
        printf("Digite a quantidade de ingresso: ");
        scanf("%d", &meia);

        // Verifica se excede o limite m�ximo de ingressos por dia
        if (totalIngressos + meia > maxDia) {
            printf("Desculpe, excedeu o limite de ingressos dispon�veis para hoje.\n");
        } else {
            totalIngressos += meia;
            meia = (meia * valor) / 2;
            printf("Valor do seu pedido: %d\n", meia);
        }
    }

    getch();
    system("cls");
}
