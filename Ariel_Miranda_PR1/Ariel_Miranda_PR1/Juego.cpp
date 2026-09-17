#include "juego.h"
using namespace std;

Juego::Juego() {
	strcpy_s(nombre, "Doom");
	strcpy_s(creador, "id Software");
	lanzamiento = 1993;
	strcpy_s(lenguaje, "C");
	precio = 20.0f;
}

void Juego::visualizarDatos() {
	cout << "[+] Nombre		:" << nombre << endl;
	cout << "[+] Creador	:" << creador << endl;
	cout << "[+] Lanzamiento	:" << lanzamiento << endl;
	cout << "[+] Lenguaje	:" << lenguaje << endl;
	cout << "[+] Precio		:" << precio << " EUR" << endl;
} 

void Juego::modificarLanzamiento(int anyo) {
	lanzamiento = anyo;
}

void Juego::hacerDescuento(float desc) {
	precio = precio - (precio * desc / 100);
}