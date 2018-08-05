#pragma once
#include <string>

using namespace std;
class CPropiedad
{
private:
	string nombre;
	int precio;

public:
	CPropiedad();
	CPropiedad(string nombre, int precio);
	~CPropiedad();

	int Getprecio();
	string GetNombre();
};