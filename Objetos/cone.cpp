#include "../headers/cone.h"

Cone::Cone(Vertice *topo, Vertice *base, double raio){
    tamanho = 2;
    this->raio = raio;
    vert.push_back(topo);
    vert.push_back(base);
}

bool Cone::intercessao(Vetor raio, Vertice ori, double inter){
    Vetor altura = (*vert[1] - *vert[0]).unitario();
    double alfa, beta, gama, delta, theta, x1, x2;

    theta = pow(cos((raio.unitario())*(altura)), 2);

    alfa = pow(raio*altura, 2) + (raio*raio) * theta;
    beta = -2*(((raio * altura) * ((*vert[0]) * altura)) + (((*vert[0]) * raio) * theta));
    gama = pow(((*vert[0]) * altura), 2) + ((*vert[0]) * (*vert[0])) * theta;

    delta = pow(beta, 2) - 4*alfa*gama;

    if(delta >= 0.0){
        if(delta > 0.0){
            x1 = ((-beta)-sqrt(delta))/(2*alfa);
            x2 = ((-beta)+sqrt(delta))/(2*alfa);

            inter = (x1<x2)?x1:x2;
        }else{
            inter = (-beta)/(2*alfa);
        }
    }else{
        return false;
    }

    if((((ori+(raio*inter))-(*vert[0]-ori)).unitario() * altura) >= 0){
        return true;
    }else{
        return false;
    }
}
