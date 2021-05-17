// File: Rolodex.cpp
// Name: Alex Williams
// Date: 11/01/2020
// Course: INFO.2680-061
// Desc: rolodex member functions
// Usage: defines member functions for rolodex

#include "Rolodex.h"
#include "Card.h"

//Sorts cards in the rolodex, used by add card function
bool cardSort(Card first, Card second) {
	//Gets last names to be sorted
	string _first = first.get_lName(), _second = second.get_lName();
	int i = 0;
	while ((i < _first.length() && i < _second.length())) {
		if (tolower(_first[i]) < tolower(_second[i]))
			return true;
		else if (tolower(_first[i]) > tolower(_second[i]))
			return false;
		++i;
	}
	if (_first.length() < _second.length())
		return true;
	else
		return false;
};

/* add(Card& card) takes a Card object as a parameter (by ref is 
more efficient), adds it to the STL container member (in the 
appropriate spot  so the cards are kept in alphabetical order by 
[last name, first name]), and sets it as the 'current card' in 
the Rolodex by setting the member STL iterator to point at the 
Card just added.. */

void Rolodex::add(Card& card) {
	//Adds card to the list
	dex.insert(dex.begin(), card);
	//Sorts list
	dex.sort(cardSort);
	//Starts at the begining of the sorted list
	dexIt = dex.begin();
	//Cycles through the list to find the inserted card
	while (dexIt != dex.end()) {
		if (!card.get_lName().compare(dexIt->get_lName()))
			return;
		else 
			dexIt++;
	}
};

/* remove() removes the current card from the Rolodex's STL container, 
returns it, and makes the following card the 'current' card. If the
last card in the STL container is removed, the 'current' card should
be set to the first card in the container (i.e. wraps around). */

Card Rolodex::remove() {
	Card tempCard;
	//Cycles to fron of rolodex after remvoing the card, 
	//uses nextDexIt to see if it's at the end of the list
	if (dexIt != dex.end() && nextDexIt(dexIt) == dex.end()) {
		cout << "Removing current card." << endl;;
		dex.erase(dexIt);
		dexIt = dex.begin();
		Card tempCard = *dexIt;
	}
	//just removes the current card
	else {
		list<Card>::iterator next = dexIt;
		next++;
		cout << "Removing current card." << endl;;
		dex.erase(dexIt);
		Card tempCard = *next;
		dexIt = next;
	}
	return tempCard;
};


//getCurrentCard() returns the current Card.

Card Rolodex::getCurrentCard() {
	return *dexIt;
};

/* flip() updates the current card position to the next Card in the Rolodex's 
STL container, and returns that Card. If at the last card in the container,
it wraps around to the first card. */

Card Rolodex::flip() {
	//Check to see if the list is at the end, if so move to the begining of the list
	if (dexIt != dex.end() && nextDexIt(dexIt) == dex.end()) {
		dexIt = dex.begin();
		cout << "That was the last card, flipped to the first card." << endl;
	}
	//Otherwise, move to the next card
	else {
		cout << "Card flipped." << endl;
		dexIt++;
	}
	//Returns pointer to the next card
	return *dexIt;
};

/* search(const std::string& lastname, const std::string& firstname)  finds 
the requested card and sets it as the current card and returns true 
indicating the search found a card.  If no exact matching card is found,
the current card position remains unchanged and false is returned. */

bool Rolodex::search(const string& lastname, const string& firstname) {
	int i;
	list<Card>::iterator tempIt = dexIt;
	dexIt = dex.begin();
	//Searches whole list and compares last and first names to input, 
	//if name is not found it returns false
	while (dexIt != dex.end()) {
		if (!dexIt->get_lName().compare(lastname) && !dexIt->get_fName().compare(firstname)) {
			cout << "Name found: " << lastname << ", " << firstname << endl;
			return true;
		}
		else
			dexIt++;
	}
	cout << "Name not found: " << lastname << " " << firstname << endl;
	return false;
};

/* show(ostream& os) takes an ostream as a parameter. It iterates through 
all the cards in the STL container from beginning to end, invoking each
card's show() method, and passing the ostream parameter. The Rolodex show()
doesn't do any actual output - it just iterates through the collection and 
requests each card to display its contents by calling its show() member 
function. The current card remains unchanged */

void Rolodex::show(ostream& os) {
	//Holds current value of ID
	list<Card>::iterator tempIt = dexIt;

	//Cycles through all the cards in the deck
	for (dexIt = dex.begin(); dexIt != dex.end(); dexIt++)
		dexIt->show(os);

	//Restores the original value back to ID
	dexIt = tempIt;
};

//used to check if the rolodex is at the end of the list
list<Card>::iterator Rolodex::nextDexIt(list<Card>::iterator iter) {
	return ++iter;
};