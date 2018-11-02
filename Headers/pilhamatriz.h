#ifndef PILHAMATRIZ_H
#define PILHAMATRIZ_H

#include "matriz.h"

class PilhaMatriz{
public:
    Matriz *base, *topo;

    PilhaMatriz();

    void operator=(Matriz*);
    Matriz* multiplicar();
};

#endif // PILHAMATRIZ_H
