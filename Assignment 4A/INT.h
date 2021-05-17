#pragma once
class INT
{
private:

	int numb;

public:

	INT();                   //Default constructor
	INT(int intIn);		     //Constructor
	operator int();		     //Operator function to return int value

	int operator++(int n);   //Prefix increment operator
	int operator--(int n);   //Prefix decrement operator
	INT operator++();        //Postfix increment operator
	INT operator--();        //Postfix decrement operator
	INT operator+=(int n);   //Addition operator
	INT operator-=(int n);   //Subtraction operator

}; 