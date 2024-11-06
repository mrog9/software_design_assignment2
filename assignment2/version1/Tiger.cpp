#include "Animal.h"
#include "TigerAttributes.cpp"
#include <iostream>
#include <string>

using namespace std;

class Tiger:Animal{

	string name;

	public:

		static int tiger_cnt;
		
		Tiger(){
			
			tiger_cnt ++;
			name = "Tony";

		}

		Tiger(string nm){

			tiger_cnt++;
			name = nm;

		}

		friend ostream& operator<<(ostream& out, Tiger& tiger){

			TigerAttributes* attr = 
				new TigerAttributes(tiger.name);

			out << attr -> getName() << " ";
			out << attr -> getSound();
			out << attr -> getFood() << endl;

			return out;

		}

		Animal* cloneAnimal() const override{

			Tiger* clone_obj = new Tiger(name);

			return clone_obj;

		}

		static int getAnimalCount(){

			return tiger_cnt;	

		}

};

