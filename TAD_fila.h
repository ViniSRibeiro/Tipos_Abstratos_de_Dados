//
// Created by vinir on 29/10/2018.
//
#define MaxTam 1000;
#ifndef ESTUDOS_DE_AEDS_TAD_FILA_H
#define ESTUDOS_DE_AEDS_TAD_FILA_H

#endif //ESTUDOS_DE_AEDS_TAD_FILA_H

typedef int tChave;

typedef struct {
    tChave idade;
    char nome[50];
    char cidade;
}Item_fila;

typedef  int Apontador;

typedef  struct {
    Item_fila item[MaxTam];
    Apontador iFrente,iTras;
}Tipo_fila;

void FFVazia(Tipo_fila* fila);
int FEhVazia(Tipo_fila* fila);
int FEnfileira(Tipo_fila* fila,Item_fila* item);
int FDesenfileira(Tipo_fila* fila, Item_fila* item);
void FExibe(Tipo_fila* fila);