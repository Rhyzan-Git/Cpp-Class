// File: TString.cpp
// Name: Alex Williams
// Date: 10/2/2020
// Course: INFO.2680-061
// Desc: class file for member functions
// Usage: holds all member functions for class file

// -- TString.cpp source file --

#include "TString.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

#include <cstring>
#define strcpy_s(a, b)

//A constructor accepting a const char pointer to an array of 
//characters, with a default argument value of 0 (null pointer).
//If a null pointer or empty string(char array of length 1 containing 
//a '\0' null char) is passed, it initializes this String object 
//to point at a dynamically allocated character array of length 1  
//(containing the null char value '\0') in the heap.Otherwise, it 
//dynamically allocates a char array of the same size as the parameter 
//char array, and copies the parameter char data into it.Note that 
//this is a deep copy(ie.copying all the char data) so that this 
//object has it's own copy of the char data, vs. a shallow copy 
//(just copying the pointer value to the parameter's char data).

TString::TString(const char* pText) {  //default ctr
	if (pText == NULL) {
		mLength = 0;
		mpText = new char[1];
		mpText[mLength] = '\0';           //null terminates the array
		//cout << "Default constructor called." << endl;
		//cout << mLength << " and " << mpText << endl;
	}
	else {
		mLength = strlen(pText);            //finds length of new char array
		mpText = new char[mLength + 1];     //allocates array size
		for (int i{ 0 }; i < mLength; ++i)  //deep copies the whole char array
			mpText[i] = pText[i];	       
		mpText[mLength] = '\0';           //null terminates the array
		//cout << "Constructor called, ";
		//cout << mpText << " has a length of " << mLength << endl;
	}
}

//A copy constructor accepting a String object(by const reference).
//It initializes this String from the parameter String object, making 
//a deep copy of the character data by dynamically allocating a char array 
//of the same size as the parameter String's, and copying the char data.

TString::TString(const TString& old_str) {
		//cout << "Copying " << old_str.mpText << " and " << old_str.mLength << endl;
		mLength = old_str.mLength;
		mpText = new char[mLength + 1];     //allocates array size
		for (int i{ 0 }; i < mLength; ++i)  //deep copies the whole char array
			mpText[i] = old_str.mpText[i];
		mpText[mLength] = '\0';           //null terminates the array
		//cout << "Copy made! New data is " << mpText << " and " << mLength << endl;

}

//A destructor that uses the C++ delete operator to free the dynamic 
//character array owned by this String, and then sets the mpText pointer 
//member to null.This prevents the dynamic char array from 
//becoming a memory leak.

TString::~TString() {
	delete[] mpText;
}

//A length member function returning the current size of the character 
//data(not including the final null character).

const int TString::length() const {
	return mLength;
}

//An asChar member function returning a const char pointer to this 
//String's encapsulated character data. It does not allocate new memory 
//for the char data to be returned.

const char* TString::asChar() const {
		return mpText;
}

//An assign member function accepting a String object parameter(by 
//const reference), and a return type of void.It first checks for 
//assignment to selfand returns if true.Otherwise, it uses delete to  
//release the current char array it points to, then dynamcally allocates
//a new char array of the same size as the parameter String's, and copies 
//the character data from the parameter String.

void TString::assign(const TString str){
	if (strcmp(mpText, str.mpText) == 0) {
		//cout << mpText << " is already stored as " << str.mpText << endl;
		return;
	}
	else {
//		//cout << mpText << " string has been changed to ";
		delete[] mpText;
		mLength = strlen(str.mpText);
		mpText = new char[mLength + 1];
		for (int i{ 0 }; i < mLength; ++i)  //deep copies the whole char array
			mpText[i] = str.mpText[i];
		mpText[mLength] = '\0';           //null terminates the array
		//cout << mpText << endl;
	}
}

//An assign member function accepting a const char pointer to an array 
//of characters, and a return type of void.It checks for assignment to 
//self, and returns if true.Otherwise, does the same as the other assign 
//member function.

void TString::assign(const char* str) {
	if (this->mpText == str) {
		//cout << mpText << " is already stored as " << str << endl;
		return;
	}
	else {
		//cout << mpText << " char has been changed to ";
		delete[] mpText;
		if (str == NULL) {
			mLength = 0;
		}
		else {
			mLength = strlen(str);
		}
		mpText = new char[mLength + 1];
		for (int i{ 0 }; i < mLength; ++i)  //deep copies the whole char array
			mpText[i] = str[i];
		mpText[mLength] = '\0';           //null terminates the arr
		//cout << mpText << endl;
	}
}

//An equals member function accepting a String object parameter(by 
//const reference), and a return type of bool.It compares the character 
//data of this String with the character data of the parameter String 
//object and returns true if they match, else false (the C++ string 
//library function strcmp or strncmp can be used for the comparison).

const bool TString::equals(const char* str) const {
	if (strcmp(mpText, str) != 0) {
		//cout << mpText << " is not the same as " << str << endl;
		return 0;
	}
	if (strcmp(mpText, str) == 0) {
		//cout << mpText << " is the same as " << str << endl;
		return 1;
	}
	else {
		//cout << "equals() Bool function seems to be broken..." << endl;
	}
}

//An indexOf member function accepting a char parameter, and a return 
//type of int.It searches this String's character data for the first 
//occurrence of the parameter character and returns the position if 
//found (first character is position 0) or -1 if not found.

const int TString::indexOf(char para) const {
	//cout << "Searching for " << para << " inside " << mpText << endl;
	for (int i = 0; i < mLength; i++) {
		if (mpText[i] == para) {
			//cout << "Character is in position " << i << endl;
			return i;
		}
	}
	//cout << para << " was not found in " << mpText << endl;
	return -1;
}