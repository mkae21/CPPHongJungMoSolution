#include <iostream>
#include "MyConstants.h"

using namespace std;

extern void doSomething();

int main() {
	
	cout <<"In Main.cpp" << constants::pi << &constants::pi << endl;
	doSomething();

	return 0;
}