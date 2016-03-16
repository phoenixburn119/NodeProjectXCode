/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: akin8529
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

template<class Type>
class CTECList
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
	void calculateSize();
public:
	CTECList();
	virtual ~CTECList();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
	//The end of my life
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
};

#endif /* MODEL_CTECLIST_H_ */
