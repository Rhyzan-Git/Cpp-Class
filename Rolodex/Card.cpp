// File: Card.cpp
// Name: Alex Williams
// Date: 11/01/2020
// Course: INFO.2680-061
// Desc: card member functions
// Usage: defines member functions for cards

#include "Card.h"


//Default constructor
Card::Card() {
		fName = "Blank";
		lName = "Blank";
		occup = "Blank";
		address = "Blank";
		pNumber = "Blank";
};

//Constructor for Card class
Card::Card(string f, string l, string o, string a, string p) {
	set_fName(f);
	set_lName(l);
	set_occup(o);
	set_address(a);
	set_pNumber(p);
};


//Get member functions, returns the respective string value
string Card::get_fName() { 
	return fName; };

string Card::get_lName() { 
	return lName; };

string Card::get_occup() { 
	return occup; };

string Card::get_address() { 
	return address; };

string Card::get_pNumber() { 
	return pNumber; };


//Set member functions, sets the individual card data
void Card::set_fName(string f) { 
	fName = f; };

void Card::set_lName(string l) { 
	lName = l; };

void Card::set_occup(string o) { 
	occup = o; };

void Card::set_address(string a) { 
	address = a; };

void Card::set_pNumber(string p) { 
	pNumber = p; };

//Show member function, returns data stored in the card
void Card::show(ostream& os) { 
	os << fName << " " << lName << endl << occup << endl << address << endl << pNumber << endl << endl; 
};


