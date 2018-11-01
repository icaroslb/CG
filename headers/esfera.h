#ifndef ESFERA_H
#define ESFERA_H

#include "objeto.h"

class Esfera: public Objeto{
    double raio;
    Esfera(Vertice, double);

    bool intercessao(Vetor, Vertice, double);
};

#endif // ESFERA_H
