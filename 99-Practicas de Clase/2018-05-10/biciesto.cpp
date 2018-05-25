/*Practica de Clase
Calculadora de Potencia por Recursividad
2018-05-10 (YYYY-MM-DD)
K1051
Farias Andres Sebastian
142-155-4
*/



#include <cassert>


int main () {

	//Prototipo

	bool bici(int);

	//Puebas Logicas

	assert (bici (2000));
	assert (bici (2204));
	assert (bici (2400));
	assert (bici (2016));
	assert (bici (2032));
	assert (bici (2064));
	assert (not bici(2001));
	assert (not bici(2011));
	assert (not bici(2017));
	assert (not bici(2053));
	assert (not bici(2133));
	
	}



//Declaraciones

bool bici (int year){
	return
		year%4==0 and (year%100!=0 or year%400==0);
}