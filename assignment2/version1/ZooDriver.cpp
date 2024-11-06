#include <iostream>
#include "Tiger.cpp"

using namespace std;
	
int Tiger::tiger_cnt = 0;

int main(){

	Tiger* tiger = new Tiger();

	cout << *tiger;

}
