/*
 * Timer.h
 *
 *  Created on: Feb 16, 2016
 *      Author: akin8529
 */

#ifndef MODEL_TIMER_H_
#define MODEL_TIMER_H_
#include <time.h>

class Timer {
	clock_t executionTimer;

public:
	Timer();
	virtual ~Timer();
	void startTimer();
	void stopTimer();
	void resetTimer();
	void displayTimerInformation();
	long getExecutionTimerInMicroseconds();
};

#endif /* MODEL_TIMER_H_ */
