/*Practica de Clase
Calculadora de Potencia por Recursividad
2018-05-24 (YYYY-MM-DD)
K1051
Farias Andres Sebastian
142-155-4
*/


#include <cassert>

int main (){
	
	// Prototipo
	int POT (int, unsigned);
	
	// pruebas logicas
	assert( 1 == POT(1,1));
	assert( 2 == POT(2,1));
	assert( 4 == POT(2,2));
	assert( 8 == POT(2,3));
	assert( 27 == POT(3,3));
	assert( 64 == POT(4,3));
	assert( 256 == POT(4,4));
	assert( 625 == POT(5,4));
	assert( 1024 == POT(4,5));
	assert( 1024 == POT(2,10));
	
}

//Declaraciones


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
	