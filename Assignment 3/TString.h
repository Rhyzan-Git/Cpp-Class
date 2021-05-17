// File: TString.h
// Name: Alex Williams
// Date: 10/2/2020
// Course: INFO.2680-061
// Desc: class file for basic string class
// Usage: declares all class functions

// -- TString.h header file --
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

#ifndef _TSTRING_H    // only include once in a compilation unit 
#define _TSTRING_H

class TString { // Prefix with 'T' for uniqueness
public:
	TString(const char *pText = 0); // default ctor
	// TODO: -- add remaining member function declarations here --
//	TString(const char* pText);
	~TString();
	TString(const TString& old_str); //copy const
	const int length() const;
	const bool equals(const char* str) const;
	const char* asChar() const;
	const int indexOf(char para) const;
	void assign(const TString str);
	void assign(const char* str);

private:
	int mLength;  // length of char data (not including null char)
	char* mpText; // pointer to dynamic char array in heap
};

#endif   // _TSTRING_H
