// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <cassert>


int main()
{
	//prototipo
	double promedio(int, int);

	// comprobacion

	assert(9 == promedio(-12, 30));

}

// declaracion de funcion

double promedio(int x, int y) { return (x + y) / 2; }