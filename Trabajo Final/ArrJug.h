#pragma once
#include "Jugador.h"
#include <stdlib.h>
class ArrJug
{
private:
	vector<CJugador*> arreglo;
public:
	ArrJug();
	~ArrJug();
	void leerDatos();
	void registrar1(string n, int figura);
	void registrar2(string n, int figura, string m, int figura2);

};
