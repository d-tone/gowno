/*
 * Vector.h
 *
 *  Created on: 07-04-2016
 *      Author: sucik
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <istream>
#include <iostream>

class Vector {
public:
	float x;
	float y;

	Vector();
	virtual ~Vector();

//	Vector& operator >> (std::istream& stream) {
//		stream >> x;
//		stream >> y;
//		return *this;
//	}

};

std::ostream& operator << (std::ostream& stream, const Vector& vector);


#endif /* VECTOR_H_ */
