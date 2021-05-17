// File: RINT.h
// Name: Alex Williams
// Date: 10/11/2020
// Course: INFO.2680-061
// Desc: header file for RINT class
// Usage: holds all call functions for RINT class

#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class RINT
{
public:

    RINT();         //default constructor
    RINT(int i);    //constructor

    friend RINT operator+(RINT& rInt1, RINT& rInt2);    //Addition operator to add two RINTs
    friend RINT operator-(RINT& rInt1, RINT& rInt2);    //Subtraction operator to subtract two RINTs
    friend RINT operator+(int i,RINT& rInt1);           //Addition operator to add an int into a RINT
    friend RINT operator-(int i, RINT& rInt1);          //Subtraction operator to subtract an int from a RINT
    friend RINT operator+(RINT& rInt1, int i);          //Addition operator to add an RINT into an int
    friend RINT operator-(RINT& rInt1, int i);          //Subtraction operator to subtract an RINT from a int
    friend RINT operator+(RINT& rInt);                  //Conversion operator to multiply an RINT by +1
    friend RINT operator-(RINT& rInt);                  //Conversion operator to multiply an RINT by -1
    friend ostream& operator<<(ostream& output, const RINT& rInt);    //Output operator to return an RINT as an int
    friend istream& operator>>(istream& input, RINT& rInt);           //Input operator to input an RINT as an int

private:

    int resInt;
};

