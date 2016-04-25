/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: akin8529
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/Timer.h"
#include <string>
using namespace std;

class NodeController {
private:
	CTECArray<int> * notHipsterInts;
	Timer arrayTimer;
    void sortData();
    
    void tryTree();
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
