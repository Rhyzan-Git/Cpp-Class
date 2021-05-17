// File: getShape.cpp
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: gets data from user and creates shapes
// Usage: gets data from user and feeds shape classes with data

#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
using std::cout;
using std::cin;
using std::endl;

Shape* getShape() {

	//Data to be collected from user
	string color;
	string shape;
	double length;
	double width;
	double radius;

		//Starting statement, checks for 'done' input to stop calling the getShape function
		cout << "Enter the shape's color (or 'done')" << endl;
		cin >> color;

		if (color == "done") // returns null pointer when user is done inputing shapes
			return nullptr;
		
	getShapeFromUser: //goto point if incorrect shape is input

		//Gets shape from user, checks for invalid response
		cout << "Enter shape type." << endl;
		cin >> shape;

		if (shape == "circle" || shape == "Circle") {
			//Prompts user for size and records input
			cout << "Enter the radius." << endl;
			cin >> radius;
			//Creates new circle with shape type
			Shape *newShape = new Circle(color, radius);
			return newShape;
		}

		if (shape == "rectangle" || shape == "Rectangle") {
			//Prompts user for size and records input
			cout << "Enter the length." << endl;
			cin >> length;
			cout << "Enter the width" << endl;
			cin >> width;
			//Creates new rectangle with shape type
			Shape* newShape = new Rectangle(color, length, width);
			return newShape;
		}

		if (shape == "square" || shape == "Square") {
			//Prompts user for size and records input
			cout << "Enter the length." << endl;
			cin >> length;
			//Creates new square with shape type
			Square *newShape = new Square(color, length);
			return newShape;
		}

		else {
			//Prevents bad data from entering into program, code should re-check 'if' statements for correct shape or come back here
			cout << "Unvalid shape. Note, the options are circle, square or rectangle." << endl;
			goto getShapeFromUser;
		};

	return nullptr;

};