#pragma once
#include <iostream>
using namespace std;

class RobotVex{
private:
	int ruedas;
	int motores;
	int piston;
	string nombre;
	int velocidad;

public:
	void AgregarRueda(int num);
	void ActivarElevador(int motornum);
	void ActivarAutonoma();
	bool Colision();

};

