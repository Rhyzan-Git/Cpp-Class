// File: Card.h
// Name: Alex Williams
// Date: 11/01/2020
// Course: INFO.2680-061
// Desc: header file for cards
// Usage: holds functions and data values for cards

#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>
using std::ostream;
using std::string;
using std::endl;

#pragma once
class Card
{
private:

	string fName;
	string lName;
	string occup;
	string address;
	string pNumber;

public:

	//Default constructor
	Card();
	//Constructor
	Card(string f, string l, string o, string a, string p);


	//Get member functions, returns the respective string value
	string get_fName();
	string get_lName();
	string get_occup();
	string get_address();
	string get_pNumber();

	//Set member functions, sets the individual card data
	void set_fName(string f);
	void set_lName(string l);
	void set_occup(string o);
	void set_address(string a);
	void set_pNumber(string p);

	//Show member function, returns data stored in the card
	void show(ostream& os);


};

#endif