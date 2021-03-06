//// DateDemo.cpp

#include <iostream>
#include <iomanip>
#include <string>
//#include <tchar.h>	  // for _TCHAR in Visual Studio
using std::cin;
using std::cout;
using std::endl;
using std::setfill;
using std::setw;
using std::string;

#include "Date.h"

// note - you may need to change the definition of the main function to
// be consistent with what your C++ compiler expects.

//int _tmain(int argc, _TCHAR* argv[])
int main()
{
    cout << "DateDemo starting ..." << endl << endl;

    Date d1;             // default ctor
    Date d2(7, 4, 1976); // July 4'th 1976
    Date d3(0, 15, 1880);// Adjusted by ctor to January 15'th 1900

    d1.print();         // prints 01/01/2000
    d1.printLong();     // prints 1 January 2000
    cout << endl;

    d2.print();         // prints 07/04/1976
    d2.printLong();     // prints 4 July 1976
    cout << endl;

    d3.print();         // prints 01/15/1900
    d3.printLong();     // prints 15 January 1900
    cout << endl;

    cout << "object d2's day is " << d2.getDay() << endl;
    cout << "object d2's month is " << d2.getMonth() << " which is " << d2.getMonthName() << endl;
    cout << "object d2's year is " << d2.getYear() << endl;

    string s;
    cout << endl << "Done - Press enter key to end program" << endl;
    cin >> s;

    return 0;
}
