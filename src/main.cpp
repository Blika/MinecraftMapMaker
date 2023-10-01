#include "map_maker.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main(){
	mapmaker::MapMaker mapmaker{};
	try{
		mapmaker.run();
	}catch(const std::exception& e){
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}