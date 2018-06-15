struct punto {
	double x;
	double y;
};
punto p {1,2};

assert (p.x==1);
assert (p.y==2);




double DistOrig (punto);

Punto p{0,0};
assert (0==DistOrig (p));


------------------------------------------------------------------------------------------------------


struct Equipotitular{
		unsigned j1,
		unsigned j2, j3, j4,......, j11;
};

Equipotitular rusia {1,3,7,....,22};

assert ( 7 == rusia.j3);



array <unsigned,11> rusia {1,3,7,.......,22};

assert (7 == rusia.at(2)); //se pone 2 porque es la distancia al primero

-----

using EquipoTitular = array <unsigned,11>;
EquipoTitular rusia {1,3,7,......,22};



-----

#include <array>
#include <string>

struct Equipo {string nombre, confederacion;};
using Bolillero = array <Equipo,8>;
using Bolilleros = array <Bolillero,4>;
Bolilleros bolilleros {{{{}}}}; //completar y probar
assert ("AFC" == bolilleros.at (3).at(7).confederacion);
















