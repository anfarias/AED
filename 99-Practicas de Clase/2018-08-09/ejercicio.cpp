/*leer puntos de color y mostrar los puntos que estan en el primer cuadrado y son rojos*/


/*
 * PyC^*-->IPO-->PyC^*
 *
 * PyC = {(p,c)/ p € Punto ^ c € Color}
 *
 * Punto = {(x,y) / x,y € R}
 *
 * Color = { (r,g,b) / r,g,b € N ^ r,g,b € [0,255]}
 *
 */
 
 /*
  * w € pyc
  *
  * leer w
  ________________________________
  EsRojo (w_c)
       ^
  EstaEnElPrimerCuadrante (w_p)
           \       /
            \     /
          V  \   /    F
	          \/
	---------------------------
	Mostrar W |         ////
	          |       ////
	          |     ////
--------------------------------------
*/

#include <iostream>

	struct Color {unsigned char r,g,b;};
	struct Punto {double x,y;};
	struct PyC {Punto p; Color c;};
	
	
	bool EsRojo (Color);
	bool EstaEnElPrimerCuadrante (Punto);

	int main() {
	
	using std::cin;
	using std::cout;
	
	
	PyC w;
	unsigned r,g,b;
	
	while (cin >>w.p.x >> w.p.y >>r>>g>>b){
		          w.c.r=r, w.c.g=g, w.c.b=b;
				  if (EsRojo(w.c) and EstaEnElPrimerCuadrante (w.p))
					  cout <<w.p.x << w.p.y << w.c.r <<r<<g<<b;
	}
}

	
	
	