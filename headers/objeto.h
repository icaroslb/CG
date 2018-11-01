#ifndef OBJETO_H
#define OBJETO_H

#include "vertice.h"
#include <cmath>
#include <vector>

class Objeto{
public:
    std::vector<Vertice*> vert;
    int tamanho;
    double corAmb[3], corDif[3], corEsp[3];
};

#endif // OBJETO_H
