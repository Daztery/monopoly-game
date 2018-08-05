#include "ArrJug.h"

ArrJug::ArrJug() {  }
ArrJug::~ArrJug() {}


void ArrJug::leerDatos() {
	ifstream of("Datos.txt");
	if (!of.is_open()) return;
	int f, pl;
	string n, pr, temp;
	while (getline(of, temp, ',')) {
	getline(of, n, ',');
	f = atoi(temp.c_str());
	pl = atoi(temp.c_str());
	getline(of, pr, ',');
//	arreglo.push_back(new CJugador(n, f, pl, pr));
	}
	of.close();
}
ofstream of("Datos.txt");
void ArrJug::registrar1(string n, int figura) {
	CJugador *o1;
	CJugador *o2;
	o1 = new CJugador(n, figura, 150000, 0); // El ultimo dato es id, si quieres sus propiedades usa o1->GetProp().at(i)
	o2 = new CJugador("Computadora", 2, 150000, 1);
	arreglo.push_back(o1);
	arreglo.push_back(o2);

	//guarda datos

	if (!of.is_open())return;
	for (int i = 0; i < arreglo.size(); i++) {
	of << "Nombre: "<<arreglo[i]->getNombre() <<", Dinero: "<< arreglo[i]->getPlata()<<", Propiedades: "<< arreglo[i]->getPropiedades()<<endl;

	}
	of.close();
}
void ArrJug::registrar2(string n, int figura, string m, int figura2) {
	CJugador *o1;
	CJugador *o2;
	o1 = new CJugador(n, figura, 150000, 0);
	o2 = new CJugador(m, figura2, 150000, 1);
	arreglo.push_back(o1);
	arreglo.push_back(o2);

	if (!of.is_open())return;
	for (int i = 0; i < arreglo.size(); i++) {
		of << "Nombre: " << arreglo[i]->getNombre() << ", Dinero: " << arreglo[i]->getPlata() << ", Propiedades: " << arreglo[i]->getPropiedades()<< endl;

	}
	of.close();
}
