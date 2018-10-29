#include <stdio.h>
#include <stdlib.h>
#include "TAD_pilha.h"
#include "TAD_fila.h"
int main(){
    int qtd;
    Item_pilha item;
    Tipo_pilha pilha;

    printf("Quantidade de users:\n");
    scanf("%d", &qtd);

    FPVazia(&pilha);

    for (int i = 0; i<qtd ; i++){

        printf("\nid:");
        scanf("%d",&item.ID);

        printf("\nNome:");
        scanf("%s",item.nome);

        PEmpilha(&pilha,&item);
    }
    printf("\n------------------------------\n");
    PExibe(&pilha);


    qtd =0;
    printf("\ndigite quantos users deseja excluir:");
    scanf("%i",&qtd);

    for (int i = 0; i<qtd ; i++){

        PDesempilha()esempilha(&pilha,&item);

    }


    printf("\n------------------------------\n");
    PExibe(&pilha);



    return 0;
}