#include "BlockStream.h"
#include <cassert>
int main(){
	struct Color{unsigned char r,g,b;};
	
	auto filename{"color.bin"};
	
	std::ofstream out{filename, std::ios::binary};
	WriteBlock(out, Color{70,130,180});
	out.close();
	
	std::ifstream in{filename, std::ios::binary};
	Color steelBlue;
	ReadBlock(in, steelBlue);
	in.close();
	
	assert ( 70 == steelblue.r);
	assert (130 == steelblue.g);
	assert (180 == steelBlue.b);
	
//remove(filename); //c++17 //std::filesystem::remove
}
