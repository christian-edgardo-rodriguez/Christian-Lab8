#include "obras.h"
#include "literatura.h"
#include "escultura.h"
#include "pintura.h"
#include "arquitectonico.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int menu();
int menuObras();

int main(int argc, char const *argv[]){
	int opcion=menu();
	vector<Obras> obrasMuseo;
	vector<Obras> obrasTransferidas;
	do{
		if (opcion==1){
			cout<<endl;
			int opcionObra=menuObras();
			if (opcionObra==1){
				string nombre, autor, fecha, genero, epoca;
				cin.ignore();
				cout<<"Ingrese el nombre de la literatura: ";
				getline(cin, nombre);
				cout<<"Ingrese el autor de la literatura: ";
				getline(cin, autor);
				cout<<"Ingrese la fecha de la literatura: ";
				getline(cin, fecha);
				cout<<"Ingrese el genero de la literatura: ";
				getline(cin, genero);
				cout<<"Ingrese la epoca de la literatura: ";
				getline(cin, epoca);
				Literatura libro(nombre, autor, fecha, genero, epoca);
				obrasMuseo.push_back(libro);
				cout<<"La literatura ha sido creada."<<endl;
				cout<<endl;
				opcion=menu();
			}else if (opcionObra==2){
				string nombre, autor, fecha, material;
				int peso;
				cin.ignore();
				cout<<"Ingrese el nombre de la escultura: ";
				getline(cin, nombre);
				cout<<"Ingrese el autor de la escultura: ";
				getline(cin, autor);
				cout<<"Ingrese la fecha de la escultura: ";
				getline(cin, fecha);
				cout<<"Ingrese el peso de la escultura: ";
				cin>>peso;
				cin.ignore();
				cout<<"Ingrese la material de la escultura: ";
				getline(cin, material);
				Escultura escultura(nombre, autor, fecha, peso, material);
				obrasMuseo.push_back(escultura);
				cout<<"La escultura ha sido creada."<<endl;
				cout<<endl;
				opcion=menu();
			}else if (opcionObra==3){
				string nombre, autor, fecha, materialLienzo, tecnica;
				cin.ignore();
				cout<<"Ingrese el nombre de la pintura: ";
				getline(cin, nombre);
				cout<<"Ingrese el autor de la pintura: ";
				getline(cin, autor);
				cout<<"Ingrese la fecha de la pintura: ";
				getline(cin, fecha);
				cout<<"Ingrese el material del lienzo de la pintura: ";
				getline(cin, materialLienzo);
				cout<<"Ingrese la tecnica de la pintura: ";
				getline(cin, tecnica);
				Pintura pintura(nombre, autor, fecha, materialLienzo, tecnica);
				obrasMuseo.push_back(pintura);
				cout<<"La pintura ha sido creada."<<endl;
				cout<<endl;
				opcion=menu();
			}else if (opcionObra==4){
				string nombre, autor, fecha, terreno;
				cin.ignore();
				cout<<"Ingrese el nombre del design arquitectonico: ";
				getline(cin, nombre);
				cout<<"Ingrese el autor del design arquitectonico: ";
				getline(cin, autor);
				cout<<"Ingrese la fecha del design arquitectonico: ";
				getline(cin, fecha);
				cout<<"Ingrese el terreno del design arquitectonico: ";
				getline(cin, terreno);
				Arquitectonico design(nombre, autor, fecha, terreno);
				obrasMuseo.push_back(design);
				cout<<"El design arquitectonico ha sido creado."<<endl;
				cout<<endl;
				opcion=menu();
			}else{
				cout<<"Opcion Invalida."<<endl;
				opcion=menu();
			}
		}else if (opcion==2){
			int posicion;
			if (obrasMuseo.size()>0){
				for (int i = 0; i < obrasMuseo.size(); ++i){
					cout<<i+1<<") "<<obrasMuseo[i].toString()<<endl;
				}
				cout<<endl;
				cout<<"Ingrese la posicion de la obra que se tranferira: ";
				cin>>posicion;
				obrasTransferidas.push_back(obrasMuseo.at(posicion-1));
				obrasMuseo.erase(obrasMuseo.begin()+posicion-1);
				cout<<"La obra se ha transferido."<<endl;
				cout<<endl;
				opcion=menu();
			}else{
				cout<<"El museo no tiene obras."<<endl;
				cout<<endl;
				opcion=menu();
			}
		}else if (opcion==3){
			if (obrasMuseo.size()>0){
				for (int i = 0; i < obrasMuseo.size(); ++i){
					cout<<i+1<<") "<<obrasMuseo[i].toString()<<endl;
				}
				cout<<endl;
				opcion=menu();
			}else{
				cout<<"El museo no tiene obras."<<endl;
				cout<<endl;
				opcion=menu();
			}	
		}else if (opcion==4){
			if (obrasTransferidas.size()>0){
				for (int i = 0; i < obrasTransferidas.size(); ++i){
					cout<<i+1<<") "<<obrasTransferidas[i].toString()<<endl;
				}
				cout<<endl;
				opcion=menu();
			}else{
				cout<<"No se han transferido obras."<<endl;
				cout<<endl;
				opcion=menu();
			}
		}
	}while(opcion!=5);
	return 0;
}
int menu(){
	int opc;
	cout<<"1. Agregar Obra"<<endl;
	cout<<"2. Transferir Obra"<<endl;
	cout<<"3. Listar Obras en el Museo"<<endl;
	cout<<"4. Listar Obras Transferidas"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Escoja su opcion: ";
	cin>>opc;
	if (opc<1&&opc>5){
		return 0;
	}else{
		return opc;
	}
}
int menuObras(){
	int opc;
	cout<<"1. Agregar Literatura"<<endl;
	cout<<"2. Agregar Escultura"<<endl;
	cout<<"3. Agregar Pintura"<<endl;
	cout<<"4. Agregar Diseño Arquitectonico"<<endl;
	cout<<"Escoja su opcion: ";
	cin>>opc;
	if (opc<1&&opc>4){
		return 0;
	}else{
		return opc;
	}
}