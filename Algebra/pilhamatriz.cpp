#include "../Headers/pilhamatriz.h"
#include <cstdlib>

PilhaMatriz::PilhaMatriz(){
    base = NULL;
    topo = NULL;
}

void PilhaMatriz::operator=(Matriz *novaMat){
    novaMat->prox = topo;
    if(base == NULL) base = novaMat;
    topo = novaMat;
}

Matriz* PilhaMatriz::multiplicar(){
    Matriz *resul = topo;
    while(topo->prox != NULL){
        (*topo) * (*topo->prox);
        topo = topo->prox;
        delete resul;
        resul = topo;
    }
    topo = NULL;
    base = NULL;

    return resul;
}
