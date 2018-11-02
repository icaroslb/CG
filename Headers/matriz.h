#ifndef MATRIZ_H
#define MATRIZ_H

#include "forma.h"
#include <cmath>

class Matriz{
public:
    double **val;
    Matriz *prox;

    Matriz();
    ~Matriz();

    void operator=(double**);
    void operator*(Vertice);
    void operator*(Objeto);
    void operator*(Matriz);
};

#endif // MATRIZ_H
