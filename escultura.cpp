#include "obras.h"
#include "escultura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Escultura::Escultura(string nombre, string autor, string fecha, int peso, string material):Obras(nombre, autor, fecha),
	peso(peso), material(material){

}
string Escultura::toString()const{
	stringstream ss;
	ss << Obras::toString() << " Escultura: " << peso << ", "<< material;
	return ss.str();
}