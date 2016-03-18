#pragma once
#include "obras.h"
#include <string>

using std::string;

class Pintura:public Obras{
	string materialLienzo, tecnica;
 public:
 	Pintura(string, string, string, string, string);
 	string toString()const;
}