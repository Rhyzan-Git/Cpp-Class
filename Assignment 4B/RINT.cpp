// File: RINT.cpp
// Name: Alex Williams
// Date: 10/11/2020
// Course: INFO.2680-061
// Desc: class file for member functions
// Usage: holds all member functions for class file

#include "RINT.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::ostream;
using std::istream;

//default constructor
RINT::RINT() {
    resInt = 0;
};

//constructor
RINT::RINT(int i) {
    resInt = i;
};


//Addition operator to add two RINTs
RINT operator+(RINT& rInt1, RINT& rInt2) {
    RINT rInt;
    rInt.resInt = rInt1.resInt + rInt2.resInt;
    return rInt;
};

//Subtraction operator to subtract two RINTs
RINT operator-(RINT& rInt1, RINT& rInt2) {
    RINT rInt;
    rInt.resInt = rInt1.resInt - rInt2.resInt;
    return rInt;
};

//Addition operator to add an int into a RINT
RINT operator+(int i, RINT& rInt1) {
    RINT rInt;
    rInt.resInt = i + rInt1.resInt;
    return rInt;
};

//Subtraction operator to subtract an int from a RINT
RINT operator-(int i, RINT& rInt1) {
    RINT rInt;
    rInt.resInt = i - rInt1.resInt;
    return rInt;
};

//Addition operator to add an RINT into an int
RINT operator+(RINT& rInt1, int i) {
    RINT rInt;
    rInt.resInt = i + rInt1.resInt;
    return rInt;
};

//Subtraction operator to subtract an RINT from a int
RINT operator-(RINT& rInt1, int i) {
    RINT rInt;
    rInt.resInt = i - rInt1.resInt;
    return rInt;
};

//Conversion operator to multiply an RINT by +1
RINT operator+(RINT& rInt) {
    rInt.resInt = rInt.resInt * 1;
    return rInt;
};

//Conversion operator to multiply an RINT by -1
RINT operator-(RINT& rInt) {
    rInt.resInt = rInt.resInt * -1;
    return rInt;
};

//Output operator to return an RINT as an int
ostream& operator<<(ostream& output, const RINT& rInt) {
    output << rInt.resInt;
    return output;
};

//Input operator to input an RINT as an int
istream& operator>>(istream& input, RINT& rInt) {
        input >> rInt.resInt;
        return input;
};