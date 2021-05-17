// File: Shape.cpp
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: class file for member functions
// Usage: holds all member functions for class file

#include "Shape.h"
using std::cout;
using std::endl;

//Shape(const string& color) - a constructor that sets
//the color instance value.
Shape::Shape(const string& color) {
	shapeColor = color;
	cout << "The color " << shapeColor;
};

//string getColor() - a const member function returning
//the object's color value.
string Shape::getColor() {
	return shapeColor;
};

//double area() - a const pure virtual member function
//that computes and returns the object's area. It must
//be overridden in each derived class.
double Shape::area() {
	cout << "This area function should not have been called..." << endl;
	return 0;
};

//string toString() - a const pure virtual member function
//that returns the shape's description (color, type,
//measurements, and area) as a std::string.It must be
//overridden in each derived class.See the example output
//below for the format.
string Shape::toString() {
	cout << "This string function should not have been called..." << endl;
	return "Uhhh";
};