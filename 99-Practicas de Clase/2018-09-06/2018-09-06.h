V1

int main (){
	
	MatrizCuadradaDe4 m;
	m= LeerMatriz();
	cout<<SumarDiagonal(m);
	
}

V1'
int main (){
	
	MatrizCuadradaDe4 m= LeerMatriz();
	cout<<SumarDiagonal(m);
	
}


V1''
int main (){
	
	cout<<SumarDiagonal(LeerMatriz());
	
}


V2

int main (){
	
	MatrizCuadradaDe4 m;
	LeerMatriz(m);
	cout <<SumarDiagonal (m);
}



//FUNCIONES

V2

void LeerMatriz (MatrizCuadradaDe4 & m) {
	for(int i=0; i<4 ; ++i)
		for(int j=0; j<4; ++j)
			cin>>m.at(i).at(j);
}


V2'

void LeerMatriz (MatrizCuadradaDe4 & m) {
	for(auto &a : m)
		for (auto &i : a)
			cin>>i;
}


int SumarDiagonal (const MatrizCuadradaDe4 & m){
	
	int s=0;
	
	for (int i=0; i<4;++i)
		
	s+= m.at(i).at(i);
	
	return s;
}



LLEVARLO A PRACTICAS

//FIN DE EJERCICIO
////////////////////////////////////////////////////////////////////////////////////

