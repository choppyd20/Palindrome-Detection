#include "Stack.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string word;
	char choice;

	//welcome the user to the program
	cout << "Welcome to the Palindrome Detecting Program" << endl;
	do {
		Stack S;

		//prompt the user to enter a word/sequence
		cout << "Please enter a word/sequence: ";
		string a;
		string reversed;
		cin >> a;
		for (int i = 0; i < a.size(); i++) {
			S.push(a[i]);
		}
		while (S.numEntries > 0) {
			reversed.push_back(S.top->element);
			S.pop(choice);
		}

		//If they are equal, identify the word/sequence as a palindrome
		if (a == reversed) {
			cout << "This is a palindrome!" << endl;
		}

		//Otherwise indicate they are not a palindrome
		else {
			cout << "This is NOT a palindrome!" << endl;
		}

		//Prompt the user to choose to try another word/sequence or quit the program
		cout << "Would you like to try another word/sequence? (Press Y or N) ";
		cin >> choice;

	} while (choice == 'Y' || choice == 'y');
	return 0;
}