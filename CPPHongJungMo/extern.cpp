#include <iostream>
#include "MyConstants.h"

using namespace std;


void doSomething() {

	cout << "In extern.cpp" << constants::pi << &constants::pi <<endl;

}