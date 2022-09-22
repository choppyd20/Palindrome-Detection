#ifndef STACKNODE_H
#define STACKNODE_H

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//create a class called StackNode
class StackNode {

//create the class member functions
public:
	char element;
	StackNode* below;
	
	//calling the constructor to intitialize the StackNode
	StackNode() {
		element = '\0';
		below = NULL;
	}
	StackNode(char a, StackNode* ptr) {
		element = a;
		below = ptr;
	}
};
#endif 