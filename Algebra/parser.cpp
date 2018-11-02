#include "../headers/parser.h"

bool ObjParser (const char * path, std::vector < ObjectModel> &out_objects){

	int size = out_objects.size();

	FILE * file = fopen(path, "r");
	if( file == NULL ){
    	printf("Impossible to open the file !\n");
    	return false;
	}
	while(true){
		char lineHeader[128], nameObject[30];
		int res = fscanf(file, "%s", lineHeader); 
		if(res == EOF)
			break; 
		if(strcmp(lineHeader, "o") == 0){
			fscanf(file, "%s", nameObject);
			ObjectModel obj(nameObject);
			size ++;
			out_objects.push_back(obj);
		}else if(strcmp(lineHeader, "v") == 0){
			float x, y, z;
			fscanf(file, "%f %f %f\n", &x, &y, &z );
			Vertex v(x,y,z);
			out_objects[size-1].addVertex(v);
		}else if(strcmp(lineHeader, "f") == 0){
			int v1, v2, v3, aux;
			int matches = fscanf(file, "%d//%d %d//%d %d//%d\n", &v1, &aux, &v2, &aux, &v3, &aux);
			Vertex v1 = out_objects[size-1].getVertices()[v1 - 1];
			Vertex v2 = out_objects[size-1].getVertices()[v2 - 1];
			Vertex v3 = out_objects[size-1].getVertices()[v3 - 1];
			Edge e1(v1, v2);
			Edge e2(v2, v3);
			Edge e3(v3, v1);
			Face f(e1, e2, e3);
			out_objects[size-1].addFaces(f);
			if(matches != 6){
				return false
			}
		}
	}
	return true;
}
