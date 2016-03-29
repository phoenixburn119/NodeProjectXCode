/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: akin8529
 */

#include "NodeController.h"
#include <iostream>
#include <stdb.h> //Allows access to rand() function for random #


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

void NodeController :: sortData()
{
    /*
     Create a CTECLis, CTECArray
     Fill them with random things and junk
     Start a timer, sort, stop timer, and display the info for list
     Start a timer, sort, stop timer, and display the info for array
     */
    CTECArray<int> randomNumberArray(5000);
    CTECList<int> randomNumberList;
    int myCPluslusArray[5000]
    
    for(int spot = 0; spot < 5000; spot++)
    {
        int myRandom = rand();
        randomNumberArray.set(spot, myRandom);
        randomNumberList.addToEnd(myRandom);
        myCPlusPlusArray[spot] = myRandom;
    }
    
    Timer sortTimer;
    sortTimer.startTimer();
    randomNumberArray.startTimer();
    stortTimer.stopTimer();
    sortTimer.displayTimerInformation();
    
    sortTimer.resetTimer();
    
    sortTimer.startTimer();
    std::sort(begin(myCPlusPlusArray), end(myCPlusPlusArray));
    sorttimer.stopTimer();
    sortTimer.displayTimerInformation();
    
    sortTimer.resetTimer(); 
}
