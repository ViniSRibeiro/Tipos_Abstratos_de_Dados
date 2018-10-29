//
// Created by vinir on 29/10/2018.
//
#include <stdio.h>
#include <stdlib.h>
#define MaxTam 1000;
#ifndef ESTUDOS_DE_AEDS_TAD_PILHA_H
#define ESTUDOS_DE_AEDS_TAD_PILHA_H

#endif //ESTUDOS_DE_AEDS_TAD_PILHA_H


typedef struct Item{
    int ID;
    char nome;
}Item_pilha;

typedef int Apontador;

typedef struct Pilha{
    Apontador IEscanor;
    Item_pilha item[MaxTam];
}Tipo_pilha;

void FPVazia(Tipo_pilha* pPilha);
int PEhVazia(Tipo_pilha* pPilha);
int PEmpilha(Tipo_pilha* pPilha, Item_pilha* Item);
int PDesempilha(Tipo_pilha* pPilha,Item_pilha* Item);
int PTamanho(Tipo_pilha* pPilha);
void PExibe(Tipo_pilha* pPilha);
