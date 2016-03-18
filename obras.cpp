#include "obras.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Obras::Obras(string nombre, string autor, string fecha): nombre(nombre), autor(autor), fecha(fecha){

}
string toString()const{
	stringstream ss;
	ss << "Obra: "<<nombre<<", "<<autor<<", "<<fecha;
	return ss.str();
}
