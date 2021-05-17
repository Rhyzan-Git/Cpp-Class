// File: Square.h
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: bottom level shape class
// Usage: creates and sqaure based on input from getshape function

#include "Shape.h"
using std::string;

#pragma once
class Square : public Shape
{
private:

	double length;  //Private variable for length for square
	string shapeType;  //Private variable for type for shape

public:

	Square(const string& c, double l);  //square class constructor
	double area();  //calculates and returns area of the shape
	string toString(); //returns color, type, measurements and area 

};