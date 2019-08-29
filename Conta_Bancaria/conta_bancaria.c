//
// Created by vinicius on 22/08/19.
//

#include "conta_bancaria.h"
#include <stdio.h>

void cria_banco(bank_rules *regras, int *operacoes_possiveis) {
    int max_operacoes;
    printf("Quantas operaçoes possiveis esse banco tera?");
    scanf("%d", &max_operacoes);
    for (int i = 0; i < max_operacoes - 1; ++i) {
        printf("digite o codigo da operacao");
        scanf("%d", &operacoes_possiveis[i]);
    }
};

void adiciona_conta(bank_account *conta, int num_conta, float saldo) {
    conta->num_conta = num_conta;
    conta->saldo = saldo;

};

void deposita(bank_account *conta, float valor) {
    conta->saldo += valor;
};

void saca(bank_account *conta, float valor) {
    conta->saldo -= valor;
};

void extrato(bank_account *conta, int num_conta) {
    printf("O saldo da conta %d atualmente e %.2f", conta->num_conta, conta->saldo);
};