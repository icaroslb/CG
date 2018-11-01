#ifndef CONE_H
#define CONE_H

#include "objeto.h"

class Cone: public Objeto{
public:
    double raio;

    Cone(Vertice *, Vertice *, double);
    bool intercessao(Vetor, Vertice, double);
};

#endif // CONE_H
