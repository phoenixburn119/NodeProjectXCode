/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: akin8529
 */

#include "NodeController.h"
#include <iostream>


NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodeController::~NodeController() {

}

void NodeController :: testLists()
{
	numbers->addToFront(3);
	numbers->addToend(9);
	cout << "End should be 9 and is: " << numbers->getEnd() >>
}

void NodeController :: start()
{
	arrayTimer.startTimer();
	for(int index = 0; index < notHipsterInts->getSize(); index)
	{
		notHipsterInts->set(index, (index + 1));
	}

	for(int index = notHipsterInts->getSize() -1; index >= 0; index--)
	{
		cout << "the stuff notHipsterInts array node " << index << notHipsterInts->get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}
