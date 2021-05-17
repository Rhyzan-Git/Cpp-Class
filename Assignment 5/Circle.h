// File: Circle.h
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: bottom level shape class
// Usage: creates and circle based on input from getshape function

#include "Shape.h"
using std::string;

#pragma once
class Circle : public Shape
{
private:

	double radius;  //Private variable for radius for circle
	double pi = 3.14159265359;  //it's the value of pi, used for area calculation
	string shapeType;  //Private variable for type for shape

public:

	Circle(const string& c, double r);  //circle class constructor
	double area();  //calculates and returns area of the shape
	string toString();  //returns color, type, measurements and area 

};
