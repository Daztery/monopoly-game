#include "Mapa.h"



Mapa::Mapa()
{
}


Mapa::~Mapa()
{
}


Mapa::Mapa(int x, int y){
	this->x = x;
	this->y = y;
}
void Mapa::dibujar(BufferedGraphics ^buffer, Bitmap ^bmp){
	Rectangle porcionaUsar = Rectangle(0,0, 2800,1500);
	Rectangle aumento = Rectangle(0, 0, 1100, 650);
	buffer->Graphics->DrawImage(bmp, aumento, porcionaUsar, GraphicsUnit::Pixel);
}

void Mapa::dibujar2(BufferedGraphics ^buffer, Bitmap ^bmp) {
	Rectangle porcionaUsar = Rectangle(0, 0, 750, 550);
	Rectangle aumento = Rectangle(0, 0, 1100, 650);
	buffer->Graphics->DrawImage(bmp, aumento, porcionaUsar, GraphicsUnit::Pixel);
}
void Mapa::dibujar3(BufferedGraphics ^buffer, Bitmap ^bmp) {
	Rectangle porcionaUsar = Rectangle(0, 0, 406, 401);
	Rectangle aumento = Rectangle(0, 0, 1100, 650);
	buffer->Graphics->DrawImage(bmp, aumento, porcionaUsar, GraphicsUnit::Pixel);
}
int Mapa::getX() { return this->x; }
int Mapa::getY() { return this->y; }

void Mapa::dibujarDado(BufferedGraphics ^buffer, Bitmap ^bmp) {
	Rectangle porcionaUsar = Rectangle(0, 0, 118, 120);
	this->posicion = Rectangle(x, y, 118, 120);
	buffer->Graphics->DrawImage(bmp, posicion, porcionaUsar, GraphicsUnit::Pixel);
}

void Mapa::dibujarCasitas(BufferedGraphics ^buffer, Bitmap ^bmp) {
	Rectangle porcionaUsar = Rectangle(0, 0, 118, 120);
	this->posicion = Rectangle(x, y, 118, 120);
	buffer->Graphics->DrawImage(bmp, posicion, porcionaUsar, GraphicsUnit::Pixel);
}
void Mapa::dibujarMatriz() {
	int matrizz[5][8] = { { 1,1,1,1,1,1,1,1 },
						  { 1,0,0,0,0,0,0,1 },
						  { 1,0,0,0,0,0,0,1 },
						  { 1,0,0,0,0,0,0,1 },
						  { 1,1,1,1,1,1,1,1 } };
}

