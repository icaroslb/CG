#include "../Headers/matriz.h"

Matriz::Matriz(){
    val = new double*[4];
    for(int i = 0; i < 4; i++){
        val[i] = new double[4];
    }
}

Matriz::~Matriz(){
    for(int i = 0; i < 4; i++){
        delete val[i];
    }
    delete val;
}

void Matriz::operator=(double **novaMat){
    for(int i = 0; i < 4; i++){
        delete val[i];
    }
    delete val;

    val = novaMat;
}

void Matriz::operator*(Vertice vert){
    double *novVal = new double[4];

    for(int i = 0; i < 4; i++){
        novVal[i] = 0;
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            novVal[j] += val[j][i]*vert.val[i];
        }
    }

    vert = novVal;
}

void Matriz::operator*(Objeto obj){
    for(int i = 0; i < obj.tamanho; i++){
        (*this)*(*(obj.vert[i]));
    }
}

void Matriz::operator*(Matriz mat){
    double **novVal = new double*[4];

    for(int i = 0; i < 4; i++){
        novVal[i] = new double[4];
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            novVal[i][j] = 0;
        }
    }

    for(int w = 0; w < 4; w++){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                novVal[j][w] += val[j][i]*mat.val[i][j];
            }
        }
    }

    mat = novVal;
}
