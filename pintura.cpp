#include "obras.h"
#include "pintura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Pintura::Pintura(string nombre, string autor, string fecha, string materialLienzo, string tecnica):Obras(nombre, autor, fecha),
	materialLienzo(materialLienzo), tecnica(tecnica){

}
string Pintura::toString()const{
	stringstream ss;
	ss << Obras::toString() << " Pintura: " << materialLienzo << ", "<< tecnica;
	return ss.str();
}