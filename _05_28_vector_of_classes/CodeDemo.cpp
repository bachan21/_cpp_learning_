// Learning C++ 
// Exercise 03_05
// Using Several Source Files, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>
#include "cow.h"

int main(void){
	std::vector<cow> cattles;
	
	cattles.push_back(cow("Ben", 7, cow_purpose::dairy));
	cattles.push_back(cow("Betsy", 10, cow_purpose::pet));

	// Iterate through each vector element using its iterator object
	for (auto it = cattles.begin(); it != cattles.end(); it++) {
		std::cout << "Name of the cow : " << it->get_name() << std::endl;
		std::cout << "	Age 		-> " << it->get_age() << std::endl;
		std::cout << "	Purpose -> " << int(it->get_purpose()) << std::endl << std::endl;
	}
    
	return (0);
}
