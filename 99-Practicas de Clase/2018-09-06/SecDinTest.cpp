
#include "SecDin.h"
#include <cassert>

int main (){
	
	SecDin S {0}; //declaracion de array
	
	assert( 0 == longitud (S));//prueba de longitud
	
	Insertar ( S, 0, 7);//insertar valor en posicion 0, S es dato y resultado
	
	 assert ( 7 == Get (S, 0)); //prueba de la insercion
	 
	 Set ( S, 0, 42); // Cambiar valor de la posicion 0 
	 
	 assert ( 42 == Get (S, 0) // prueba del Set
	 
	 Remover ( S, 0); // Remover el valor de la posicion 0
	 
	 assert( 0 == longitud (S));//prueba de la eliminacion
	 

	 
}


