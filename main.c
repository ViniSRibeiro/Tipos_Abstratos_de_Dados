#include <stdio.h>
#include "TAD_pilha.h"

int main()
{
    int qtd;
    Item_pilha item;
    Tipo_pilha pilha;

    printf("Quantidade de users:\n");
    scanf("%d", &qtd);

    FPVazia(&pilha);

    for (int i = 0; i<qtd ; i++){

        printf("\nid:");
        scanf("%d",&item.id);

        printf("\nNome:");
        scanf("%s",item.nome);

        Empilha(&pilha,&item);
    }
    printf("\n------------------------------\n");
    PExibe(&pilha);


    qtd =0;
    printf("\ndigite quantos users deseja excluir:");
    scanf("%d", &qtd);

    for (int i = 0; i<qtd ; i++){

        Desempilha(&pilha,&item);

    }


    printf("\n------------------------------\n");
    Exibe(&pilha);



    return 0;
}