#include <stdio.h>
#include <iostream>
#include "headers/objeto.h"
#include "headers/forma.h"
#include "headers/vertice.h"
#include "headers/face.h"
#include "headers/parser.h"
#include "headers/objeto.h"
int main(int argc, char const *argv[])
{
	//Vertice v1(1,1,1);
	//Forma *f = new Face(v1,v1,v1);
	//Objeto obj("meu objetinho");
	//std ::cout << obj.getNome();
	//obj.addForma(f);
	std::vector<Objeto> objetos;
	parser("plano.obj", objetos);
	return 0;
}

//g++ main_teste.cpp headers/objeto.h headers/forma.h headers/vertice.h Objetos/face.cpp headers/face.h Algebra/vertice.cpp Algebra/objeto.cpp headers/vetor.h Algebra/vetor.cpp Algebra/parser.cpp headers/parser.h 
