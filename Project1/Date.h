// File: Date.h
// Name: Alex Williams
// Date: 9/20/2020
// Course: INFO.2680-061
// Desc: Date.h class file
// Usage: To create a Date data type that stores day, month, year and month name

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date {

private:
    int month;
    int day;
    int year;
    string monthname;
    char zero = '0'; //To be used as leading zero in 'print' function

public:

    void setMonth(int);
    void setDay(int, int);
    void setYear(int);
    void setMonthName(int);
    void print();
    void printLong();

    //Default Constructor that initializes the Date to Jan, 1st 2000.
    Date() {
        month = 1;
        day = 1;
        year = 2000;
        monthname = "January";
        cout << "No user input. Default date set. (""0" << month << "/0" << day << "/" << year << ")\n";
    }

    //Constructor that takes in argument Data and stores it in Private
    Date(int aMonth, int aDay, int aYear) {
        setMonth(aMonth);
        setDay(aDay, aMonth);
        setYear(aYear);
        setMonthName(aMonth);
    }

    //Function to return Month's value from private data.
    int getMonth() const {
        return month;
    }

    //Function to return Day's value from private data.
    int getDay() const {
        return day;
    }

    //Function to return Year's value from private data.
    int getYear() const {
        return year;
    }

    //Function to return Month's name from private data.
    string getMonthName() const {
        return monthname;
    }
};

#endif