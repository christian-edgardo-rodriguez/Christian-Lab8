#include "obras.h"
#include "arquitectonico.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Arquitectonico::Arquitectonico(string nombre, string autor, string fecha, string terreno):Obras(nombre, autor, fecha),
	terreno(terreno){

}
string Arquitectonico::toString()const{
	stringstream ss;
	ss << Obras::toString() << " Arquitectonico: " << terreno;
	return ss.str();
}