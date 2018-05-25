/*Practica de lo visto en la ultima clase 
2018-05-24 (YYYY-MM-DD)
K1051
Farias Andres Sebastian
142-155-4
*/



// Calculador de potencia por recursividad


#include "stdafx.h"
#include <cassert>


int main()
{

	//prototipo
	int POT(int, unsigned);

	//pruebas logicas

	assert(         4 == POT(2,  2));
	assert(         1 == POT(1,  1));
	assert(        64 == POT(8,  2));
	assert(     46656 == POT(6,  6));
	assert(        27 == POT(3,  3));
	assert(        49 == POT(7,  2));
	assert(        81 == POT(9,  2));
	assert(1073741824 == POT(2, 30));


	
    return 0;
}

//Declaracion

/*
pot (2,3)=2.2.2
         =2.2^2
		 =2.POT(2,2)
		 =2.2.POT(2,1)
		 =2.2.2
*/

int POT(int b, unsigned e) {
	return
		e == 1 ? b :
		         b * POT(b, e - 1);

}
