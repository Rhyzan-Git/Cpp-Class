// File: Square.cpp
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: class file for member functions
// Usage: holds all member functions for class file

#include "Square.h"
using std::cout;
using std::endl;
using std::to_string;

//calls constructor in Shape.h file using constructor initalizer syntax, includes color parameter
//does the rest of the construction in this class
Square::Square(const string& c, double l) : Shape(c) {
	length = l;
	shapeType = "Square";
	cout << " was assigned to a new " << shapeType;
	cout << " with a length of " << length;
	cout << " and width of " << length << "." << endl;

};

//calculates and returns area of the shape
double Square::area() {
	return length * length;
};

//returns color, type, measurements and area 
string Square::toString() {
	return getColor() + ", " + shapeType + ", " + to_string(length) + ", " + to_string(area());
};