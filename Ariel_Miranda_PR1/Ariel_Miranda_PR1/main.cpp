#include "Juego.h"

int main() {

	Juego j;

	j.visualizarDatos();

	j.hacerDescuento(25);
	j.modificarLanzamiento(1994);

	j.visualizarDatos();

	return 0;
}