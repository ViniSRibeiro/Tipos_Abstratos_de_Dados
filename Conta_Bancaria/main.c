#include <stdio.h>
#include "conta_bancaria.h"
int main() {
    bank_account continha;
    int option,account_number;
    float money;
    printf("Hello, there\n");
    printf("General Kenobi\n");
    printf("Digite 2 para operar a conta existente ou 0 para ver extrato\n");
    scanf("%d",&option);
    printf("digite o numero da conta\n");
    scanf("%d",&account_number);
    printf("dgite o valor inicial\n");
    scanf("%f",&money);
    adiciona_conta(&continha,account_number,money);
    if (option == 2){
        int escolha;
        printf("Agora, qual operaçao deseja fazer? digite 1 para saque ou 0 para deposito\n");
        scanf("%d", &escolha);
        if (escolha ==1){
            printf("digite o valor a ser sacado\n");
            scanf("%f",&money);
            saca(&continha,money);
        };
        if (escolha == 0){
            printf("digite o valor a ser depositado\n");
            scanf("%f",&money);
            deposita(&continha,money);
        };
    };
    if(option ==0){
        extrato(&continha,account_number);
    };
    return 0;
}