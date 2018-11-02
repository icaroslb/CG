#ifndef FORMA_H
#define FORMA_H

#include "vertice.h"
#include <cmath>
#include <vector>

class Forma{
public:
    std::vector<Vertice*> vert;
    int tamanho;
    double corAmb[3], corDif[3], corEsp[3];
};

#endif // FORMA_H
