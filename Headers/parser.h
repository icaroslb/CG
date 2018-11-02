#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include "objeto.h"

bool parser(const char * caminho, std::vector <objeto> &out_objects);

#endif // PARSER_H