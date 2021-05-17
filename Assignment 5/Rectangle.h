// File: Rectangle.h
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: bottom level shape class
// Usage: creates and rectangle based on input from getshape function

#include "Shape.h"
using std::string;

#pragma once
class Rectangle : public Shape
{
private:

	double length;  //Private variable for lenght for rectangle
	double width;  //Private variable for width for rectangle
	string shapeType;  //Private variable for type for shape

public:
	
	Rectangle(const string& c, double l, double w); //Rectangle class constructor
	double area(); //calculates and returns area of the shape
	string toString(); 	//returns color, type, measurements and area 

};
