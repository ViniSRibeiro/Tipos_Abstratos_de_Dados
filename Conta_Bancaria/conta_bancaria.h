//
// Created by vinicius on 22/08/19.
//

#include <bits/types/FILE.h>

#ifndef MONITORIA1_CONTA_BANCARIA_H
#define MONITORIA1_CONTA_BANCARIA_H

#endif //MONITORIA1_CONTA_BANCARIA_H

typedef struct {
    int operacoes_possiveis[20];
}bank_rules;

typedef  struct {
    int num_conta;
    float saldo;

}bank_account;

void cria_banco (bank_rules *regras, int *operacoes_possiveis);
void adiciona_conta(bank_account *conta,int num_conta, float saldo);
void deposita( bank_account *conta, float valor);
void saca(bank_account *conta, float valor);
void extrato( bank_account *conta, int num_conta);