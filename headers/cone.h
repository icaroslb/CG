#ifndef CONE_H
#define CONE_H

#include "forma.h"

class Cone: public Forma{
public:
    double raio;

    Cone(Vertice *, Vertice *, double);
    bool intercessao(Vetor, Vertice, double);
};

#endif // CONE_H
