#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "Propiedad.h"
using namespace System::Drawing;
using namespace std;

enum Direcciones { Ninguna, Arriba, Abajo, Izquierda, Derecha };

class CJugador
{
private:
	string nombre;
	int figura;
	int plata;
	int id;

	string propiedades;
	vector<CPropiedad*> arregloProp;

	int x;
	int y;
	int xM;
	int yM;
	int dx;
	int dy;
	int altoP;
	int anchoP;
	int indiceX;
	int indiceY;
	bool carcel;


	//Direcciones ultima;
	System::Drawing::Rectangle posicion;

public:
	//Direcciones direccion;
	CJugador(int x,int y, int xM, int yM);
	CJugador(string nombre, int figura, int plata, int id);
	~CJugador();

	string getNombre();
	int getX();
	int getY();
	int getXM();
	int getYM();
	int getID();
	void setX(int x);
	void setY(int y);
	void setXM(int xM);
	void setYM(int yM);
	void setPlata( int plata);
	void setCarcel(bool n);
	int getPlata();
	bool getCarcel();
	string getPropiedades();
	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	System::Drawing::Rectangle getPosicion();
	vector<CPropiedad*> getArregloProp();
	void agregarPropiedad(CPropiedad* nuevo);
	void eliminarPropiedad(string prop);
};

