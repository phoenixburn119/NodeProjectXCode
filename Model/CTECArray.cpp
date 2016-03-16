/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: akin8529
 */

#include "CTECArray.h"
#include <assert.h>
using namespace std;

template <class Type>
CTECArray<Type> :: CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	//Defensive
	assert(size > 0);

	for (int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{	//Regualr ArrayNodes are being make.
			ArrayNode<Type> * nextNode = ArrayNode<Type>();
			nextNode->setNext(head);
			this->head = nextNode;
		}
		else
		{	//The first ArrayNode needs to be made.
			ArrayNode<Type> * firstNode = new ArrayNode<Type>();
			this->head = &firstNode;
		}
	}
    return current->getValue();
}


template <class Type>
CTECArray<Type> :: ~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
			delete deleteMe;
			deleteMe = head;
		}

		delete deleteMe;
		deleteMe = head;
	}

	delete head;
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

/*
 *
 */
template <class Type>
void CTECArray<Type> :: set(int position, Type value)
{
	//We need to do bounds checking so we do not crash the program.
	if(position >= size || position < 0)
	{
		//I am out of bounds and need to do something about it
		cerr << "Position value is out of bounds." << endl;
	}
	else
	{
		//I am in bounds so I am inclusive
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot < position; spot++)
		{
			if(spot != position)

			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}
	}
}

/*
 * Gets the next value
 */
template <class Type>
Type CTECArray<Type> :: get(int position)
{
	assert(position < size && position >= 0);
	{
		//I am in bounds
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}
