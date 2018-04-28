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

}
template<class DataType>
const DataType& DoublyLinkedNodeIterator<DataType>:: operator*() const
{

}
template<class DataType>
Iterator& DoublyLinkedNodeIterator<DataType>::operator++()
{

}
template<class DataType>
Iterator& DoublyLinkedNodeIterator<DataType>::operator++(int)
{

}
template<class DataType>
Iterator& DoublyLinkedNodeIterator<DataType>::operator--()
{

}
template<class DataType>
Iterator DoublyLinkedNodeIterator<DataType>::operator--(int)
{

}
template<class DataType>
bool DoublyLinkedNodeIterator<DataType>::operator==(const Iterator& aOtherIter) const
{

}
template<class DataType>
bool DoublyLinkedNodeIterator<DataType>::operator!=(const Iterator& aOtherIter) const
{

}
template<class DataType>
Iterator  DoublyLinkedNodeIterator<DataType>::begin() const
{

}
template<class DataType>
Iterator  DoublyLinkedNodeIterator<DataType>::end() const
{

}
template<class DataType>
Iterator  DoublyLinkedNodeIterator<DataType>::rbegin() const
{

}
template<class DataType>
Iterator  DoublyLinkedNodeIterator<DataType>::rend() const
{

}


