// File: Queue.h
// Name: Alex Williams
// Date: 9/25/2020
// Course: INFO.2680-061
// Desc: 
// Usage:

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#pragma once
#include "QueueItem.h"

    class Queue {
    public:
        Queue();    // ctor inits a new empty Queue
        ~Queue();   // dtor erases any remaining QueueItems, destructor to empty the queue before it's destroyed (to release all memory)
        //The Queue destructor should ensure that all items are 
        //removed from the queue.The easiest way is to call the 
        //erase() method from the destructor.
        void addItem(const char* pData); //adding to the queue at one end(the tail)
        void removeItem(); //removing from the queue at the other end(the head)
        void print(); //printing all items the queue(from head to tail)
        void erase(); //erasing all items in the queue(leaving the queue empty).

    private:
        QueueItem* _pHead; // always points to first QueueItem in the list
        QueueItem* _pTail; // always points to the last QueueItem in the list
        int _itemCounter;  // always increasing for a unique id to assign to each new QueueItem
        int QueueLength = 0;
    };

#endif /* QUEUE_H */

