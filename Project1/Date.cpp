// File: Date.cpp
// Name: Alex Williams
// Date: 9/20/2020
// Course: INFO.2680-061
// Desc: Date.cpp file which handles the member functions for the Date.h class.
// Usage: To be used by Date.h class file.

#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::string;
using namespace std;

#include "Date.h"

//Sets Month value equal to input if input is between 1 and 12, else sets to default of 1
void Date::setMonth(int aMonth) {
    if (aMonth >= 1 && aMonth <= 12) {
        month = aMonth;
        cout << "Month set to " << aMonth << ".\n";
    }
    else {
        month = 1;
        cout << "Invalid month. Setting the month to 1. \n";
    }
}

//Sets Day value to 1 if not between 1 and 31. Also checks specific month cases and sets day to 1 if incorrect day is input.
//Otherwise stores day input
void Date::setDay(int aDay, int aMonth) {
    if (aDay < 1 || aDay > 31) {
        day = 1;
        cout << "Invalid day. Setting the day to the 1st. \n";
    }
    if (aMonth = 2 && aDay > 28) {
        day = 1;
        cout << "Febuary only has 28 days of the month. Setting the day to the 1st. \n";
    }
    if (aMonth = 4 && aDay > 30) {
        day = 1;
        cout << "April only has 30 days of the month. Setting the day to the 1st. \n";
    }
    if (aMonth = 6 && aDay > 30) {
        day = 1;
        cout << "June only has 30 days of the month. Setting the day to the 1st. \n";
    }
    if (aMonth = 9 && aDay > 30) {
        day = 1;
        cout << "September only has 30 days of the month. Setting the day to the 1st. \n";
    }
    if (aMonth = 11 && aDay > 30) {
        day = 1;
        cout << "November only has 30 days of the month. Setting the day to the 1st. \n";
    }
    else {
        day = aDay;
        cout << "Day set to " << aDay << ".\n";
    }
}

//Sets month name using a switch based on the value stored in month.
void Date::setMonthName(int aMonth) {
    switch (month) {
    case 1:  monthname = "January";   break;
    case 2:  monthname = "Febuary";   break;
    case 3:  monthname = "March";     break;
    case 4:  monthname = "April";     break;
    case 5:  monthname = "May";       break;
    case 6:  monthname = "June";      break;
    case 7:  monthname = "July";      break;
    case 8:  monthname = "August";    break;
    case 9:  monthname = "September"; break;
    case 10: monthname = "October";   break;
    case 11: monthname = "November";  break;
    case 12: monthname = "December";  break;
    default: monthname = "January";
        cout << "That wasn't supposed to happen....\n"; //Debug statement, if this prints then something went wrong
        break;
    }
}
//Sets Year value to 1900 if input is less than 1900. Otherwise stores input year.
void Date::setYear(int aYear) {
    if (aYear < 1900) {
        year = 1900;
        cout << "Invalid year. Setting the year to 1900. \n";
    }
    else {
        year = aYear;
        cout << "Year set to " << aYear << ".\n";
    }
}

//Outputs date format (mm/dd/yyyy)
void Date::print()
{
    cout.fill(Date::zero);
    cout.width(2);
    cout << month << "/";
    cout.width(2);
    cout << day << "/" << year << '\n';
}

//Outputs long date format (dd, month name, yyyy)
void Date::printLong() {

    cout << day << " " << monthname << " " << year;
}