#pragma once 
#include <string>

using std::string;

class Obras{
	string nombre, autor, fecha;
 public:
 	Obras(nombre, autor, fecha);
	virtual string toString()const;
};