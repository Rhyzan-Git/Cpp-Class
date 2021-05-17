// File: QueueItem.h
// Name: Alex Williams
// Date: 9/25/2020
// Course: INFO.2680-061
// Desc: 
// Usage:

#ifndef QUEUEITEM_H
#define QUEUEITEM_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#pragma once
class QueueItem
{
public:
    QueueItem(const char* pData, int id); // ctor
    void setNext(QueueItem* pItem);
    QueueItem* getNext();
    int getId() const;
    const char* getData() const;

private:
    char _data[30];    // data value (null terminated character string)
    int _itemId; // unique id for item in queue
    QueueItem* _pNext; // next item in queue
};

#endif /* QUEUEITEM_H */
