#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal{

	public: 

		virtual Animal* cloneAnimal() const = 0;

};


#endif
