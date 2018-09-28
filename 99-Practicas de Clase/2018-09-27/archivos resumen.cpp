//archivo de prueba

#include stack.h

int main (){
	stack s;
	
	void push(s,1);
	void push(s,5);
	void push(s,3);
	assert (3 == pop (s));
	assert (5 == pop (s));
	assert (1 == pop (s));
}



//archivo stack.h

#if


struct Stack{






};
void push (stack,int);
int pop (stack&);

#endif





// archivo stack.cpp


#include "stack.h"

int pop(stack & s) {
	--s.n;
	return s.a.at (s.n);
}


otra version

int pop(stack & s) {
	return s.a.at (--s.n);
}
