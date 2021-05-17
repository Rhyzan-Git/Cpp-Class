// File: Rolodex.h
// Name: Alex Williams
// Date: 11/01/2020
// Course: INFO.2680-061
// Desc: header file for rolodex
// Usage: holds functions and data values for rolodex

#ifndef Rolodex_H
#define Rolodex_H


#include <list>
#include <string>
#include <iostream>
#include "Card.h"
#include <algorithm>
using std::list;
using std::string;
using std::sort;
using std::cout;

#pragma once
class Rolodex
{
private:

	std::list<Card> dex;
	std::list<Card>::iterator dexIt;

public:

	void add(Card& card);
	Card remove();
	Card getCurrentCard();
	Card flip();
	bool search(const string& lastname, const string& firstname);
	void show(ostream& os);
	std::list<Card>::iterator nextDexIt(std::list<Card>::iterator);
};

#endif