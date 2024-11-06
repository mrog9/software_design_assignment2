#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H

#include <string>

using namespace std;

class Attributes{

	virtual string getName() const=0;
	virtual string getSound() const=0;
	virtual string getFood() const=0;

};

#endif
