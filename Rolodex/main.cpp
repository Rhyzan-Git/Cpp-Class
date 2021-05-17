// File: main.cpp
// Name: Alex Williams
// Date: 11/01/2020
// Course: INFO.2680-061
// Desc: main function for rolodex
// Usage: builds rolodex and includes functionality to use rolodex

#include <iostream>
#include <string>
#include "Card.h"
#include "Rolodex.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

/* list - displays the entire rolodex. It calls the Rolodex's show(...) 
function to display the all the rolodex cards.. */

void list(Rolodex& temp) {
	cout << "----------------------Listing the whole Rolodex----------------------" << endl;
	temp.show(cout);
	cout << "-------------------------End of the Rolodex--------------------------" << endl;
};

/* view -  displays the card at the current position in the rolodex. 
It calls the Rolodex's getCurrentCard() function, then calls show(...) 
on the returned Card. */

void view(Rolodex& temp) {
	temp.getCurrentCard().show(cout);
};

/* flip - updates the current roledex position to the next card, and 
displays it. Flipping past the last card wraps around to the first card. 
It calls the Rolodex's flip() function to get the next Card, then calls 
show(...) on the returned Card. */

void flip(Rolodex& temp) {
	cout << "Flipping rolodex...";
	temp.flip().show(cout);
	temp.getCurrentCard().show(cout);
	cout << " is now at the front." << endl;
};

/* add - adds a new card to the rolodex. Prompts for each field value, 
reads them, and creates a new Card object with the information, then 
calls Rolodex's add(...) function to add the new Card to the rolodex 
(which puts it in the correct position in its STL container).*/

void add(Rolodex deck) {
	//Initialize string variables for user input, assign to null just incase no input data is entered
	string f, l, o, a, p;
	cout << "Enter the person's first name: ";
	cin >> f;
	
	cout << "Enter the person's last name: ";
	cin >> l;
	
	cout << "Enter the person's occupation: ";
	cin >> o;
	
	cout << "Enter the person's address, city, state and zip code: ";
	cin >> a;
	
	cout << "Enter the person's phone number: ";
	cin >> p;

	Card *newCard = new Card(f, l, o, a, p);

	deck.add(*newCard);
};

/* remove - removes the card at the current position. It first calls the
Rolodex's getCurrentCard() function , calls show(...) on the returned
card to display it as part of the confirmation prompt, and if 'yes' is
entered to remove it, it calls Rolodex's remove() function to remove 
the Card from the rolodex. */

void remove(Rolodex &temp) {
	char confirm;
	tryAgain:
	cout << "Do you really want to delete ";
			temp.getCurrentCard().show(cout);
	cout << "? (Y/N): ";
	cin >> confirm;

	if (confirm == 'Y') {
		temp.getCurrentCard().show(cout);
		cout << " was deleted." << endl;
		temp.remove();
		return;
	};
	if (confirm == 'N') {
		temp.getCurrentCard().show(cout);
		cout << " was not deleted. Returning." << endl;
		return;
	};
	if (confirm != 'Y' && confirm != 'N') {
		cout << "Invalid response." << endl;
		goto tryAgain;
	};
};

/* search - finds and displays a card.. This command prompts for the last
name and first name to search for, then calls the Rolodex's search(..) 
function. If a matching card is found, it then calls the Rolodex's 
getCurrentCard() function to get it, and then calls show() to display it.  
If no matching card is found, it displays "card not found". */

void search(Rolodex& temp) {
	string lName, fName;
	cout << "Enter the person's first name: ";
	cin >> fName;

	cout << "Enter the person's last name: ";
	cin >> lName;

	if (temp.search(lName, fName))
		temp.getCurrentCard().show(cout);
	else {
		cout << fName << " " << lName << " was not found in the rolodex." << endl;
		return;
	}
};

/*
quit - exits the program.

*/

int main() {

	Rolodex myDeck;

	cout << "Building Rolodex." << endl;
	Card *newCard[20];
	newCard[0] = new Card("Tony", "Hansen", "Writer", "12 E.St.NY, NY 33333", "555 - 9999");
	myDeck.add(*newCard[0]);

	newCard[1] = new Card("Jon", "Smyth", "Computer Hardware", "CMU Computer Services Pittsburgh, PA", "555 - 1324");
	myDeck.add(*newCard[1]);

	newCard[2] = new Card("Alonza", "Heard", "Mechanic", "123 Anyplace Ave Malden, MA", "555 - 5678");
	myDeck.add(*newCard[2]);

	newCard[3] = new Card("Jen", "Reyes", "Graphic artist", "325 Oak Rd Wilmington, MA", "555 - 4950");
	myDeck.add(*newCard[3]);

	newCard[4] = new Card("Alan", "Lupine", "Vet", "1 Bigelow Ave.Lawrence, MA", "555 - 7654");
	myDeck.add(*newCard[4]);

	newCard[5] = new Card("Jewel", "Proverb", "Landscaper", "34 Washington St.Waltham, MA", "555 - 3333");
	myDeck.add(*newCard[5]);

	newCard[6] = new Card("Paul", "Revere", "Radical Revolutionary", "45 Commonwealth Ave.Boston, MA", "555 - 1776");
	myDeck.add(*newCard[6]);

	newCard[7] = new Card("Adolf", "Coors", "Beer Manufacturer", "Boston MA", "555 - 2337");
	myDeck.add(*newCard[7]);

	newCard[8] = new Card("Seymour", "Papert", "Lego Professor", "MIT", "555 - 1111");
	myDeck.add(*newCard[8]);

	newCard[9] = new Card("Fred", "Milton", "Sales", "12 Freedom Way Nashua, NH", "555 - 9981");
	myDeck.add(*newCard[9]);

	list(myDeck);
	myDeck.search("Heard", "Alonza");
	myDeck.getCurrentCard().show(cout);
	myDeck.flip();
	myDeck.getCurrentCard().show(cout);
	myDeck.search("Smyth", "Jon");
	myDeck.getCurrentCard().show(cout);
	myDeck.remove();
	myDeck.getCurrentCard().show(cout);
	newCard[1] = new Card("Matthew", "Williams", "Teacher", "69 Main St, Acton, MA", "555 - 9330");
	myDeck.add(*newCard[1]);
	myDeck.getCurrentCard().show(cout);
	myDeck.flip();
	myDeck.remove();
	myDeck.getCurrentCard().show(cout);
	newCard[7] = new Card("Jim", "Butler", "Contractor", "33 Cedar Lane, Concord, MA", "555 - 8535");

	myDeck.add(*newCard[7]);

	myDeck.getCurrentCard().show(cout);
	myDeck.search("Proverb", "Jewel");
	myDeck.getCurrentCard().show(cout);
	myDeck.remove();
	myDeck.getCurrentCard().show(cout);
	newCard[5] = new Card("Jim", "Butler", "Consultant", "22 Minuteman St, Lexington, MA.",  "555 - 4422");
	myDeck.add(*newCard[5]);
	newCard[5] = new Card("Dan", "Butler", "Chauffeur", "68 Willow St, Westford, MA", "555 - 8493");
	myDeck.add(*newCard[5]);
	list(myDeck);

	return 0;
}