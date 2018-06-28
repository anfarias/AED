//primer item

int Sumatoria (array<int, N>a){
	int s{0}; //s=0
	for (unsigned i {0}; i < N ; ++i)
	s=s+a.at.(i); /*la suma sin efecto de lado
                    si se quiere poner efecto de lado
					s+=a.at.(i);*/
	
	return s;
	
}

	

// pruebas

array <int, 3>a {1,2,3};
assert (6 == Sumatoria (a));
assert (6 == Sumatoria (1,2,3));



//segundo item


int SumaPositivo (array<int, N>a){
	int p{0}; //s=0
	
	for (unsigned i {0}; i < N ; ++i)
	
		if (a.at(i))>0

			p=p+a.at(i); /*la suma sin efecto de lado
                         si se quiere poner efecto de lado
					     p+=a.at.(i);*/
	
	return p;
	
}


//otra opcion de segundo item


int SumaPositivo (array<int, N>a){
	int p{0}; //s=0
	
	for (auto e : a)
	
		if (e>0)

			p=p+e; /*la suma sin efecto de lado
                   si se quiere poner efecto de lado
				   p+=e;*/
	
	return p;
	
}




// pruebas

array <int, 3> a {-1,2,3};
assert (5 == SumaPositivo (a));
assert (3 == SumaPositivo (-1,0,3));
