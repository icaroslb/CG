#ifndef FACE_H
#define FACE_H

#include "objeto.h"

class Face: public Objeto{
public:
    Face(Vertice, Vertice, Vertice);

    Vetor normalUni();
    bool intercessao(Vetor, Vertice, double);
};

#endif // FACE_H
