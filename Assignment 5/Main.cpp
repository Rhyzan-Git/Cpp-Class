// File: Main.cpp
// Name: Alex Williams
// Date: 10/18/2020
// Course: INFO.2680-061
// Desc: main function
// Usage: user inputs colors, shapes and dimensions and the program sorts and displays from smallest to largest

#include "Shape.h"
#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Shape *getShape(); //defines getShape function
Shape *shapeData[50]; //array of pointers
Shape *tempData;
int shapeCnt = -1; //Total number of shapes entered
int n = 0; //array size

int main() {

	//Loops getShape() until a nullptr is returned from the user inputing done
	cout << "Enter a list of shapes - 'done' to end." << endl;
	do {
		shapeData[n] = getShape();
		n++;
		++shapeCnt;
	} while (shapeData[n-1] != nullptr);

	n = 0; //resets array position
	
	//displays all input data
	cout << endl << "Displaying list of shapes entered." << endl;
	do {
		cout << shapeData[n]->toString() << endl;
		++n; //Makes while argument look at next data value for nullptr
	} while (shapeData[n] != nullptr); //stops when it hits a nullptr stored in shapeData

	//Sorts from smallest to largest
	for (int i = 0; i < shapeCnt; i++) {
		for (int j = 0; j < shapeCnt - 1; j++) {
			if (shapeData[j]->area() > shapeData[j + 1]->area()) {
				tempData = shapeData[j];
				shapeData[j] = shapeData[j + 1];
				shapeData[j + 1] = tempData;
			}
		}
	}

	n = 0; //resets array position

	cout << endl << "Displaying shapes from smallest to largest areas." << endl;
	do {
		cout << shapeData[n]->toString() << endl;
		++n; //Makes while argument look at next data value for nullptr
	} while (shapeData[n] != nullptr); //stops when it hits a nullptr stored in shapeData

	return 0;
};