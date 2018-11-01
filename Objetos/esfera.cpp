#include "../headers/esfera.h"

Esfera::Esfera(Vertice centro, double raio){
    tamanho = 1;
    this->raio = raio;
    vert.push_back(&centro);
}

bool Esfera::intercessao(Vetor raio, Vertice ori, double inter){
    Vetor uniCentro = (*vert[0] - ori).unitario(), uniVet = raio.unitario();
    double alfa, beta, gama, delta, x1, x2;

        alfa = (uniVet * uniVet);
        beta = 2*(uniVet * uniCentro);
        gama = (uniCentro * uniCentro) - pow(this->raio, 2);
        delta = pow(beta, 2) - (4*alfa*gama);

        if(delta >= 0){
            if(delta > 0.0){
                x1 = ((-beta)-sqrt(delta))/(2*alfa);
                x2 = ((-beta)+sqrt(delta))/(2*alfa);

                inter = (x1<x2)?x1:x2;
            }else{
                inter = (-beta)/(2*alfa);
            }
            return true;
        }else{
            return false;
        }
}
