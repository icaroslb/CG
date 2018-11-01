//#include "mainwindow.h"
#include <QApplication>

#include <vector>


#include "headers/objeto.h"
#include "headers/esfera.h"
#include "headers/face.h"
#include "headers/cone.h"
#include "headers/matriz.h"
#include "headers/matrizrotacao.h"
#include "headers/matrizreflexao.h"
#include "headers/matrizcisalhamento.h"
#include "headers/matrizescala.h"
#include "headers/matriztranslacao.h"
#include "headers/vertice.h"
#include "headers/vetor.h"

int main(int argc, char *argv[])
{
    std::vector<Vertice> listaVert;
    std::vector<Objeto> listaObj;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
