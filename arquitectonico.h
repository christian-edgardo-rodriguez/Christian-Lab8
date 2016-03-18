#pragma once
#include "obras.h"
#include <string>

using std::string;

class Arquitectonico:public Obras{
	string terreno;
 public:
 	Arquitectonico(string, string, string, string);
 	string toString()const;
};