//
// Created by vinir on 29/10/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include "TAD_pilha.h"

void FPVazia(Tipo_pilha* pPilha){
    pPilha->IEscanor = 0;
};

int PEhVazia(Tipo_pilha* pPilha){
    return(pPilha->IEscanor ==0);
};

int PEmpilha(Tipo_pilha* pPilha, Item_pilha* Item){
    if(pPilha->IEscanor == MaxTam){
        return 0;
    }else{
        pPilha->item[pPilha->IEscanor]= *Item;
        pPilha->IEscanor ++;
        return 1;
    };
};

int PDesempilha(Tipo_pilha* pPilha,Item_pilha* Item){
    if(PEhVazia(pPilha)){
        return 0;
    }else{
        pPilha->IEscanor --;
        *Item = pPilha->item[pPilha->IEscanor];
    };
};

int PTamanho(Tipo_pilha* pPilha){
    return pPilha->IEscanor;
};

void PExibe(Tipo_pilha* pPilha){
    for (int i = 0;i <pPilha->IEscanor ;i ++) {
        printf("%d\n",pPilha->item[i].ID);
        printf("%s\n",pPilha->item[i].nome);
    }
};
