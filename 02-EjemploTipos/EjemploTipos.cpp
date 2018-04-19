/*Trabajo Practico #02
Ejemplos de tipos de datos
2018-04-19 (YYYY-MM-DD)
K1051
Farias Andres Sebastian
142-155-4
*/


#include <iostream>
#include <assert.h>
#include <string.h>
#include <string>

#pragma region main
int main()
{
#pragma region numeros

	int a = 10, b = 15;

	bool compara = a == b;

	assert(compara == 0);

	unsigned c = 2;
	double d = 3.14159265358979323846;

	long e = a / c;

	assert(e > 0);

	double f = b*c*d;
	

#pragma endregion numeros

#pragma region letras
	char letra = 'e';
	char signo = '!';
	std::string frase("Ready Player On");

	std::string modi = frase.append(1, letra).append(3, signo);
	
	long cantidad = modi.length();

	assert(cantidad <= 20);

	#pragma endregion letras


#pragma endregion main

	system("pause");
















}