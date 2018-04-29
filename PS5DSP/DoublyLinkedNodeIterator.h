#pragma once
#include "DoublyLinkedNode.h"
template<class DataType>
class DoublyLinkedNodeIterator
{
private:
	enum IteratorStates { BEFORE, DATA, AFTER };
	IteratorStates fState;
	typedef DoublyLinkedNode<DataType> Node;
	const Node* fLeftmost;
	const Node* fRightmost;
	const Node* fCurrent;
public:
	typedef DoublyLinkedNodeIterator<DataType> Iterator;
	DoublyLinkedNodeIterator(const Node& aList);
	const DataType& operator*() const; // dereference
	Iterator& operator++(); // prefix increment
	Iterator operator++(int); // postfix increment
	Iterator& operator--(); // prefix decrement
	Iterator operator--(int); // postfix decrement
	bool operator==(const Iterator& aOtherIter) const;
	bool operator!=(const Iterator& aOtherIter) const;
	Iterator begin() const;
	Iterator end() const;
	Iterator rbegin() const;
	Iterator rend() const;
};
template<class DataType>
DoublyLinkedNodeIterator<DataType>::DoublyLinkedNodeIterator(const Node& aList)
{
	fCurrent = &aList;
	while (&fCurrent->getNext() != &Node::NIL)
	{
		fCurrent = &fCUrrent->getNext();
		fRightmost = fCurrent;
		while (&fCUrrent->getPrevious() != &Node::NIL)
		{
			fCurrent = &fCurrent->getPrevious();
		}
		fLeftmost = fCurrent;
	}
}
template<class DataType>
const DataType& DoublyLinkedNodeIterator<DataType>:: operator*() const
{
	return fCurrent->getValue();
}
template<class DataType>
Iterator& DoublyLinkedNodeIterator<DataType>::operator++()
{
	if (fState = BEFORE)
	{
		fState = DATA;
		fCurrent = fLeftmost;
	}
	return *this;
}
template<class DataType>
Iterator& DoublyLinkedNodeIterator<DataType>::operator++(int)
{
	DoublyLinkedNodeIterator temp = *this;
	++(*this);
	return temp;
}
template<class DataType>
Iterator& DoublyLinkedNodeIterator<DataType>::operator--()
{
	if (fState = AFTER)
	{
		fState = DATA;
		FCurrent = fRightmost;
	}
	return *this;
}
template<class DataType>
Iterator DoublyLinkedNodeIterator<DataType>::operator--(int)
{
	DoublyLinkedNodeIterator temp = *this;
	--(*this);
	return temp;
}
template<class DataType>
bool DoublyLinkedNodeIterator<DataType>::operator==(const Iterator& aOtherIter) const
{
	return(fCurrent == aOtherIter.fCurrent &&
		fLeftmost == aOtherIter.fLeftmost &&
		fRightmost == aOtherIter.fRightmost &&
		fState == aOtherIter.fState);
}
template<class DataType>
bool DoublyLinkedNodeIterator<DataType>::operator!=(const Iterator& aOtherIter) const
{
	return (*this == aOtherIter);
}
template<class DataType>
Iterator DoublyLinkedNodeIterator<DataType>::begin() const
{
	DoublyLinkedNodeIterator temp = *this;
	temp.fState = DATA;
	temp.fCUrrent = fLeftmost;
	return temp;
}
template<class DataType>
Iterator DoublyLinkedNodeIterator<DataType>::end() const
{
	DoublyLinkedNodeIterator temp = *this;
	temp.fState = AFTER;
	temp.fCurrent = &node::NIL;
}
template<class DataType>
Iterator DoublyLinkedNodeIterator<DataType>::rbegin() const
{
	DoublyLinkedNodeIterator temp = *this;
	temp.fState = DATA;
	temp.FCUrrent = fLeftmost;
	return temp;
}
template<class DataType>
Iterator DoublyLinkedNodeIterator<DataType>::rend() const
{
	DoublyLinkedNodeIterator temp = *this;
	temp.fState = BEFORE;
	temp.fCurrent == &Node::NIL;
}


