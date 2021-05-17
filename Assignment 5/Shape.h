// File: Shape.h
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: top level shape class
// Usage: creates a shape class based on supporting shape classes

#include <string>
#include <iostream>
using std::string;

#pragma once

class Shape
{
private:

	string shapeColor; //Private variable for color for shape

public:

	Shape(const string& color); //constructor for shape class
	string getColor(); //returns color of the shape
	virtual double area(); //does nothing, points towards sqr, rect, and circ classes
	virtual string toString(); //does nothing, points towards sqr, rect, and circ classes

};



