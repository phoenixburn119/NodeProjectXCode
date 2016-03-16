/*
 * Timer.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: akin8529
 */

#include "Timer.h"
#include <iostream>
#include <iomanip> //Make output look nicer!
using namespace std;

Timer::Timer()
{
	executionTimer = 0;
}

Timer::~Timer()
{

}

void Timer::displayTimerInformation()
{
	cout << fixed;
	cout << setprecision(8);

	cout << executionTimer << " μs (microseconds) for the code " << endl;
	cout << "Which is " << float(executionTimer)/CLOCKS_PER_SEC<< " seconds" << endl;
}

void Timer::startTimer()
{
	executionTimer = clock();
}

void Timer::stopTimer()
{
	executionTimer = clock() - executionTimer;
}

void Timer::resetTimer()
{
	executionTimer = 0;
}

long Timer::getExecutionTimerInMicroseconds()
{
	return executionTimer;
}

