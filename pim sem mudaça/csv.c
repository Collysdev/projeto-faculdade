#include <stdio.h>
#include "obra.h"
#include "csv.h"

void salvarRespostasCSV(char obra[], char pergunta[], char resposta) {
    FILE *arquivo;
    arquivo = fopen("respostas.csv", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }

    fprintf(arquivo, "%s,%s,%c\n", obra, pergunta, resposta);
    fclose(arquivo);
}

void mostrarRespostasCSV() {
    FILE *arquivo;
    char linha[100];
    char obra,pergunta, *resposta;

    arquivo = fopen("respostas.csv", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }

    printf("Conteudo do arquivo respostas.csv:\n");
    while (fgets(linha, sizeof(linha), arquivo)) {
        obra = strtok(linha, ",");
        pergunta = strtok(NULL, ",");
        resposta = strtok(NULL, ",");
        printf("Obra: %s\nPergunta: %s\nResposta: %s\n\n", obra, pergunta, resposta);
    }

    fclose(arquivo);
}
