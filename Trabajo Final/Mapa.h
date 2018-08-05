#pragma once
using namespace System::Drawing;
class Mapa
{
	int x;
	int y;
	System::Drawing::Rectangle posicion;
public:
	Mapa();
	~Mapa();
	Mapa(int x, int y);
	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	void dibujar2(BufferedGraphics ^buffer, Bitmap ^bmp);
	void dibujar3(BufferedGraphics ^buffer, Bitmap ^bmp);
	void dibujarDado(BufferedGraphics ^buffer, Bitmap ^bmp);
	void dibujarCasitas(BufferedGraphics ^buffer, Bitmap ^bmp);
	int getX();
	int getY();
	void dibujarMatriz();
	void imprimirMatriz(int matriz[5][8], BufferedGraphics ^buffer, Bitmap^ bmp, Bitmap^ bmp2);
};

