// File: Circle.cpp
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: class file for member functions
// Usage: holds all member functions for class file

#include "Circle.h"
using std::cout;
using std::endl;
using std::to_string;

//calls constructor in Shape.h file using constructor initalizer syntax, includes color parameter
//does the rest of the construction in this class
Circle::Circle(const string& c, double r) : Shape(c) {
	radius = r;
	shapeType = "Circle";
	cout << " was assigned to a new " << shapeType;
	cout << " with a radius of " << radius << "." << endl;
};

//calculates and returns area of the shape
double Circle::area() {
	return (radius * radius) * pi;
};

//returns color, type, measurements and area 
string Circle::toString() { 
	return getColor() + ", " + shapeType + ", " + to_string(radius) + ", " + to_string(area());
};