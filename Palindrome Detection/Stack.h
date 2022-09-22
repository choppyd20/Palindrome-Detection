#ifndef STACK_H
#define STACK_H

#include "StackNode.h"
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

//create a class called Stack
class Stack {

//create a class member function
public:
	StackNode* top;
	int numEntries;
	
	//calling the constructor
	Stack() {
		top = NULL;
		numEntries = 0;
	}
	
	//calling the destructor 
	~Stack() {
		char element;
		while (!isEmpty()) {
			pop(element);
		}
	}

	void push(char element);
	bool pop(char &element);
	bool isEmpty();
	bool isPalindrome(string word);

};
#endif 