// File: Queue.cpp
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

// Constructor to initialize NULL values
Queue::Queue() {
    _pHead = NULL;
    _pTail = NULL;
    _itemCounter = NULL;
    cout << "Queue was initalized" << endl;
};

//Destructor to remove all values from memory
Queue::~Queue() {
    erase();
};

//adding to the queue at one end(the tail)
void Queue::addItem(const char* pData)
{
    // dynamically create and init a new QueueItem object
    QueueItem* pItem = new QueueItem(pData, ++_itemCounter);

    if (_pHead == NULL) // check for empty queue
    {
        _pHead = _pTail = pItem;
        cout << "First in the queue is " << _pHead->getData() << endl;
        ++QueueLength;
    }
    else
    {
        // link new item onto tail of list using _pTail pointer
        _pTail->setNext(pItem);
        _pTail = pItem;
        //cout << "_pNext is " << pItem->getNext() << "...." << endl;
        cout << "First in queue is now " << _pHead->getData();
        cout << " and Last in queue is now " << _pTail->getData() << endl;
        ++QueueLength;
    }
};

//removing from the queue at the other end(the head)
void Queue::removeItem() {
    if (_pHead == NULL) {
        _pTail = _pHead;
        cout << "There doesn't seem to be anything in the queue...." << endl;
    }
    else {
        QueueItem* temp;
        temp = _pHead;
        cout << "Deleting " << _pHead->getData() << "...." << endl;
        _pHead = _pHead->getNext();
        delete temp;
        QueueLength--;
        if (QueueLength == 0) {
            _pHead = NULL;
        }
    }

};
//The removeItem() method removes the head QueueItem from the queue, 
//and should release the memory using the C++ delete operator.  It updates 
//_pHead to point at the following item (if any) as the new head. If the list 
//becomes empty, both _pHead and _pTail must be set to null (0). It does 
//not change the value of _itemCounter (which is always incremented when a new 
//item is added).  If called on an empty Queue, it does nothing.


//printing all items the queue(from head to tail)
void Queue::print() {
    if (_pHead == NULL) {
        cout << "The queue is empty." << endl;
    } 
    else {
        QueueItem* t_prt = _pHead;
        while (t_prt != 0) {
            cout << t_prt->getData() << "'s ID in the queue is ";
            cout << t_prt->getId() << endl;
            t_prt = t_prt->getNext();
        }
    }
};

//erasing all items in the queue(leaving the queue empty).
void Queue::erase() {
    while (_pHead != NULL) {
        removeItem();
    }
    _pHead = _pTail = 0;
};
//The erase() method removes all the items in the queue and 
//should release the memory. To implement, you could loop 
//calling removeItem() until the queue is empty.