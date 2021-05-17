// File: Rectangle.cpp
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: class file for member functions
// Usage: holds all member functions for class file

#include "Rectangle.h"
using std::cout;
using std::endl;
using std::to_string;

//calls constructor in Shape.h file using constructor initalizer syntax, includes color parameter
//does the rest of the construction in this class
Rectangle::Rectangle(const string& c, double l, double w) : Shape(c){
	length = l;
	width = w;
	shapeType = "Rectangle";
	cout << " was assigned to a new " << shapeType;
	cout << " with a length of " << length;
	cout << " and width of " << width << "." << endl;
};

//calculates and returns area of the shape
double Rectangle::area() {
	return length * width;
};

//returns color, type, measurements and area 
string Rectangle::toString() {
return getColor() + ", " + shapeType + ", " + to_string(length) + ", " + to_string(width) + ", " + to_string(area());

};
