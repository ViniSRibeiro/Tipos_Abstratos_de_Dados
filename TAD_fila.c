//
// Created by vinir on 29/10/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_fila.h"

void FFVazia(Tipo_fila* fila){
    fila->iFrente = 0;
    fila->iTras = fila->iFrente;
};