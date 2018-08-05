#include "Jugador.h"
CJugador::CJugador(int x, int y,int xM,int yM)
{
	this->x = x;
	this->y = y;
	this->xM = xM;
	this->yM = yM;
	dx = 0;	//se inicializa siempre
	dy = 0;	//se inicializa siempre
	anchoP = 172;
	altoP = 177;
	indiceX = indiceY = 0;
	this->plata = 150000;
	this->carcel = false;
}
CJugador::CJugador(string nombre, int figura, int plata, int id)
{
	this->nombre = nombre;
	this->figura = figura;
	this->plata = plata;
	this->id = id;
	this->carcel = false;
	
}



CJugador::~CJugador()
{
}
Rectangle  CJugador::getPosicion()
{
	return this->posicion;
}

void CJugador::dibujar(BufferedGraphics ^buffer, Bitmap ^bmp) {

	bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(0, 0, anchoP, altoP);
	this->posicion = Rectangle(x, y, anchoP / 2, altoP / 2);
	buffer->Graphics->DrawImage(bmp, posicion, porcionaUsar, GraphicsUnit::Pixel);
}
int  CJugador::getX() { return this->x; }
int  CJugador::getY() { return this->y; }
int  CJugador::getXM() { return this->xM; }
int  CJugador::getYM() { return this->yM; }
int  CJugador::getID() { return this->id; }
bool CJugador::getCarcel() { return this->carcel; }

void CJugador::setX(int x) { this->x = x; }
void CJugador::setY(int y) { this->y = y; }
void CJugador::setXM(int xM) { this->xM = xM; }
void CJugador::setYM(int yM) { this->yM = yM; }
void CJugador::setPlata(int plata) {
		this->plata = this->plata + plata;
	
}
void CJugador::setCarcel(bool n) { this->carcel = n; }

string CJugador::getNombre() { return this->nombre; }

int CJugador::getPlata() { return this->plata; }

string CJugador::getPropiedades() { return this->propiedades; }

vector<CPropiedad*> CJugador::getArregloProp() {
	return arregloProp;
}
void CJugador::agregarPropiedad(CPropiedad* nuevo){
	arregloProp.push_back(nuevo);
}

void CJugador::eliminarPropiedad(string prop)
{
	for (int i = 0; i < arregloProp.size(); i++)
	{
		if (arregloProp.at(i)->GetNombre() == prop)
		{
			arregloProp.erase(arregloProp.begin() + i);
			return;
		};
	}
}
