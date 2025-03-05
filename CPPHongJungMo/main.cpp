#include "Monster.h"

int main() {

	Monster mon1("Sanson", Position2D(0,0));

	cout << mon1 << endl;

	{// game loop
		//event
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}


	return 0;
}