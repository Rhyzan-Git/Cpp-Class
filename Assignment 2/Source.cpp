// File: Souce.cpp
// Name: Alex Williams
// Date: 9/25/2020
// Course: INFO.2680-061
// Desc: 
// Usage:

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Queue.h"
#include "QueueItem.h"

int main() {
    //Create a Queue
    Queue myQueue;
    //Call Remove. Should do nothing since the Queue is empty.
    myQueue.removeItem();
    //Add 4 elements.
    myQueue.addItem("Red");
    myQueue.addItem("Green");
    myQueue.addItem("Blue");
    myQueue.addItem("Orange");
    //Print out the list, both the number and data.
    myQueue.print();  // print contents of queue (item ID and data)
    //Remove 2 elements.
    myQueue.removeItem();
    myQueue.removeItem();
    //Add 4 elements.
    myQueue.addItem("Pink");
    myQueue.addItem("Teal");
    myQueue.addItem("Yellow");
    myQueue.addItem("White");
    //Print out the list, both the number and data.
    myQueue.print();
    //Remove 4 elements
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
    //Print out the list, both the number and data.
    myQueue.print();
    //Erase the queue.
    myQueue.erase();
    //Add  3 elements.
    myQueue.addItem("Purple");
    myQueue.addItem("Black");
    myQueue.addItem("Cyan");
    //Print out the list, both the number and data.
    myQueue.print();
    //Erase the queue.
    myQueue.erase();
    //Print out the list.
    myQueue.print();

}









