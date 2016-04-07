//============================================================================
// Name        : Operatory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Vector.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Vector vect;

//	cin >> vect;
	vect.x = 2.0f;
	vect.y = 3.0f;

	cout << vect;
	return 0;
}


std::ostream& operator << (std::ostream& stream, const Vector& vector) {
	stream << "[ "<<vector.x << ", "<<vector.y<<"] ";
	return stream;
}
