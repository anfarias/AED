/*Practica de lo visto en la ultima clase 
2018-04-05 (YYYY-MM-DD)
K1051
Jose Maria Sola
142-155-4
*/

#include<iostream>

#pragma region Code_main

int main()
{
	#pragma region nombrado_variables
	//definicion de variables
	double a;
	double b;

	#pragma	endregion nombrado_variables	

	//ingreso de datos

	std::cout << "Por favor ingrese el Primer numero, \n";
	std::cin >> a;

	std::cout << "Por favor ingrese el segundo numero,\n";
	std::cin >> b;


	//muestra de resultado
	std::cout << "Su resultado es, "<< a + b;
	std::cout << "\n";


	//finalizacion y vuelta a inicio
	system("pause");
	main();
}

#pragma endregion




