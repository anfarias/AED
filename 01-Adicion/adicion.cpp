/*Trabajo Practico #01
Suma de dos naturales
2018-04-13 (YYYY-MM-DD)
K1051
Farias Andres Sebastian
142-155-4
*/

#include<iostream>

#pragma region Code_main

int main()
{
	#pragma region nombrado_variables
	//definicion de variables
	int a;
	int b;

	#pragma	endregion nombrado_variables	

	//ingreso de datos

	std::cout << "Por favor ingrese el Primer numero, \n";
	std::cin >> a;

	std::cout << "Por favor ingrese el segundo numero,\n";
	std::cin >> b;


	//muestra de resultado
	std::cout << "Su resultado es, " << a + b << "\n";
	

	//finalizacion y vuelta a inicio
	system("pause");
	
}

#pragma endregion Code_main




