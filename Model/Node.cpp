/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: akin8529
 */
#include <iostream>
#include "Node.h"

template <class Type>
Node<Type> :: Node()
{
	this->pointers = nullptr;
}

template <class Type>
Node<Type> :: Node(Type value)
{
	this->value = value;
	this->pointers = nullptr;
}

template <class Type>
Node<Type> :: ~Node()
{
	//TODO Auto-generated destructor stub
}

template <class Type>
Type Node<Type> :: getValue()
{
	return this->value;
}

template <class Type>
void Node<Type> :: setValue(const Type& value)
{
	this->value = value;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}


