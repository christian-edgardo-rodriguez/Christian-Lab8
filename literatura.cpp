#include "obras.h"
#include "literatura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Literatura::Literatura(string nombre, string autor, string fecha, string genero, string epoca):Obras(nombre, autor, fecha),
	genero(genero), epoca(epoca){

}
string Literatura::toString()const{
	stringstream ss;
	ss << Obras::toString() << " Literatura: " << genero << ", "<< epoca;
	return ss.str();
}