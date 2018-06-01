/*Practica de Clase
Enumeracion 
2018-05-31 (YYYY-MM-DD)
K1051
Farias Andres Sebastian
142-155-4
*/

//inicio


	enum struct Dia {lunes, martes, miercoles, Jueves, viernes, sabado};
	enum struct Turno {maniana, tarde, noche};
	

int main (){
	
	
	
	
	
}



// Declaraciones

bool TengoQueCursar (Dia d, Turno t){
	return  d==Dia::lunes   and t==Turno::noche
		or
		d==Dia::Jueves  and t==Turno::noche;
			
	}
	
	