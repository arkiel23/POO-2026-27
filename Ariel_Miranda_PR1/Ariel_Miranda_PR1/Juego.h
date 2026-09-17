#pragma once
#include <iostream>
class Juego
{
private:
	char nombre[30];
	char creador[30];
	int lanzamiento;
	char lenguaje[10];
	float precio;

public:
	Juego();
	
	void visualizarDatos();
	void modificarLanzamiento(int anyo);
	void hacerDescuento(float desc);
};

