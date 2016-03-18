#pragma once
#include "obras.h"
#include <string>

using std::string;

class Escultura:public Obras{
	int peso;
	string material;
 public:
 	Escultura(string, string, string, int, string);
 	string toString()const;
};