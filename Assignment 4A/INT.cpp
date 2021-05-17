#include "INT.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

INT::operator int() {
	return numb;
}

//Default constructor
INT::INT() {
	numb = 0;
};

//Constructor
INT::INT(int intIn) {
	numb = intIn;
};

//Prefix increment operator, returns original value and stores new value
int INT::operator++(int n) {
	n = numb;
	numb = numb + 1;
	return n;
};

//Prefix decrement operator, returns original value and stores new value
int INT::operator--(int n) {
	n = numb;
	numb = numb - 1;
	return n;
};

//Postfix incrememnt operator, returns new value
INT INT::operator++() {
	++numb;
	return numb;
};

//Postfix decrement, returns new value
INT INT::operator--() {
	--numb;
	return numb;
};

//Adds passed in integer from INT, returns new value 
INT INT::operator+=(int n) {
	numb = numb + n;
	return numb;
}

//Subtracts passed in integer from INT, returns new value
INT INT::operator-=(int n) {
	numb = numb - n;
	return numb;
}