#include "Stack.h"
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void Stack::push(char element) {
	StackNode* node = new StackNode;
	node->element = element;
	node->below = top;
	top = node;
	numEntries++;
}
bool Stack::pop(char &element) {
	if (numEntries <= 0) {
		return false;
	}
	else {
		top = top->below;
		numEntries--;
		return true;
	}
}
bool Stack::isEmpty() {
	return top == NULL;
}
bool Stack::isPalindrome(string word) {
	string reverse = "";
	Stack S;
	char element;

	for (int i = 0; i < word.length(); i++) {
		S.push(word[i]);
	}
	while (!S.isEmpty()) {
		S.pop(element);
		reverse += element;
	}
	for (int i = 0; i < word.length(); i++) {
		if (reverse[i] != word[i]) return false;
	}
	return true;
}