#include <iostream>

#include "Coche.h"
#include "Perro.h"
#include "RobotVex.h"
#include "JugadorBaloncesto.h"

using namespace std;

int main() {

    Coche coche;
    Perro perro;
    RobotVex robot;
    JugadorBaloncesto jugador;

    cout << "Coche" << endl;
    coche.Acelerar();
    coche.Frenar();
    coche.Girar();

    cout << "\nPerro" << endl;
    perro.Correr();
    perro.Dormir();

    cout << "\nRobot VEX" << endl;
    robot.AgregarRueda(1);
    robot.ActivarElevador(1);
    robot.ActivarAutonoma();
    robot.Colision();

    cout << "\nJugador de baloncesto" << endl;
    jugador.Lanzar();
    jugador.Saltar();

    return 0;
}