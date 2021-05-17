// File: QueueItem.cpp
// Name: Alex Williams
// Date: 9/25/2020
// Course: INFO.2680-061
// Desc: 
// Usage:

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include"QueueItem.h"

QueueItem::QueueItem(const char* pData, int id) {
	memset(_data, '\0', sizeof(_data));
	strcpy_s(_data, pData);
	_itemId = id;
	_pNext = NULL;
};

void QueueItem::setNext(QueueItem* pItem) {
	if (_pNext != NULL) {
		QueueItem* t_prt = _pNext;
		_pNext = pItem;
		pItem->_pNext = t_prt;
	}
	else
	{
		_pNext = pItem;		
	}

};

QueueItem* QueueItem::getNext() {
	return _pNext;
};

int QueueItem::getId() const {
	return _itemId;
};

const char* QueueItem::getData() const {
	return _data;
};