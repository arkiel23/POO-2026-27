#pragma once
#include <iostream>
using namespace std;

class Coche {
private:
	string marca;
	string modelo;
	int anioMatricula;
	int potencia;
public:
	void Acelerar();
	void Frenar();
	void Girar();
};



