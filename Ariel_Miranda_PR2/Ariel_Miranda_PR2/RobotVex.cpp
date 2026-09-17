#include "RobotVex.h"
#include <iostream>

using namespace std;

void RobotVex::AgregarRueda(int num) {
	cout << "[+] Agregar Rueda" << endl;
}

void RobotVex::ActivarElevador(int motornum) {
    cout << "[+] Activar Elevador." << endl;
}

void RobotVex::ActivarAutonoma() {
    cout << "[+] Activar Autonoma." << endl;
}

bool RobotVex::Colision() {
    cout << "[+] Colision." << endl;
    return false;
}