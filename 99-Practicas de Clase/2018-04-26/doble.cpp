/* realizar el doble de un numero entereo*/

#include "stdafx.h"
#include <cassert>


int main()
{
	//prototipo
	int doble(int);

	// comprobacion

	assert(-24 == doble(-12));
	assert(0 == doble(0));
	assert(-24 == doble(12));
}


//Declaracion

int doble(int x) { return 2 * x; }


