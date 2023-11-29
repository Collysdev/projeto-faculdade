#ifndef OBRAS_H_INCLUDED
#define OBRAS_H_INCLUDED

struct Obra {
    char titulo[100];
    char descricao[500];
};

void inicializarObras(struct Obra obras[]);
void exibirOpcoes(struct Obra obras[]);
void responderQuestionario(char titulo[]);
//void salvarRespostas(char obra[], char pergunta[], char resposta);
//void mostrarRespostasCSV();

#endif // OBRAS_H_INCLUDED
