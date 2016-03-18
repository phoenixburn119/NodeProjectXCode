/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: akin8529
 */

#include "CTECList.h"
#include "ArrayNode.cpp"
#include <iostream>
#include <assert.h>
using namespace std;

template<class Type>
CTECList<Type> :: CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template<class Type>
CTECList<Type> :: ~CTECList() {
	// TODO Auto-generated destructor stub

}

template<class Type>
Type CTECList<Type> :: removeFromFront()
{
	//Check that not removing from empty list
	assert(this->size > 0);
	//Declare an variable of the type to return.
	Type thingToRemove;
	//Create a pointer to what is after head.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	//Get what had is holding!
	thingToRemove = this->head->getValue();
	//Delete what head is pointing to.
	delete this->head;
	//Set head to the new head.
	this->head= newHead;
	this->calculateSize();

	return thingToRemove;
}

template<class Type>
Type CTECList<Type> :: removeFromEnd()
{
	//Find the next spot.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Remove head
	delete head;
	//Move head to next spot.
	head = newHead;
}

template<class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	Type returnValue;

	assert(size > 0);
	assert(index >= 0);
	assert(index < size);
	assert(size > 0 && index < size);
}

template<class Type>
Type CTECList<Type> :: removeFromEnd()
{
	/**
	 * Check size is valid
	 * Create a return variable
	 * Loop until the next to last Node
	 * Grab the value from t last node
	 * Delete the last node
	 * Set new last node as the end
	 */
	assert(size>0);

	Type returnValue;

	if(size == 1)
	{
		ArrayNode<Type> * toRemove = end;
		returnValue = removeFromFront();
		end = nullptr;
		head = nullptr;
		delete toRemove;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int index = 0; index < size - 1; index++)
		{
			current = current->getNext();
		}
		returnValue - end->getValue();
		delete end;
		current = end;
		current->setNext(nullptr);
	}
	calculateSize();
	return returnValue;
}

template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = count;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current->getNext() != nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;
	}
}

template <class Type>
    int CTECList<Type> :: indexOf(Type searchValue)
    {
        assert(this->size >0);
        
        int index;
        
        ArrayNode<Type> * searchPointer;
        
        for(searchPointer = head; searchPointer != nullptr; searchPointer = searchPointer->getNext())
        {
            if(searchValue == searchPointer->getValue())
            {
                return index;
            }
            index++;
        }
        index = -1;
        return index;
    }
}