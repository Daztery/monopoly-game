#include "Propiedad.h"


CPropiedad::CPropiedad() {}
CPropiedad::~CPropiedad() {}

CPropiedad::CPropiedad(string nombre, int precio) {
	this->nombre = nombre;
	this->precio = precio;
}

int CPropiedad::Getprecio() { return this->precio; }
string CPropiedad::GetNombre() { return this->nombre; }