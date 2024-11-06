#include "Attributes.h"
#include <string>

using namespace std;

class TigerAttributes : Attributes{

	string name;

	public:

		TigerAttributes(string nm):name(nm){};

		string getName() const override{

			return "Hi! My name is " + name + ".";

		}

		string getSound() const override{

			return "I roar and ";

		}

		string getFood() const override{

			return "I eat meat.\n";

		}

};
