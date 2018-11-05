#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include "objeto.h"
#include "vertice.h"
#include "face.h"
#include "forma.h"
#include <string.h>

bool parser(const char * caminho, std::vector <Objeto> &out_objects);

#endif // PARSER_H