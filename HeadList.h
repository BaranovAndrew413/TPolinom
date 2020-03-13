#pragma once

#include <iostream>
#include "TList.h"

using namespace std;
template <class T>
class THeadList : public TList<T> {
protected:
	TNode<T> *pHead;
public:
	THeadList();
	~THeadList();

	void insFirst(const T& elem);
	void DelFirst();
};







template <class T>
THeadList<T>::THeadList() : TList() {
	pHead = new TLink<T>;
	pStop = pHead;
	pHead->pNext = pHead;
}

template <class T>
THeadList<T>::~THeadList() {
	TList<T>::~TList();
	delete[] pHead;
}

template <class T>
void THeadList<T>::insFirst(const T& elem) {
	TList::insFirst(elem);
	pHead->pNext = pFirst;
}

template <class T>
void THeadList<T>::DelFirst() {
	TList::DelFirst();
	pHead->pNext = pFirst;
}